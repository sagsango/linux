# ss@pc:~/linux-kernel-lab/linux$ grep -r module_init arch/x86/kvm/
arch/x86/kvm/svm/svm.c:module_init(svm_init)
arch/x86/kvm/mmu/mmu.c:void __init kvm_mmu_x86_module_init(void)
arch/x86/kvm/mmu/mmu.c: kvm_mmu_spte_module_init();
arch/x86/kvm/mmu/mmu.c:int kvm_mmu_vendor_module_init(void)
arch/x86/kvm/mmu/spte.h:void __init kvm_mmu_spte_module_init(void);
arch/x86/kvm/mmu/spte.c:void __init kvm_mmu_spte_module_init(void)
arch/x86/kvm/vmx/vmx.c:module_init(vmx_init);
arch/x86/kvm/x86.c:     r = kvm_mmu_vendor_module_init();
arch/x86/kvm/x86.c:     kvm_mmu_x86_module_init();
arch/x86/kvm/x86.c:module_init(kvm_x86_init);
arch/x86/kvm/x86.c:      * If module_init() is implemented, module_exit() must also be


# ss@pc:~/linux-kernel-lab/linux$ grep "#define module_init" include/linux/module.h
#define module_init(x)  __initcall(x);


# TODO:
	There are other macros which will get converted into the *__initcall() macro
	serach for those
