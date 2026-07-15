# How to generate this bug (apply this patch/changes)
ss@pc:~/linux$ git diff lib/kobject.c
diff --git a/lib/kobject.c b/lib/kobject.c
index 6a118c32449d..9853dd8af095 100644
--- a/lib/kobject.c
+++ b/lib/kobject.c
@@ -1009,7 +1009,7 @@ struct kset *kset_create_and_add(const char *name,
        int error;

        /* XXX: Although it does not make much sence for now, we will keep it */
-       pr_info("SAGAR KSet created /%s/%s\n",parent_kobj && parent_kobj->name ?
+       pr_info("SAGAR KSet created /%s/%s\n",parent_kobj->name ?
                                              parent_kobj->name :
                                              "NULL", name);

# Kernel logs
[    0.668028] BUG: kernel NULL pointer dereference, address: 0000000000000000
[    0.668028] #PF: supervisor read access in kernel mode
[    0.668028] #PF: error_code(0x0000) - not-present page
[    0.668028] PGD 0 P4D 0
[    0.668028] Oops: 0000 [#1] PREEMPT SMP NOPTI
[    0.668028] CPU: 0 PID: 1 Comm: swapper/0 Not tainted 6.8.0 #7
[    0.668028] Hardware name: QEMU Ubuntu 26.04 PC (i440FX + PIIX, 1996), BIOS 1.17.0-debian-1.17.0-1ubuntu1 04/01/2014
[    0.668028] RIP: 0010:kset_create_and_add+0x17/0xc0
[    0.668028] Code: 0f 1f 00 90 90 90 90 90 90 90 90 90 90 90 90 90 90 90 90 f3 0f 1e fa 41 55 48 c7 c0 d2 92 6f 82 49 89 fd 41 54 55 48 89 f5 53 <48> 8b4
[    0.668028] RSP: 0018:ffffc90000013ed8 EFLAGS: 00010246
[    0.668028] RAX: ffffffff826f92d2 RBX: ffffffff83352070 RCX: 00000000ffffdfff
[    0.668028] RDX: 0000000000000000 RSI: ffffffff822d9650 RDI: ffffffff826c0ba0
[    0.668028] RBP: ffffffff822d9650 R08: ffffffff82b38ac8 R09: 00000000ffffdfff
[    0.668028] R10: ffffffff82a58ae0 R11: ffffffff82b08ae0 R12: 0000000000000000
[    0.668028] R13: ffffffff826c0ba0 R14: 0000000000000000 R15: 0000000000000000
[    0.668028] FS:  0000000000000000(0000) GS:ffff88807dc00000(0000) knlGS:0000000000000000
[    0.668028] CS:  0010 DS: 0000 ES: 0000 CR0: 0000000080050033
[    0.668028] CR2: 0000000000000000 CR3: 0000000002a2e000 CR4: 00000000000006f0
[    0.668028] Call Trace:
[    0.668028]  <TASK>
[    0.668028]  ? __die+0x1f/0x70
[    0.668028]  ? page_fault_oops+0x156/0x420
[    0.668028]  ? search_exception_tables+0x37/0x50
[    0.668028]  ? fixup_exception+0x21/0x320
[    0.668028]  ? exc_page_fault+0x6a/0x150
[    0.668028]  ? asm_exc_page_fault+0x26/0x30
[    0.668028]  ? kset_create_and_add+0x17/0xc0
[    0.668028]  ? devtmpfs_init+0xd0/0x170
[    0.668028]  devices_init+0x19/0xc0
[    0.668028]  driver_init+0x1a/0x50
[    0.668028]  kernel_init_freeable+0xf7/0x220
[    0.668028]  ? __pfx_kernel_init+0x10/0x10
[    0.668028]  kernel_init+0x15/0x1b0
[    0.668028]  ret_from_fork+0x2f/0x50
[    0.668028]  ? __pfx_kernel_init+0x10/0x10
[    0.668028]  ret_from_fork_asm+0x1b/0x30
[    0.668028]  </TASK>
[    0.668028] Modules linked in:
[    0.668028] CR2: 0000000000000000
[    0.668028] ---[ end trace 0000000000000000 ]---
[    0.668028] RIP: 0010:kset_create_and_add+0x17/0xc0
[    0.668028] Code: 0f 1f 00 90 90 90 90 90 90 90 90 90 90 90 90 90 90 90 90 f3 0f 1e fa 41 55 48 c7 c0 d2 92 6f 82 49 89 fd 41 54 55 48 89 f5 53 <48> 8b4
[    0.668028] RSP: 0018:ffffc90000013ed8 EFLAGS: 00010246
[    0.668028] RAX: ffffffff826f92d2 RBX: ffffffff83352070 RCX: 00000000ffffdfff
[    0.668028] RDX: 0000000000000000 RSI: ffffffff822d9650 RDI: ffffffff826c0ba0
[    0.668028] RBP: ffffffff822d9650 R08: ffffffff82b38ac8 R09: 00000000ffffdfff
[    0.668028] R10: ffffffff82a58ae0 R11: ffffffff82b08ae0 R12: 0000000000000000
[    0.668028] R13: ffffffff826c0ba0 R14: 0000000000000000 R15: 0000000000000000
[    0.668028] FS:  0000000000000000(0000) GS:ffff88807dc00000(0000) knlGS:0000000000000000
[    0.668028] CS:  0010 DS: 0000 ES: 0000 CR0: 0000000080050033
[    0.668028] CR2: 0000000000000000 CR3: 0000000002a2e000 CR4: 00000000000006f0
[    0.668028] note: swapper/0[1] exited with irqs disabled
[    0.668457] Kernel panic - not syncing: Attempted to kill init! exitcode=0x00000009
[    0.669028] ---[ end Kernel panic - not syncing: Attempted to kill init! exitcode=0x00000009 ]---



# Lets see the vmlinux
ss@pc:~/linux-kernel-lab/linux$ nm vmlinux | grep -w kset_create_and_add
ffffffff81e908e0 T kset_create_and_add
ss@pc:~/linux-kernel-lab/linux$ objdump -dS --start-address=0xffffffff81e908e0 vmlinux | head -n 30  

vmlinux:     file format elf64-x86-64


Disassembly of section .text:

ffffffff81e908e0 <kset_create_and_add>:
ffffffff81e908e0:       f3 0f 1e fa             endbr64
ffffffff81e908e4:       41 55                   push   %r13
ffffffff81e908e6:       48 c7 c0 d2 92 6f 82    mov    $0xffffffff826f92d2,%rax
ffffffff81e908ed:       49 89 fd                mov    %rdi,%r13
ffffffff81e908f0:       41 54                   push   %r12
ffffffff81e908f2:       55                      push   %rbp
ffffffff81e908f3:       48 89 f5                mov    %rsi,%rbp
ffffffff81e908f6:       53                      push   %rbx
ffffffff81e908f7:       48 8b 32                mov    (%rdx),%rsi
ffffffff81e908fa:       48 89 d3                mov    %rdx,%rbx
ffffffff81e908fd:       48 89 fa                mov    %rdi,%rdx
ffffffff81e90900:       48 c7 c7 d0 e1 7c 82    mov    $0xffffffff827ce1d0,%rdi
ffffffff81e90907:       48 85 f6                test   %rsi,%rsi
ffffffff81e9090a:       48 0f 44 f0             cmove  %rax,%rsi
ffffffff81e9090e:       e8 dd 6c 26 ff          call   ffffffff810f75f0 <_printk>
ffffffff81e90913:       ba 60 00 00 00          mov    $0x60,%edx
ffffffff81e90918:       be c0 0d 00 00          mov    $0xdc0,%esi
ffffffff81e9091d:       48 8b 3d 24 69 94 00    mov    0x946924(%rip),%rdi        # ffffffff827d7248 <kmalloc_caches+0x8>
ffffffff81e90924:       e8 47 88 3c ff          call   ffffffff81259170 <kmalloc_trace>
ffffffff81e90929:       49 89 c4                mov    %rax,%r12
ffffffff81e9092c:       48 85 c0                test   %rax,%rax
ffffffff81e9092f:       74 3f                   je     ffffffff81e90970 <kset_create_and_add+0x90>   
ffffffff81e90931:       48 8d 78 18             lea    0x18(%rax),%rdi
ss@pc:~/linux-kernel-lab/linux$ 


# Imp Points
1. Based on CR registers CPU is in 
	Long Mode
	Page table protection is on
	Its 4 level pagining
2. Log line for the (function+offset) instruction:
	[    0.668028]  ? kset_create_and_add+0x17/0xc0
	Ooops happend in the offset 0x17 from the kset_create_and_add function
	Total size of the function kset_create_and_add is 0xc0
	we can get that data from the vmlinux image also
2. Based on Code given in log line:
	[    0.668028] Code: 0f 1f 00 90 90 90 90 90 90 90 90 90 90 90 90 90 90 90 90 f3 0f 1e fa 41 55 48 c7 c0 d2 92 6f 82 49 89 fd 41 54 55 48 89 f5 53 <48> 8b4
	instruction code starting point is <48>
	the instruction is 48 8b 32 (mov)
	ffffffff81e908f7:       48 8b 32                mov    (%rdx),%rsi
3. First move assessed the memory at 0x00 so page fault happed
   Kernel tried to handle the page fault as shown in the stacktrace
   But no page mapping was there for the address 0
   So it created the page fault



# Line by line analysis by chatgpt
===============================================================================
                       LINUX KERNEL OOPS CRASH ANALYSIS
===============================================================================

[ 0.668028] BUG: kernel NULL pointer dereference, address: 0000000000000000
-------------------------------------------------------------------------------
* Meaning: The kernel crashed because code tried to access memory address zero.
* Info: Address 0x0 is strictly illegal to touch in kernel space. It always 
  triggers an immediate crash to safeguard system memory integrity.


[ 0.668028] #PF: supervisor read access in kernel mode
-------------------------------------------------------------------------------
* Meaning: A hardware Page Fault (#PF) occurred because Ring 0 (the highest 
  kernel privilege level, or "supervisor") tried to read data from memory.
* Info: This explicitly proves the crash happened deep inside core kernel 
  space, not within a normal user-space application.


[ 0.668028] #PF: error_code(0x0000) - not-present page
-------------------------------------------------------------------------------
* Meaning: The CPU's Memory Management Unit (MMU) checked its hardware lookup 
  tables for address 0x0 and found absolutely nothing mapped there.
* Info: Binary 0x0000 is a hardware code meaning "This page is completely missing 
  from RAM/virtual tables."


[ 0.668028] PGD 0 P4D 0
-------------------------------------------------------------------------------
* Meaning: The top directories of the kernel memory translation architecture 
  (Page Global Directory and Page 4th Level Directory) contain absolute zero pointers.
* Info: Hardware-level confirmation that no memory paths or hardware mapping maps 
  exist to resolve address 0x0.


[ 0.668028] Oops: 0000 [#1] PREEMPT SMP NOPTI
-------------------------------------------------------------------------------
* Meaning: The kernel generated an "Oops" crash report tracking block.
* Info: 
  - 0000: Internal error bitmask.
  - [#1]: This is the very first Oops error generated since the machine booted.
  - PREEMPT: Kernel preemption is active (tasks can be kicked off mid-execution).
  - SMP: Symmetric Multiprocessing is on (supports multiple physical CPU cores).
  - NOPTI: Page Table Isolation is off (a performance layout for virtual testing).


[ 0.668028] CPU: 0 PID: 1 Comm: swapper/0 Not tainted 6.8.0 #7
-------------------------------------------------------------------------------
* Meaning: System state context flags at the exact millisecond of the crash.
* Info:
  - CPU: 0 -> Code executed on the very first processor core.
  - PID: 1 -> The process running was the master init container task.
  - Comm: swapper/0 -> Internal command string name for early kernel setup.
  - Not tainted -> Running 100% clean, open-source code (no closed drivers).
  - 6.8.0 #7 -> Running kernel v6.8.0, compiled for the 7th iteration.


[ 0.668028] Hardware name: QEMU Ubuntu 26.04 PC (i440FX + PIIX, 1996)...
-------------------------------------------------------------------------------
* Meaning: Physical hardware profile mapping.
* Info: Running inside a QEMU virtual machine emulating an old Intel i440FX 
  chipset motherboard using Debian/Ubuntu virtualized SeaBIOS.


[ 0.668028] RIP: 0010:kset_create_and_add+0x17/0xc0
-------------------------------------------------------------------------------
* Meaning: The Instruction Pointer (RIP) identifies the exact code that failed.
* Info: 
  - 0010: Kernel text code segment selector (64-bit Long Mode identifier).
  - kset_create_and_add: The specific C function that blew up.
  - +0x17: The crash happened precisely 23 bytes (hex 0x17) into the function.
  - /0xc0: The total compiled size of this function is 192 bytes (hex 0xc0).


[ 0.668028] Code: 0f 1f 00 90 90 ... 41 54 55 48 89 f5 53 <48> 8b 32
-------------------------------------------------------------------------------
* Meaning: Machine instruction code byte stream loaded into the CPU at crash time.
* Info: The brackets <48> frame the failing operation byte. The instruction hex 
  sequence "48 8b 32" decodes natively to: "mov (%rdx), %rsi". It orders the 
  CPU to fetch data from whatever memory address is stored inside register RDX.


[ 0.668028] RSP: 0018:ffffc90000013ed8 EFLAGS: 00010246
-------------------------------------------------------------------------------
* Meaning: Core low-level CPU state tracking bits.
* Info: RSP tracks the active top of the Kernel Execution Stack frame memory address.


[ 0.668028] RAX: ffffffff826f92d2 RBX: ffffffff83352070 RCX: 00000000ffffdfff...
-------------------------------------------------------------------------------
* Meaning: Snapshots of all general-purpose registers right when the CPU stopped.
* Info: 
  - Crucial focus on register "RDX: 0000000000000000". It is totally NULL.
  - Because RDX is zero, "mov (%rdx), %rsi" becomes "mov (0x0), %rsi", causing 
    the NULL pointer crash.
  - Under x86_64 calling rules, RDX is the 3rd parameter. For this function: 
    kset_create_and_add(name, uevent_ops, parent_kobj), RDX holds "parent_kobj". 
    This confirms a NULL parent object pointer was sent in.


[ 0.668028] FS:  0000000000000000(0000) GS:ffff88807dc00000(0000) ...
-------------------------------------------------------------------------------
* Meaning: Segment registers mapping thread-local storage data zones and 
  per-CPU kernel state variables.


[ 0.668028] CS:  0010 DS: 0000 ES: 0000 CR0: 0000000080050033
-------------------------------------------------------------------------------
* Meaning: CPU architecture configuration states. CR0 flags confirm that Protected 
  Mode (PE=1) and Paging memory mapping (PG=1) are physically enabled.


[ 0.668028] CR2: 0000000000000000 CR3: 0000000002a2e000 CR4: 00000000000006f0
-------------------------------------------------------------------------------
* Meaning: Hardware memory lookup engine controls.
  - CR2: Logs the exact fault address that hit the wall (0x0).
  - CR3: Base hardware memory location tracking the current page table system roots.
  - CR4: Explains active CPU tweaks. Bit 5 is on (PAE=1), confirming 64-bit Long Mode.


[ 0.668028] Call Trace: / <TASK>
-------------------------------------------------------------------------------
* Meaning: Execution timeline path tracking how the machine arrived at the crash.
* Info: Chronological path moves from bottom to top. Lines marked with a "?" 
  indicate stale addresses left over on the stack (speculative, not direct path).


[ 0.668028]  devices_init+0x19/0xc0
-------------------------------------------------------------------------------
* Meaning: The core driver tree subsystem initializing virtual folders (/sys/devices).
* Info: It called kset_create_and_add to construct a root-level system folder. 
  Because a root device has no parent, it naturally passed NULL as the parent argument.


[ 0.668028]  driver_init+0x1a/0x50
-------------------------------------------------------------------------------
* Meaning: The master device driver engine starts booting up its global subsystems.


[ 0.668028]  kernel_init_freeable+0xf7/0x220
-------------------------------------------------------------------------------
* Meaning: Early foundational kernel configurations launching sequentially during boot.


[ 0.668028]  kernel_init+0x15/0x1b0
-------------------------------------------------------------------------------
* Meaning: The primary master kernel initialization execution thread spawns and wakes up.


[ 0.668028]  ret_from_fork+0x2f/0x50 / ret_from_fork_asm+0x1b/0x30
-------------------------------------------------------------------------------
* Meaning: Low-level assembly framework used to construct and safely release 
  brand-new kernel processing threads into physical operations.


[ 0.668028] Modules linked in:
-------------------------------------------------------------------------------
* Meaning: Array tracking dynamically loaded external kernel modules (.ko files).
* Info: Completely empty. Proves the crash happened so early in boot sequence 
  that no file drivers could even be parsed or pulled off the disk layout yet.


[ 0.668028] ---[ end trace 0000000000000000 ]---
-------------------------------------------------------------------------------
* Meaning: Structural closing boundary text line defining this specific Oops output block.


[ 0.668457] Kernel panic - not syncing: Attempted to kill init! exitcode=0x00000009
-------------------------------------------------------------------------------
* Meaning: The final terminal sequence halting the computer completely.
* Info: In Linux design layout, if PID 1 (init/swapper) dies unexpectedly or crashes, 
  the operating system is incapable of safe execution. The kernel throws a Panic, 
  locks processor execution loops, and freezes to defend disks against corruption.

===============================================================================
                       DIAGNOSTIC ARCHITECTURE VERDICT
===============================================================================
The function devices_init() legitimately passes a NULL pointer to kset_create_and_add() 
because root-level system folders do not possess any structural parent objects. 
A localized patch or custom debug statement injected into kset_create_and_add() 
attempted to dereference or look inside this parent tracking parameter (RDX) 
without adding a safe "if (parent)" NULL check framework first. This oversight 
caused the system boot failure.
===============================================================================

