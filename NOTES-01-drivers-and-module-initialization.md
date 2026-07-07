LINUX INITCALLS (IN-DEPTH IDE NOTES)
===================================

OVERVIEW
--------
Initcalls are the kernel's boot-time initialization mechanism.

Goal:
    Initialize the kernel in a deterministic order while respecting
    dependencies between subsystems.

Instead of one huge initialization list, Linux divides initialization
into ordered levels.

====================================================================
WHY INITCALLS EXIST
====================================================================

Wrong (Random Order)

    Network Driver
    PCI Core
    Block Layer
    Filesystem
    USB Core

Problem:

Network Driver
    |
    v
pci_get_device()
    |
    v
PCI not initialized
    |
    v
Failure

Another example:

ext2
    |
    v
Read block device
    |
    v
Block layer not initialized
    |
    v
Mount fails

Solution:
Initialize infrastructure first, drivers later.

====================================================================
BOOT FLOW
====================================================================

Bootloader
    |
    v
start_kernel()
    |
    v
setup_arch()
    |
    v
mm_init()
    |
    v
sched_init()
    |
    v
do_basic_setup()
    |
    v
do_initcalls()
    |
    +--> pure
    +--> core
    +--> postcore
    +--> arch
    +--> subsys
    +--> fs
    +--> device
    +--> late
    |
    v
Run init (/sbin/init)

====================================================================
LEVEL SUMMARY
====================================================================

0 pure
- Minimal helper infrastructure
- Almost no dependencies

1 core
- Core kernel infrastructure
- IDR, radix tree, synchronization

2 postcore
- Driver model helpers
- sysfs internals

3 arch
- APIC
- NUMA
- IOMMU
- CPU features
- PCI host bridge

4 subsys
- PCI core
- USB core
- SCSI core
- Networking core
- Block layer
- Driver core

5 fs
- ext2/ext3
- procfs
- sysfs
- tmpfs
- ramfs

6 device
- PCI drivers
- USB drivers
- Audio drivers
- GPU drivers
- Platform drivers

7 late
- Self tests
- Cleanup
- Late workers

====================================================================
LINKER MAGIC
====================================================================

Each initcall macro places a function into an ELF section.

Example:

core_initcall(foo);

=> .initcall1.init

Sections:

.initcall0.init
.initcall1.init
...
.initcall7.init

Linker exports:

__initcall0_start
...
__initcall7_start
__initcall_end

Kernel walks each section in order.

====================================================================
EXECUTION
====================================================================

for level = 0..7

    for every function in that section

        do_one_initcall()

No runtime sorting is needed.

====================================================================
DEPENDENCY GRAPH
====================================================================

pure
 |
core
 |
postcore
 |
arch
 |
subsys
 |
fs
 |
device
 |
late

Examples:

PCI Core (subsys)
        |
        v
PCI Driver (device)

Block Layer (subsys)
        |
        v
ext2 registration (fs)

====================================================================
BUILT-IN vs MODULE
====================================================================

Built into vmlinux:

module_init(foo);

-> becomes an initcall.

Loadable module:

insmod foo.ko

-> module loader directly calls foo_init()

Initcall levels are only for built-in kernel code.

====================================================================
DEBUGGING
====================================================================

Boot parameter:

initcall_debug

Useful printk:

printk("Level=%d (%s) Function=%pS\n",
       level,
       initcall_level_names[level],
       call);

%pS prints the symbol name.

====================================================================
KEY TAKEAWAYS
====================================================================

* Initcalls enforce initialization order.
* Frameworks initialize before drivers.
* Linker groups initcalls by section.
* Kernel walks sections sequentially.
* Built-in code uses initcall levels.
* Loadable modules do not.

