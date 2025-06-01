/*
 *
 *
 *

 - We have virtual machine Qemu to run the kernel
 - Means we dont have any actual hardware
 - Mean when we are doing memory reads, they are intercepted by the qemu (specially MemIO)
 - 
 - So we will notice that this device driver nither having interrupt handler nor doing the polling.
 - How the device driver is sure that the when it readring the random number, through ioread32(), it gets the correct and sequencial response.
 - ioread32() is getting intercepted by the qemu.



User-space: ioctl(MY_RNG_GET_RANDOM)
  ↓
Kernel Module: dev_ioctl -> ioread32(mmio_base + 0x0)
  ↓
Kernel: Translates mmio_base to physical address (BAR0)
  ↓
CPU: Issues memory read to PCI device address
  ↓
QEMU: Traps MMIO access, calls mmio_read(opaque, 0x0, 4)
  ↓
QEMU: mmio_read generates rand(), returns value
  ↓
Kernel: ioread32 returns random number
  ↓
Kernel Module: Copies number to user-space
  ↓
User-space: Receives random number



 *
 *
 *
 */


#include <linux/ioctl.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/uaccess.h>
#include <linux/io.h>

#define MY_RNG_IOCTL_RAND _IOR('q', 1, unsigned int)
#define MY_RNG_IOCTL_SEED _IOW('q', 1, unsigned int)

//#define DEVICE_BASE_PHYS_ADDR 0xfebf1000
#define DEVICE_BASE_PHYS_ADDR 0xfebd1000

void *devmem = 0x0;

static long my_ioctl(struct file *file, unsigned int cmd, unsigned long arg) {

    switch (cmd) {

    case MY_RNG_IOCTL_RAND:
	    /* Application requests a new random number */
	    /* TODO implement that feature */

	    unsigned int random_val = ioread32(devmem + 0x00);
	    if (copy_to_user((unsigned int __user *)arg, &random_val, sizeof(random_val))) {
		    printk(KERN_ERR "my_rng: Failed to copy random value to user space\n");
		    return -EFAULT;
	    }

	    printk(KERN_INFO "my_rng: Read random value 0x%d\n", random_val);
	    break;

        case MY_RNG_IOCTL_SEED:
            /* Application requests to seed the RNG */
            /* TODO implement that feature */

            unsigned int seed_val;

            // Copy the seed value from user space
            if (copy_from_user(&seed_val, (unsigned int __user *)arg, sizeof(seed_val))) {
                printk(KERN_ERR "my_rng: Failed to copy seed value from user space\n");
                return -EFAULT;
            }

            iowrite32(seed_val, devmem + 0x04);

            printk(KERN_INFO "my_rng: Seeded with 0x%x\n", seed_val);
            break;

        default:
            return -ENOTTY; // unknown command
    }

    return 0;
}

static struct file_operations my_rng_fops = {
    .unlocked_ioctl = my_ioctl,
};

static int __init my_rng_driver_init(void) {
    devmem = ioremap(DEVICE_BASE_PHYS_ADDR, 4096);

    if(!devmem) {
        printk(KERN_ERR "Failed to map device registers in memory");
        return -1;
    }

    if (register_chrdev(250, "my_rng_driver", &my_rng_fops) < 0) {
        printk(KERN_ERR "Failed to register my_rng_driver\n");
        return -1;
    }

    printk("my_rng_driver loaded, registered ioctls 0x%lx (get a random "
        "number) and 0x%lx (seed the generator) \n", MY_RNG_IOCTL_RAND,
        MY_RNG_IOCTL_SEED);
    return 0;
}

static void __exit my_rng_driver_exit(void) {
    unregister_chrdev(250, "my_rng_driver");

    if(devmem)
        iounmap(devmem);

    printk(KERN_INFO "my_rng_driver unloaded\n");
}

module_init(my_rng_driver_init);
module_exit(my_rng_driver_exit);

