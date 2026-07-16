# ss@pc:~/linux-kernel-lab/linux/drivers$ grep -r --include="*.[ch]" "initcall" 
net/ethernet/ti/davinci_emac.c:late_initcall(davinci_emac_init);
net/ethernet/ti/davinci_mdio.c:device_initcall(davinci_mdio_init);
net/ethernet/hisilicon/hns/hnae.c:subsys_initcall(hnae_init);
net/rionet.c:late_initcall(rionet_init);
net/ntb_netdev.c:late_initcall(ntb_netdev_init_module);
net/amt.c:late_initcall(amt_init);
net/bareudp.c:late_initcall(bareudp_init_module);
net/vxlan/vxlan_core.c:late_initcall(vxlan_init_module);
net/dsa/dsa_loop_bdinfo.c:arch_initcall(dsa_loop_bdinfo_init)
net/Space.c:device_initcall(net_olddevs_init);
net/loopback.c:device_initcall(blackhole_netdev_init);
net/wan/framer/framer-core.c:device_initcall(framer_core_init);
net/hamradio/baycom_ser_hdx.c: *   0.7  03.08.1999  adapt to Linus' new __setup/__initcall
net/hamradio/baycom_epp.c: *   0.5  03.08.1999  adapt to Linus' new __setup/__initcall
net/hamradio/baycom_par.c: *   0.6  03.08.1999  adapt to Linus' new __setup/__initcall
net/hamradio/baycom_ser_fdx.c: *   0.7  03.08.1999  adapt to Linus' new __setup/__initcall
net/geneve.c:late_initcall(geneve_init_module);
net/netconsole.c: * Use late_initcall to ensure netconsole is
net/netconsole.c: * late_initcall() and module_init() are identical if built as module.
net/netconsole.c:late_initcall(init_netconsole);
net/gtp.c:late_initcall(gtp_init);
net/phy/phy_device.c:subsys_initcall(phy_init);
cpufreq/amd_freq_sensitivity.c:late_initcall(amd_freq_sensitivity_init);
cpufreq/intel_pstate.c:device_initcall(intel_pstate_init);
cpufreq/cppc_cpufreq.c:late_initcall(cppc_cpufreq_init);
cpufreq/acpi-cpufreq.c:late_initcall(acpi_cpufreq_init);
cpufreq/powernow-k8.c:late_initcall(powernowk8_init);
cpufreq/pcc-cpufreq.c:late_initcall(pcc_cpufreq_init);
cpufreq/qcom-cpufreq-hw.c:postcore_initcall(qcom_cpufreq_hw_init);
cpufreq/cpufreq-dt-platdev.c:core_initcall(cpufreq_dt_platdev_init);
cpufreq/mvebu-cpufreq.c:device_initcall(armada_xp_pmsu_cpufreq_init);
cpufreq/cpufreq.c:core_initcall(cpufreq_core_init);
cpufreq/longhaul.c:late_initcall(longhaul_init);
cpufreq/speedstep-centrino.c:late_initcall(centrino_init);
cpufreq/sa1110-cpufreq.c:arch_initcall(sa1110_clk_init);
cpufreq/amd-pstate.c:device_initcall(amd_pstate_init);
cpufreq/p4-clockmod.c:late_initcall(cpufreq_p4_init);
cpufreq/armada-37xx-cpufreq.c:/* late_initcall, to guarantee the driver is loaded after A37xx clock driver */
cpufreq/armada-37xx-cpufreq.c:late_initcall(armada37xx_cpufreq_driver_init);
cpufreq/powernow-k7.c:late_initcall(powernow_init);
rpmsg/rpmsg_char.c:postcore_initcall(rpmsg_chrdev_init);
rpmsg/qcom_glink_rpm.c:subsys_initcall(glink_rpm_init);
rpmsg/rpmsg_ctrl.c:postcore_initcall(rpmsg_ctrldev_init);
rpmsg/rpmsg_ns.c:postcore_initcall(rpmsg_ns_init);
rpmsg/virtio_rpmsg_bus.c:subsys_initcall(rpmsg_init);
rpmsg/qcom_smd.c:arch_initcall(qcom_smd_init);
rpmsg/rpmsg_core.c:postcore_initcall(rpmsg_init);
s390/virtio/virtio_ccw.c:device_initcall(virtio_ccw_init);
s390/char/zcore.c:subsys_initcall(zcore_init);
s390/char/con3215.c:console_initcall(con3215_init);
s390/char/con3215.c:device_initcall(tty3215_init);
s390/char/sclp_cmd.c:__initcall(sclp_detect_standby_memory);
s390/char/sclp_con.c:console_initcall(sclp_console_init);
s390/char/sclp_config.c:__initcall(sclp_conf_init);
s390/char/con3270.c:console_initcall(con3270_init);
s390/char/sclp_sd.c:device_initcall(sclp_sd_init);
s390/char/sclp_vt220.c:__initcall(sclp_vt220_tty_init);
s390/char/sclp_vt220.c:console_initcall(sclp_vt220_con_init);
s390/char/tape_class.c:postcore_initcall(tape_init);
s390/char/sclp_quiesce.c:device_initcall(sclp_quiesce_init);
s390/char/vmcp.c:device_initcall(vmcp_init);
s390/char/sclp_cpi_sys.c:__initcall(cpi_init);
s390/char/sclp.c:static __init int sclp_initcall(void)
s390/char/sclp.c:arch_initcall(sclp_initcall);
s390/char/sclp_ocf.c:device_initcall(ocf_init);
s390/char/sclp_tty.c:device_initcall(sclp_tty_init);
s390/cio/blacklist.c:__initcall (cio_ignore_proc_init);
s390/cio/cmf.c:device_initcall(init_cmf);
s390/cio/chp.c:subsys_initcall(chp_init);
s390/cio/crw.c:device_initcall(crw_machine_check_init);
s390/cio/css.c:subsys_initcall(channel_subsystem_init);
s390/cio/css.c:subsys_initcall_sync(channel_subsystem_init_sync);
s390/cio/css.c:device_initcall(cio_settle_init);
s390/cio/cio_inject.c:device_initcall(cio_inject_init);
s390/cio/cio_debugfs.c:subsys_initcall(cio_debugfs_init);
s390/cio/cio.c:arch_initcall (cio_debug_init);
s390/cio/scm.c:subsys_initcall_sync(scm_init);
s390/crypto/ap_bus.c:device_initcall(ap_module_init);
dma/stm32-mdma.c:subsys_initcall(stm32_mdma_init);
dma/fsldma.c:subsys_initcall(fsldma_init);
dma/moxart-dma.c:subsys_initcall(moxart_init);
dma/imx-dma.c:subsys_initcall(imxdma_module_init);
dma/stm32-dma.c:subsys_initcall(stm32_dma_init);
dma/dw/platform.c:subsys_initcall(dw_init);
dma/sa11x0-dma.c:subsys_initcall(sa11x0_dma_init);
dma/dmatest.c:late_initcall(dmatest_init);
dma/stm32-dmamux.c:arch_initcall(stm32_dmamux_init);
dma/ppc4xx/adma.c:arch_initcall(ppc440spe_adma_init);
dma/sf-pdma/sf-pdma.c:subsys_initcall(sf_pdma_init);
dma/at_xdmac.c:subsys_initcall(at_xdmac_init);
dma/at_hdmac.c:subsys_initcall(at_dma_init);
dma/ti/omap-dma.c:subsys_initcall(omap_dma_init);
dma/ti/edma.c:subsys_initcall(edma_init);
dma/ti/dma-crossbar.c:arch_initcall(omap_dmaxbar_init);
dma/dmaengine.c:arch_initcall(dma_channel_table_init);
dma/dmaengine.c:arch_initcall(dma_bus_init);
dma/fsl-dpaa2-qdma/dpaa2-qdma.c:late_initcall(dpaa2_qdma_driver_init);
dma/qcom/gpi.c:subsys_initcall(gpi_init)
dma/bestcomm/bestcomm.c:/* anyone tries to use us ... that's why we use subsys_initcall instead */
dma/bestcomm/bestcomm.c:subsys_initcall(mpc52xx_bcom_init);
dma/ste_dma40.c:subsys_initcall(stedma40_init);
dma/owl-dma.c:subsys_initcall(owl_dma_init);
dma/mcf-edma-main.c:subsys_initcall(mcf_edma_init);
dma/lgm/lgm-dma.c: * Perform this driver as device_initcall to make sure initialization happens
dma/ep93xx_dma.c:subsys_initcall(ep93xx_dma_module_init);
dma/dma-jz4780.c:subsys_initcall(jz4780_dma_init);
dma/fsl-edma-main.c:subsys_initcall(fsl_edma_init);
dma/lpc18xx-dmamux.c:arch_initcall(lpc18xx_dmamux_init);
dma/amba-pl08x.c:subsys_initcall(pl08x_init);
zorro/zorro-driver.c:postcore_initcall(zorro_driver_init);
zorro/proc.c:device_initcall(zorro_proc_init);
mailbox/qcom-ipcc.c:arch_initcall(qcom_ipcc_init);
mailbox/mailbox-xgene-slimpro.c:subsys_initcall(slimpro_mbox_init);
mailbox/tegra-hsp.c:core_initcall(tegra_hsp_init);
mailbox/pcc.c:postcore_initcall(pcc_init);
mailbox/pl320-ipc.c:subsys_initcall(ipc_init);
mailbox/qcom-apcs-ipc-mailbox.c:postcore_initcall(qcom_apcs_ipc_init);
mailbox/zynqmp-ipi-mailbox.c:subsys_initcall(zynqmp_ipi_init);
mailbox/hi6220-mailbox.c:core_initcall(hi6220_mbox_init);
mailbox/omap-mailbox.c:subsys_initcall(omap_mbox_init);
mailbox/mtk-cmdq-mailbox.c:subsys_initcall(cmdq_drv_init);
mailbox/hi3660-mailbox.c:core_initcall(hi3660_mbox_init);
mfd/da9055-i2c.c:subsys_initcall(da9055_i2c_init);
mfd/aat2870-core.c:subsys_initcall(aat2870_init);
mfd/db8500-prcmu.c:	 * clock driver can probe independently. An early initcall will
mfd/db8500-prcmu.c:core_initcall(db8500_prcmu_init);
mfd/tps6105x.c:subsys_initcall(tps6105x_init);
mfd/lm3533-core.c:subsys_initcall(lm3533_i2c_init);
mfd/tps65910.c:subsys_initcall(tps65910_i2c_init);
mfd/mc13xxx-spi.c:subsys_initcall(mc13xxx_init);
mfd/wm8350-i2c.c:subsys_initcall(wm8350_i2c_init);
mfd/tps65217.c:subsys_initcall(tps65217_init);
mfd/tps65911-comparator.c:subsys_initcall(tps65911_comparator_init);
mfd/tps6586x.c:subsys_initcall(tps6586x_init);
mfd/wl1273-core.c:late_initcall(wl1273_core_init);
mfd/syscon.c:postcore_initcall(syscon_init);
mfd/ab8500-core.c:core_initcall(ab8500_core_init);
mfd/pcf50633-core.c:subsys_initcall(pcf50633_init);
mfd/max8998.c:subsys_initcall(max8998_i2c_init);
mfd/88pm805.c:subsys_initcall(pm805_i2c_init);
mfd/tc3589x.c:subsys_initcall(tc3589x_init);
mfd/max8997.c:subsys_initcall(max8997_i2c_init);
mfd/da9052-spi.c:subsys_initcall(da9052_spi_init);
mfd/wm831x-spi.c:subsys_initcall(wm831x_spi_init);
mfd/stmpe-i2c.c:subsys_initcall(stmpe_init);
mfd/rsmu_i2c.c:subsys_initcall(rsmu_i2c_init);
mfd/altera-sysmgr.c:core_initcall(altr_sysmgr_init);
mfd/mc13xxx-i2c.c:subsys_initcall(mc13xxx_i2c_init);
mfd/max77843.c:subsys_initcall(max77843_i2c_init);
mfd/88pm860x-core.c:subsys_initcall(pm860x_i2c_init);
mfd/stmpe-spi.c:subsys_initcall(stmpe_init);
mfd/da9052-i2c.c:subsys_initcall(da9052_i2c_init);
mfd/da903x.c:subsys_initcall(da903x_init);
mfd/ezx-pcap.c:subsys_initcall(ezx_pcap_init);
mfd/sta2x11-mfd.c:subsys_initcall(sta2x11_drivers_init);
mfd/sta2x11-mfd.c:rootfs_initcall(sta2x11_mfd_init);
mfd/tps65010.c:subsys_initcall(tps_init);
mfd/lp8788.c:subsys_initcall(lp8788_init);
mfd/omap-usb-host.c:fs_initcall_sync(omap_usbhs_drvinit);
mfd/rohm-bd718x7.c:subsys_initcall(bd718xx_i2c_init);
mfd/tps6507x.c:subsys_initcall(tps6507x_i2c_init);
mfd/act8945a.c:subsys_initcall(act8945a_i2c_init);
mfd/qcom_rpm.c:arch_initcall(qcom_rpm_init);
mfd/rsmu_spi.c:subsys_initcall(rsmu_spi_init);
mfd/max8925-i2c.c:subsys_initcall(max8925_i2c_init);
mfd/tps65090.c:subsys_initcall(tps65090_init);
mfd/palmas.c:subsys_initcall(palmas_i2c_init);
mfd/lochnagar-i2c.c:subsys_initcall(lochnagar_i2c_init);
mfd/ab8500-sysctrl.c:arch_initcall(ab8500_sysctrl_init);
mfd/rc5t583.c:subsys_initcall(rc5t583_i2c_init);
mfd/qcom-pm8xxx.c:subsys_initcall(pm8xxx_init);
mfd/omap-usb-tll.c:fs_initcall(omap_usbtll_drvinit);
mfd/as3711.c:subsys_initcall(as3711_i2c_init);
mfd/88pm800.c:subsys_initcall(pm800_i2c_init);
mfd/max8907.c:subsys_initcall(max8907_i2c_init);
mfd/wm831x-i2c.c:subsys_initcall(wm831x_i2c_init);
mfd/wm8400-core.c:subsys_initcall(wm8400_driver_init);
mfd/sprd-sc27xx-spi.c:subsys_initcall(sprd_pmic_init);
extcon/extcon-sm5502.c:subsys_initcall(sm5502_muic_i2c_init);
extcon/extcon-rt8973a.c:subsys_initcall(rt8973a_muic_i2c_init);
extcon/extcon-usbc-tusb320.c:subsys_initcall(tusb320_init);
extcon/extcon-max77843.c:subsys_initcall(max77843_muic_init);
extcon/extcon-fsa9480.c:subsys_initcall(fsa9480_module_init);
tee/tee_core.c:subsys_initcall(tee_init);
fpga/fpga-bridge.c:subsys_initcall(fpga_bridge_dev_init);
fpga/fpga-region.c:subsys_initcall(fpga_region_init);
fpga/of-fpga-region.c:subsys_initcall(of_fpga_region_init);
fpga/fpga-mgr.c:subsys_initcall(fpga_mgr_class_init);
vdpa/vdpa.c:core_initcall(vdpa_init);
video/logo/logo.c:late_initcall_sync(fb_logo_late_init);
video/backlight/lcd.c:postcore_initcall(lcd_class_init);
video/backlight/aat2870_bl.c:subsys_initcall(aat2870_bl_init);
video/backlight/backlight.c:postcore_initcall(backlight_class_init);
video/fbdev/sunxvr1000.c:device_initcall(gfb_init);
video/fbdev/sunxvr2500.c:device_initcall(s3d_init);
video/fbdev/omap2/omapfb/dss/omapdss-boot-init.c:subsys_initcall(omapdss_boot_init);
video/fbdev/core/fbmem.c:subsys_initcall(fbmem_init);
video/fbdev/atafb.c:device_initcall(atafb_init);
video/fbdev/omap/lcd_dma.c:arch_initcall(omap_init_lcd_dma);
video/fbdev/controlfb.c:device_initcall(control_init);
video/fbdev/sunxvr500.c:device_initcall(e3d_init);
rapidio/rio-scan.c:late_initcall(rio_basic_attach);
rapidio/rio-driver.c:postcore_initcall(rio_bus_init);
rapidio/switches/idt_gen3.c:device_initcall(idtg3_init);
rapidio/switches/idt_gen2.c:device_initcall(idtg2_init);
rapidio/switches/idtcps.c:device_initcall(idtcps_init);
rapidio/rio_cm.c:late_initcall(riocm_init);
xen/arm-device.c:arch_initcall(register_xen_platform_notifier);
xen/arm-device.c:arch_initcall(register_xen_amba_notifier);
xen/xen-acpi-processor.c: * They are loaded in late_initcall. */
xen/xen-acpi-processor.c:device_initcall(xen_acpi_processor_init);
xen/xenbus/xenbus_dev_backend.c:device_initcall(xenbus_backend_init);
xen/xenbus/xenbus_probe.c:static int __init xenbus_probe_initcall(void)
xen/xenbus/xenbus_probe.c:device_initcall(xenbus_probe_initcall);
xen/xenbus/xenbus_probe.c:	 * If xenbus_probe_initcall() deferred the xenbus_probe()
xen/xenbus/xenbus_probe.c:postcore_initcall(xenbus_init);
xen/xenbus/xenbus_dev_frontend.c:device_initcall(xenbus_init);
xen/xenbus/xenbus_probe_frontend.c:/* We only wait for device setup after most initcalls have run. */
xen/xenbus/xenbus_probe_frontend.c: * This needs to be on a late_initcall, to happen after the frontend device
xen/xenbus/xenbus_probe_frontend.c:subsys_initcall(xenbus_probe_frontend_init);
xen/xenbus/xenbus_probe_frontend.c:late_initcall(boot_wait_for_devices);
xen/xenbus/xenbus_probe_backend.c:subsys_initcall(xenbus_probe_backend_init);
xen/grant-dma-iommu.c:subsys_initcall(grant_dma_iommu_init);
xen/unpopulated-alloc.c:early_initcall(unpopulated_init);
xen/pci.c:arch_initcall(register_xen_pci_notifier);
xen/xen-pciback/pci_stub.c:/* wait for device_initcall before initializing our devices
xen/xen-pciback/pci_stub.c: * devices during fs_initcall, we need to defer
xen/xen-pciback/pci_stub.c: * device_initcall.
xen/xen-pciback/pci_stub.c: * fs_initcall happens before device_initcall
xen/xen-pciback/pci_stub.c:fs_initcall(pcistub_init);
xen/pcpu.c:arch_initcall(xen_pcpu_init);
xen/xen-acpi-pad.c:subsys_initcall(xen_acpi_pad_init);
xen/balloon.c:subsys_initcall(balloon_init);
xen/balloon.c:late_initcall_sync(balloon_wait_finish);
xen/mcelog.c:device_initcall(xen_late_init_mcelog);
xen/grant-table.c:/* Starts after core_initcall so that xen_pvh_gnttab_setup can be called
xen/grant-table.c:core_initcall_sync(__gnttab_init);
xen/sys-hypervisor.c:device_initcall(hyper_sysfs_init);
xen/sys-hypervisor.c:device_initcall(hypervisor_subsys_init);
xen/manage.c:subsys_initcall(xen_setup_shutdown_event);
xen/cpu_hotplug.c:late_initcall(setup_vcpu_hotplug_event);
mux/core.c: * Using subsys_initcall instead of module_init here to try to ensure - for
mux/core.c:subsys_initcall(mux_init);
ptp/ptp_clock.c:subsys_initcall(ptp_init);
virtio/virtio.c:core_initcall(virtio_init);
most/core.c:subsys_initcall(most_init);
i2c/busses/i2c-versatile.c:subsys_initcall(i2c_versatile_init);
i2c/busses/i2c-mxs.c:subsys_initcall(mxs_i2c_init);
i2c/busses/i2c-gpio.c:subsys_initcall(i2c_gpio_init);
i2c/busses/i2c-pxa.c:subsys_initcall(i2c_adap_pxa_init);
i2c/busses/i2c-davinci.c:subsys_initcall(davinci_i2c_init_driver);
i2c/busses/i2c-imx.c:subsys_initcall(i2c_adap_imx_init);
i2c/busses/i2c-sh_mobile.c:subsys_initcall(sh_mobile_i2c_adap_init);
i2c/busses/i2c-designware-platdrv.c:subsys_initcall(dw_i2c_init_driver);
i2c/busses/i2c-nomadik.c:subsys_initcall(nmk_i2c_init);
i2c/busses/i2c-at91-core.c:subsys_initcall(at91_twi_init);
i2c/busses/i2c-pnx.c:subsys_initcall(i2c_adap_pnx_init);
i2c/busses/i2c-s3c2410.c:subsys_initcall(i2c_adap_s3c_init);
i2c/busses/i2c-viperboard.c:subsys_initcall(vprbrd_i2c_init);
i2c/busses/i2c-omap.c:subsys_initcall(omap_i2c_init_driver);
i2c/i2c-core-base.c: * initialization logic, which usually runs during an arch_initcall() long
i2c/i2c-core-base.c: * in subsys_initcall() code, but are linked (and initialized) before i2c.
i2c/i2c-core-base.c:postcore_initcall(i2c_init);
i2c/i2c-boardinfo.c: * near arch_initcall() time, or equivalent, before any I2C adapter driver is
nvdimm/core.c:subsys_initcall(libnvdimm_init);
hwspinlock/qcom_hwspinlock.c:postcore_initcall(qcom_hwspinlock_init);
hwspinlock/omap_hwspinlock.c:postcore_initcall(omap_hwspinlock_init);
hwspinlock/u8500_hsem.c:postcore_initcall(u8500_hsem_init);
hwspinlock/stm32_hwspinlock.c:postcore_initcall(stm32_hwspinlock_init);
leds/led-class.c:subsys_initcall(leds_init);
leds/trigger/ledtrig-cpu.c:device_initcall(ledtrig_cpu_init);
leds/trigger/ledtrig-disk.c:device_initcall(ledtrig_disk_init);
leds/trigger/ledtrig-panic.c:device_initcall(ledtrig_panic_init);
leds/trigger/ledtrig-mtd.c:device_initcall(ledtrig_mtd_init);
connector/cn_proc.c:device_initcall(cn_proc_init);
connector/connector.c:subsys_initcall(cn_init);
android/binder.c:device_initcall(binder_init);
sh/pm_runtime.c:core_initcall(sh_pm_runtime_init);
sh/intc/userimask.c:late_initcall(userimask_sysdev_init);
sh/intc/virq-debugfs.c:fs_initcall(intc_irq_xlate_init);
sh/intc/core.c:device_initcall(register_intc_devs);
sh/clk/core.c:subsys_initcall(clk_syscore_init);
sh/clk/core.c:late_initcall(clk_late_init);
sh/maple/maple.c:fs_initcall(maple_bus_init);
tc/tc-driver.c:postcore_initcall(tc_driver_init);
tc/tc.c:subsys_initcall(tc_init);
amba/bus.c:postcore_initcall(amba_init);
amba/bus.c:late_initcall_sync(amba_stub_drv_init);
clocksource/acpi_pm.c:/* We use fs_initcall because we want the PCI fixups to have run
clocksource/acpi_pm.c: * but we still need to load before device_initcall
clocksource/acpi_pm.c:fs_initcall(init_acpi_pm_clocksource);
clocksource/dummy_timer.c:early_initcall(dummy_timer_register);
clocksource/arm_arch_timer.c:core_initcall(arch_timer_evtstrm_register);
clocksource/timer-ti-dm-systimer.c:subsys_initcall(dmtimer_percpu_timer_startup);
clocksource/sh_tmu.c:subsys_initcall(sh_tmu_init);
clocksource/numachip.c:arch_initcall(numachip_timer_init);
clocksource/sh_cmt.c:subsys_initcall(sh_cmt_init);
clocksource/em_sti.c:subsys_initcall(em_sti_init);
clocksource/sh_mtu2.c:subsys_initcall(sh_mtu2_init);
cache/sifive_ccache.c:arch_initcall(sifive_ccache_init);
cache/ax45mp_cache.c:early_initcall(ax45mp_cache_init);
iio/industrialio-core.c:subsys_initcall(iio_init);
iommu/io-pgtable-arm.c:subsys_initcall(arm_lpae_do_selftests);
iommu/iommu.c:subsys_initcall(iommu_subsys_init);
iommu/iommu.c:core_initcall(iommu_init);
iommu/arm/arm-smmu/qcom_iommu.c:device_initcall(qcom_iommu_init);
iommu/intel/dmar.c:late_initcall(dmar_free_unused_resources);
iommu/intel/irq_remapping.c:rootfs_initcall(ir_dev_scope_init);
iommu/io-pgtable-arm-v7s.c:subsys_initcall(arm_v7s_do_selftests);
iommu/s390-iommu.c:subsys_initcall(s390_iommu_init);
iommu/iommu-sysfs.c:postcore_initcall(iommu_dev_init);
iommu/fsl_pamu.c:arch_initcall(fsl_pamu_init);
iommu/dma-iommu.c:arch_initcall(iommu_dma_init);
iommu/omap-iommu.c:subsys_initcall(omap_iommu_init);
iommu/exynos-iommu.c:core_initcall(exynos_iommu_init);
staging/vme_user/vme.c:subsys_initcall(vme_init);
staging/board/board.h:device_initcall(runtime_board_check)
staging/fieldbus/dev_core.c:subsys_initcall(fieldbus_init);
devfreq/devfreq-event.c:subsys_initcall(devfreq_event_init);
devfreq/governor_passive.c:subsys_initcall(devfreq_passive_init);
devfreq/governor_powersave.c:subsys_initcall(devfreq_powersave_init);
devfreq/devfreq.c:subsys_initcall(devfreq_init);
devfreq/governor_userspace.c:subsys_initcall(devfreq_userspace_init);
devfreq/governor_performance.c:subsys_initcall(devfreq_performance_init);
devfreq/governor_simpleondemand.c:subsys_initcall(devfreq_simple_ondemand_init);
gpu/host1x/context_bus.c:postcore_initcall(host1x_context_device_bus_init);
gpu/drm/drm_mipi_dsi.c:postcore_initcall(mipi_dsi_bus_init);
gpu/drm/gma500/psb_drv.c:late_initcall(psb_init);
gpu/drm/display/drm_dp_aux_bus.c:subsys_initcall(dp_aux_bus_init);
watchdog/gpio_wdt.c:arch_initcall(gpio_wdt_init);
watchdog/watchdog_core.c: * raising the initcall level of the watchdog driver is a solution.
watchdog/watchdog_core.c: * But in such case, the miscdev is maybe not ready (subsys_initcall), and
watchdog/watchdog_core.c:subsys_initcall_sync(watchdog_init);
watchdog/aspeed_wdt.c:arch_initcall(aspeed_wdt_init);
watchdog/ie6xx_wdt.c:late_initcall(ie6xx_wdt_init);
watchdog/mpc8xxx_wdt.c:arch_initcall(mpc8xxx_wdt_init);
fsi/fsi-core.c:postcore_initcall(fsi_init);
thermal/intel/therm_throt.c:device_initcall(thermal_throttle_init_device);
thermal/thermal_core.c:postcore_initcall(thermal_init);
eisa/eisa-bus.c:postcore_initcall(eisa_init);
eisa/virtual_root.c:device_initcall (virtual_eisa_root_init);
eisa/pci_eisa.c: * So need to use subsys_initcall_sync with it.
eisa/pci_eisa.c:subsys_initcall_sync(pci_eisa_init_early);
ata/libata-core.c:subsys_initcall(ata_init);
ata/pata_buddha.c:late_initcall(pata_buddha_late_init);
siox/siox-core.c:subsys_initcall(siox_init);
regulator/da9055-regulator.c:subsys_initcall(da9055_regulator_init);
regulator/mc13892-regulator.c:subsys_initcall(mc13892_regulator_init);
regulator/max8997-regulator.c:subsys_initcall(max8997_pmic_init);
regulator/db8500-prcmu.c:arch_initcall(db8500_regulator_init);
regulator/max1586.c:subsys_initcall(max1586_pmic_init);
regulator/aat2870-regulator.c:subsys_initcall(aat2870_regulator_init);
regulator/anatop-regulator.c:postcore_initcall(anatop_regulator_init);
regulator/tps51632-regulator.c:subsys_initcall(tps51632_init);
regulator/tps65090-regulator.c:subsys_initcall(tps65090_regulator_init);
regulator/da9063-regulator.c:subsys_initcall(da9063_regulator_init);
regulator/max8649.c:subsys_initcall(max8649_init);
regulator/tps65217-regulator.c:subsys_initcall(tps65217_regulator_init);
regulator/ad5398.c:subsys_initcall(ad5398_init);
regulator/tps65023-regulator.c:subsys_initcall(tps_65023_init);
regulator/qcom_rpm-regulator.c:subsys_initcall(rpm_reg_init);
regulator/tps6105x-regulator.c:subsys_initcall(tps6105x_regulator_init);
regulator/max14577-regulator.c:subsys_initcall(max14577_regulator_init);
regulator/fixed.c:subsys_initcall(regulator_fixed_voltage_init);
regulator/event.c:fs_initcall(reg_event_init);
regulator/qcom_smd-regulator.c:subsys_initcall(rpm_reg_init);
regulator/wm831x-ldo.c:subsys_initcall(wm831x_ldo_init);
regulator/tps62360-regulator.c:subsys_initcall(tps62360_init);
regulator/tps68470-regulator.c: * subsys_initcall() ensures this when the drivers are builtin.
regulator/tps68470-regulator.c:subsys_initcall(tps68470_regulator_init);
regulator/max8998.c:subsys_initcall(max8998_pmic_init);
regulator/mc13783-regulator.c:subsys_initcall(mc13783_regulator_init);
regulator/max8925-regulator.c:subsys_initcall(max8925_regulator_init);
regulator/tps65910-regulator.c:subsys_initcall(tps65910_init);
regulator/wm831x-isink.c:subsys_initcall(wm831x_isink_init);
regulator/max8907-regulator.c:subsys_initcall(max8907_regulator_init);
regulator/pcf50633-regulator.c:subsys_initcall(pcf50633_regulator_init);
regulator/twl-regulator.c:subsys_initcall(twlreg_init);
regulator/da9062-regulator.c:subsys_initcall(da9062_regulator_init);
regulator/as3711-regulator.c:subsys_initcall(as3711_regulator_init);
regulator/twl6030-regulator.c:subsys_initcall(twlreg_init);
regulator/mtk-dvfsrc-regulator.c:subsys_initcall(mtk_dvfsrc_regulator_init);
regulator/ab8500.c:subsys_initcall(ab8500_regulator_init);
regulator/max8952.c:subsys_initcall(max8952_pmic_init);
regulator/wm831x-dcdc.c:subsys_initcall(wm831x_dcdc_init);
regulator/isl6271a-regulator.c:subsys_initcall(isl6271a_init);
regulator/rc5t583-regulator.c:subsys_initcall(rc5t583_regulator_init);
regulator/ab8500-ext.c:subsys_initcall(ab8500_ext_regulator_init);
regulator/88pm8607.c:subsys_initcall(pm8607_regulator_init);
regulator/tps6586x-regulator.c:subsys_initcall(tps6586x_regulator_init);
regulator/lp8755.c:subsys_initcall(lp8755_init);
regulator/lp3972.c:subsys_initcall(lp3972_module_init);
regulator/wm8350-regulator.c:subsys_initcall(wm8350_regulator_init);
regulator/da903x-regulator.c:subsys_initcall(da903x_regulator_init);
regulator/lp8788-ldo.c:subsys_initcall(lp8788_ldo_init);
regulator/pcap-regulator.c:subsys_initcall(pcap_regulator_init);
regulator/max77693-regulator.c:subsys_initcall(max77693_pmic_init);
regulator/tps6507x-regulator.c:subsys_initcall(tps6507x_pmic_init);
regulator/da9052-regulator.c:subsys_initcall(da9052_regulator_init);
regulator/lp8788-buck.c:subsys_initcall(lp8788_buck_init);
regulator/wm8400-regulator.c:subsys_initcall(wm8400_regulator_init);
regulator/max8660.c:subsys_initcall(max8660_init);
regulator/core.c: * constraint in a late_initcall.
regulator/core.c:core_initcall(regulator_init);
regulator/core.c:late_initcall_sync(regulator_init_complete);
regulator/max8973-regulator.c:subsys_initcall(max8973_init);
regulator/gpio-regulator.c:subsys_initcall(gpio_regulator_init);
regulator/palmas-regulator.c:subsys_initcall(palmas_init);
spi/spi-pxa2xx.c:subsys_initcall(pxa2xx_spi_init);
spi/spi-pl022.c:subsys_initcall(pl022_init);
spi/spi.c: * Board-specific early init code calls this (probably during arch_initcall)
spi/spi.c: * A board_info is normally registered in arch_initcall(),
spi/spi.c:postcore_initcall(spi_init);
spi/spi-omap-uwire.c:subsys_initcall(omap_uwire_init);
soundwire/bus_type.c:postcore_initcall(sdw_bus_init);
pci/quirks.c:	if (initcall_debug)
pci/quirks.c:	if (initcall_debug || duration > 10000)
pci/quirks.c:fs_initcall_sync(pci_apply_final_quirks);
pci/pci-sysfs.c:late_initcall(pci_sysfs_init);
pci/vgaarb.c:subsys_initcall_sync(vga_arb_device_init);
pci/pci-driver.c:postcore_initcall(pci_driver_init);
pci/pci-acpi.c:arch_initcall(acpi_pci_init);
pci/pci.c:late_initcall(pci_resource_alignment_sysfs_init);
pci/pci.c:pure_initcall(pci_realloc_setup_params);
pci/slot.c:subsys_initcall(pci_slot_init);
pci/controller/dwc/pci-imx6.c:device_initcall(imx6_pcie_init);
pci/controller/pci-xgene-msi.c:subsys_initcall(xgene_pcie_msi_init);
pci/controller/pcie-rcar-host.c:device_initcall(rcar_pcie_init);
pci/controller/pcie-altera-msi.c:subsys_initcall(altera_msi_init);
pci/pcie/portdrv.c:device_initcall(pcie_portdrv_init);
pci/pci-mid.c:arch_initcall(mid_pci_init);
pci/hotplug/pci_hotplug_core.c:device_initcall(pci_hotplug_init);
pci/probe.c:postcore_initcall(pcibus_class_init);
pci/proc.c:device_initcall(pci_proc_init);
hid/bpf/hid_bpf_dispatch.c:late_initcall(hid_bpf_init);
hid/intel-ish-hid/ishtp-hid-client.c:late_initcall(ish_hid_init);
hid/intel-ish-hid/ishtp-fw-loader.c:late_initcall(ish_loader_init);
dax/hmem/device.c: * parsing it must be at an initcall level greater than hmat_init().
dax/hmem/device.c:device_initcall(hmem_init);
dax/super.c:subsys_initcall(dax_core_init);
usb/early/ehci-dbgp.c:device_initcall(kgdbdbgp_start_thread);
usb/early/xhci-dbc.c:subsys_initcall(xdbc_init);
usb/common/ulpi.c:subsys_initcall(ulpi_init);
usb/common/common.c:subsys_initcall(usb_common_init);
usb/typec/class.c:subsys_initcall(typec_init);
usb/gadget/udc/core.c:subsys_initcall(usb_udc_init);
usb/core/usb.c:subsys_initcall(usb_init);
usb/phy/phy-mxs-usb.c:postcore_initcall(mxs_phy_module_init);
usb/phy/phy-ab8500-usb.c:subsys_initcall(ab8500_usb_init);
usb/phy/phy-twl6030-usb.c:subsys_initcall(twl6030_usb_init);
usb/phy/phy-generic.c:subsys_initcall(usb_phy_generic_init);
usb/roles/class.c:subsys_initcall(usb_roles_init);
nvmem/brcm_nvram.c:subsys_initcall_sync(brcm_nvram_init);
nvmem/mtk-efuse.c:subsys_initcall(mtk_efuse_init);
nvmem/core.c:subsys_initcall(nvmem_init);
ras/cec.c:late_initcall(cec_init);
ras/ras.c:subsys_initcall(ras_init);
remoteproc/remoteproc_core.c:subsys_initcall(remoteproc_init);
macintosh/mediabay.c:device_initcall(media_bay_init);
macintosh/via-pmu-led.c:late_initcall(via_pmu_led_init);
macintosh/macio_asic.c:postcore_initcall(macio_bus_driver_init);
macintosh/via-cuda.c:device_initcall(via_cuda_start);
macintosh/via-pmu.c: * Thus this is called with arch_initcall rather than device_initcall.
macintosh/via-pmu.c:arch_initcall(via_pmu_start);
macintosh/via-pmu.c: * This has to be done after pci_init, which is a subsys_initcall.
macintosh/via-pmu.c:device_initcall(via_pmu_dev_init);
macintosh/via-pmu.c:device_initcall(register_pmu_pm_ops);
macintosh/via-pmu.c:device_initcall(pmu_device_init);
macintosh/via-pmu.c:subsys_initcall(pmu_syscore_register);
macintosh/via-pmu-event.c:late_initcall(via_pmu_event_init);
macintosh/adb.c:device_initcall(adb_init);
macintosh/smu.c:/* This has to be before arch_initcall as the low i2c stuff relies on the
macintosh/smu.c: * above having been done before we reach arch_initcalls
macintosh/smu.c:core_initcall(smu_late_init);
macintosh/smu.c:device_initcall(smu_init_sysfs);
macintosh/smu.c:device_initcall(smu_device_init);
scsi/scsi.c:subsys_initcall(init_scsi);
scsi/scsi_debug.c:device_initcall(scsi_debug_init);
slimbus/core.c:postcore_initcall(slimbus_init);
powercap/intel_rapl_common.c:fs_initcall(rapl_init);
powercap/powercap_sys.c:fs_initcall(powercap_init);
powercap/idle_inject.c:early_initcall(idle_inject_init);
char/ipmi/ipmi_dmi.c:subsys_initcall(scan_for_dmi_ipmi);
char/hw_random/core.c:fs_initcall(hwrng_modinit); /* depends on misc_register() */
char/random.c:device_initcall(random_sysctls_init);
char/misc.c:subsys_initcall(misc_init);
char/mem.c:fs_initcall(chr_dev_init);
char/hpet.c:device_initcall(hpet_init);
char/ttyprintk.c:device_initcall(ttyprintk_init);
char/tpm/tpm-interface.c:subsys_initcall(tpm_init);
pcmcia/sa1111_generic.c:fs_initcall(sa1111_drv_pcmcia_init);
pcmcia/ds.c:fs_initcall(init_pcmcia_bus); /* one level after subsys_initcall so that
pcmcia/pxa2xx_base.c:fs_initcall(pxa2xx_pcmcia_init);
pcmcia/pxa2xx_sharpsl.c:fs_initcall(sharpsl_pcmcia_init);
pcmcia/cs.c:subsys_initcall(init_pcmcia_cs);
pcmcia/sa1100_generic.c:fs_initcall(sa11x0_pcmcia_init);
dca/dca-core.c:arch_initcall(dca_init);
of/unittest.c:late_initcall(of_unittest);
of/fdt.c:late_initcall(of_fdt_raw_init);
of/platform.c:arch_initcall_sync(of_platform_default_populate_init);
of/platform.c:late_initcall_sync(of_platform_sync_state_init);
mtd/ubi/build.c:late_initcall(ubi_init);
mtd/devices/block2mtd.c:late_initcall(block2mtd_init);
mtd/maps/uclinux.c:device_initcall(uclinux_mtd_init);
hsi/hsi_core.c:postcore_initcall(hsi_init);
ps3/ps3av.c:subsys_initcall(ps3av_module_init);
ps3/ps3-vuart.c:core_initcall(ps3_vuart_bus_init);
md/md.c:subsys_initcall(md_init);
md/dm-init.c:late_initcall(dm_init_init);
cdx/cdx.c:postcore_initcall(cdx_bus_init);
pwm/sysfs.c:subsys_initcall(pwm_sysfs_init);
pwm/core.c:subsys_initcall(pwm_debugfs_init);
parisc/ccio-dma.c:arch_initcall(ccio_init);
parisc/iosapic.c:arch_initcall(iosapic_init);
parisc/sba_iommu.c:arch_initcall(sba_init);
parisc/wax.c:arch_initcall(wax_init);
parisc/asp.c:arch_initcall(asp_init);
parisc/dino.c:arch_initcall(dino_init);
parisc/hppb.c:arch_initcall(hppb_init);
parisc/eisa.c:arch_initcall(parisc_eisa_init);
parisc/power.c:arch_initcall(power_init);
parisc/led.c:arch_initcall(early_led_init);
parisc/led.c:device_initcall(startup_leds);
parisc/lasi.c:arch_initcall(lasi_init);
parisc/lba_pci.c:arch_initcall(lba_init);
opp/debugfs.c:core_initcall(opp_debug_init);
cxl/core/port.c:subsys_initcall(cxl_core_init);
cxl/acpi.c:subsys_initcall(cxl_acpi_init);
pnp/system.c:fs_initcall(pnp_system_init);
pnp/pnpacpi/core.c:fs_initcall(pnpacpi_init);
pnp/isapnp/core.c:device_initcall(isapnp_init);
pnp/pnpbios/core.c:fs_initcall(pnpbios_init);
pnp/pnpbios/core.c:device_initcall(pnpbios_thread_init);
pnp/core.c:subsys_initcall(pnp_init);
hte/hte.c:subsys_initcall(hte_subsys_dbgfs_init);
bcma/main.c:fs_initcall(bcma_init_bus_register);
edac/edac_module.c:subsys_initcall(edac_init);
edac/mce_amd.c:early_initcall(mce_amd_init);
mmc/core/core.c:subsys_initcall(mmc_init);
bus/mhi/ep/main.c:postcore_initcall(mhi_ep_init);
bus/mhi/host/init.c:postcore_initcall(mhi_init);
bus/omap_l3_noc.c:postcore_initcall_sync(omap_l3_init);
bus/arm-cci.c:early_initcall(cci_init);
bus/arm-cci.c:core_initcall(cci_platform_init);
bus/omap_l3_smx.c:postcore_initcall_sync(omap3_l3_init);
bus/fsl-mc/fsl-mc-bus.c:postcore_initcall(fsl_mc_bus_driver_init);
bus/mips_cdmm.c:subsys_initcall(mips_cdmm_init);
bus/mvebu-mbus.c:fs_initcall(mvebu_mbus_debugfs_init);
bus/moxtet.c:postcore_initcall_sync(moxtet_init);
clk/davinci/pll.c:/* has to be postcore_initcall because PSC devices depend on PLL parent clocks */
clk/davinci/pll.c:postcore_initcall(davinci_pll_driver_init);
clk/davinci/da8xx-cfgchip.c:/* has to be postcore_initcall because PSC devices depend on the async3 clock */
clk/davinci/da8xx-cfgchip.c:postcore_initcall(da8xx_cfgchip_driver_init);
clk/davinci/psc.c:/* has to be postcore_initcall because davinci_gpio depend on PSC clocks */
clk/davinci/psc.c:postcore_initcall(davinci_psc_driver_init);
clk/clk.c:late_initcall_sync(clk_disable_unused);
clk/clk.c: * will be created lazily by clk_debug_init as part of a late_initcall.
clk/clk.c:late_initcall(clk_debug_init);
clk/nuvoton/clk-ma35d1.c:postcore_initcall(ma35d1_clocks_init);
clk/microchip/clk-mpfs-ccc.c:core_initcall(clk_ccc_init);
clk/microchip/clk-mpfs.c:core_initcall(clk_mpfs_init);
clk/microchip/clk-pic32mzda.c:core_initcall(microchip_pic32mzda_clk_init);
clk/clk-nomadik.c:device_initcall(nomadik_src_clk_init_debugfs);
clk/samsung/clk-exynos5433.c:core_initcall(exynos5433_cmu_init);
clk/samsung/clk-exynosautov9.c:core_initcall(exynosautov9_cmu_init);
clk/samsung/clk-gs101.c:core_initcall(gs101_cmu_init);
clk/samsung/clk-exynos7885.c:core_initcall(exynos7885_cmu_init);
clk/samsung/clk-exynos4412-isp.c:core_initcall(exynos4x12_isp_clk_init);
clk/samsung/clk-exynos5-subcmu.c: * process. Then this driver, during core_initcall registers two platform
clk/samsung/clk-exynos5-subcmu.c: * platform drivers are bound to their devices a bit later in arch_initcall,
clk/samsung/clk-exynos5-subcmu.c:core_initcall(exynos5_clk_drv_init);
clk/samsung/clk-exynos3250.c:subsys_initcall(exynos3250_cmu_platform_init);
clk/samsung/clk-fsd.c:core_initcall(fsd_cmu_init);
clk/samsung/clk-exynos850.c:core_initcall(exynos850_cmu_init);
clk/samsung/clk-pll.c:arch_initcall(samsung_pll_disable_early_timeout);
clk/samsung/clk-s5pv210-audss.c:core_initcall(s5pv210_audss_clk_init);
clk/stm32/clk-stm32mp13.c:core_initcall(stm32mp13_clocks_init);
clk/stm32/clk-stm32mp1.c:core_initcall(stm32mp1_clocks_init);
clk/imx/clk.c:late_initcall_sync(imx_clk_disable_uart);
clk/ralink/clk-mt7621.c:arch_initcall(mt7621_clk_reset_init);
clk/ralink/clk-mtmips.c:arch_initcall(mtmips_clk_reset_init);
clk/actions/owl-s700.c:core_initcall(s700_clk_init);
clk/actions/owl-s900.c:core_initcall(s900_clk_init);
clk/actions/owl-s500.c:core_initcall(s500_clk_init);
clk/clk-tps68470.c: * subsys_initcall() ensures this when the drivers are builtin.
clk/clk-tps68470.c:subsys_initcall(tps68470_clk_init);
clk/clk-en7523.c:arch_initcall(clk_en7523_init);
clk/socfpga/clk-agilex.c:core_initcall(agilex_clk_init);
clk/socfpga/clk-s10.c:core_initcall(s10_clk_init);
clk/tegra/clk.c:arch_initcall(tegra_clocks_apply_init_table);
clk/tegra/clk-tegra30.c:postcore_initcall(tegra30_car_init);
clk/tegra/clk-tegra210.c: * this will be called as an arch_initcall.  No return value.
clk/tegra/clk-tegra124.c: * this will be called as an arch_initcall.  No return value.
clk/tegra/clk-tegra124.c: * this will be called as an arch_initcall.  No return value.
clk/ti/clk-814x.c:core_initcall(dm814x_adpll_early_init);
clk/ti/clk-814x.c:postcore_initcall(dm814x_adpll_enable_init_clocks);
clk/ti/adpll.c:core_initcall(ti_adpll_init);
clk/ti/clkctrl.c:arch_initcall(_omap4_disable_early_timeout);
clk/clk-qoriq.c:device_initcall(clockgen_cpufreq_init);
clk/ux500/abx500-clk.c:arch_initcall(abx500_clk_init);
clk/qcom/gpucc-sm8550.c:subsys_initcall(gpu_cc_sm8550_init);
clk/qcom/dispcc-sm8550.c:subsys_initcall(disp_cc_sm8550_init);
clk/qcom/dispcc-sm6350.c:subsys_initcall(disp_cc_sm6350_init);
clk/qcom/videocc-sm8450.c:subsys_initcall(video_cc_sm8450_init);
clk/qcom/gcc-msm8909.c:core_initcall(gcc_msm8909_init);
clk/qcom/gcc-sc7180.c:core_initcall(gcc_sc7180_init);
clk/qcom/lpasscc-sc7280.c:subsys_initcall(lpass_cc_sc7280_init);
clk/qcom/gcc-ipq5018.c:core_initcall(gcc_ipq5018_init);
clk/qcom/clk-rpm.c:core_initcall(rpm_clk_init);
clk/qcom/gpucc-sm6350.c:core_initcall(gpu_cc_sm6350_init);
clk/qcom/gcc-qcs404.c:core_initcall(gcc_qcs404_init);
clk/qcom/gcc-msm8994.c:core_initcall(gcc_msm8994_init);
clk/qcom/gcc-sdx75.c:subsys_initcall(gcc_sdx75_init);
clk/qcom/videocc-sm8250.c:subsys_initcall(video_cc_sm8250_init);
clk/qcom/gcc-ipq8074.c:core_initcall(gcc_ipq8074_init);
clk/qcom/gpucc-sc7280.c:subsys_initcall(gpu_cc_sc7280_init);
clk/qcom/tcsrcc-sm8550.c:subsys_initcall(tcsr_cc_sm8550_init);
clk/qcom/apcs-msm8996.c:postcore_initcall(qcom_apcs_msm8996_clk_init);
clk/qcom/gcc-sm6375.c:subsys_initcall(gcc_sm6375_init);
clk/qcom/gcc-mdm9607.c:core_initcall(gcc_mdm9607_init);
clk/qcom/clk-rpmh.c:core_initcall(clk_rpmh_init);
clk/qcom/dispcc-sc7180.c:subsys_initcall(disp_cc_sc7180_init);
clk/qcom/gcc-msm8939.c:core_initcall(gcc_msm8939_init);
clk/qcom/gcc-sm6350.c:core_initcall(gcc_sm6350_init);
clk/qcom/gcc-msm8960.c:core_initcall(gcc_msm8960_init);
clk/qcom/gcc-sdx65.c:subsys_initcall(gcc_sdx65_init);
clk/qcom/gcc-ipq9574.c:core_initcall(gcc_ipq9574_init);
clk/qcom/dispcc-sc8280xp.c:subsys_initcall(disp_cc_sc8280xp_init);
clk/qcom/clk-cbf-8996.c:postcore_initcall(qcom_msm8996_cbf_init);
clk/qcom/gcc-sm8150.c:subsys_initcall(gcc_sm8150_init);
clk/qcom/gpucc-sc7180.c:subsys_initcall(gpu_cc_sc7180_init);
clk/qcom/gcc-msm8660.c:core_initcall(gcc_msm8660_init);
clk/qcom/videocc-sc7280.c:subsys_initcall(video_cc_sc7280_init);
clk/qcom/videocc-sdm845.c:subsys_initcall(video_cc_sdm845_init);
clk/qcom/dispcc-sdm845.c:subsys_initcall(disp_cc_sdm845_init);
clk/qcom/tcsrcc-sm8650.c:subsys_initcall(tcsr_cc_sm8650_init);
clk/qcom/gcc-sc8180x.c:core_initcall(gcc_sc8180x_init);
clk/qcom/lpassaudiocc-sc7280.c:subsys_initcall(lpass_audio_cc_sc7280_init);
clk/qcom/videocc-sm8550.c:subsys_initcall(video_cc_sm8550_init);
clk/qcom/gcc-ipq806x.c:core_initcall(gcc_ipq806x_init);
clk/qcom/lpasscc-sdm845.c:subsys_initcall(lpass_cc_sdm845_init);
clk/qcom/gcc-msm8953.c:core_initcall(gcc_msm8953_init);
clk/qcom/dispcc-sm8450.c:subsys_initcall(disp_cc_sm8450_init);
clk/qcom/gcc-sm8350.c:subsys_initcall(gcc_sm8350_init);
clk/qcom/gpucc-sm8150.c:subsys_initcall(gpu_cc_sm8150_init);
clk/qcom/gcc-sdm660.c:core_initcall_sync(gcc_sdm660_init);
clk/qcom/gcc-ipq5332.c:core_initcall(gcc_ipq5332_init);
clk/qcom/lpasscorecc-sc7180.c:subsys_initcall(lpass_sc7180_init);
clk/qcom/dispcc-sm6375.c:subsys_initcall(disp_cc_sm6375_init);
clk/qcom/lpasscorecc-sc7280.c:subsys_initcall(lpass_core_cc_sc7280_init);
clk/qcom/gcc-sdx55.c:subsys_initcall(gcc_sdx55_init);
clk/qcom/gcc-sm8650.c:subsys_initcall(gcc_sm8650_init);
clk/qcom/dispcc-sm8650.c:subsys_initcall(disp_cc_sm8650_init);
clk/qcom/gcc-sdm845.c:core_initcall(gcc_sdm845_init);
clk/qcom/gcc-msm8916.c:core_initcall(gcc_msm8916_init);
clk/qcom/gcc-sc8280xp.c:subsys_initcall(gcc_sc8280xp_init);
clk/qcom/gcc-msm8998.c:core_initcall(gcc_msm8998_init);
clk/qcom/gcc-qcm2290.c:subsys_initcall(gcc_qcm2290_init);
clk/qcom/gcc-msm8974.c:core_initcall(gcc_msm8974_init);
clk/qcom/camcc-sc7280.c:subsys_initcall(cam_cc_sc7280_init);
clk/qcom/gcc-sm6115.c:subsys_initcall(gcc_sm6115_init);
clk/qcom/gcc-sm8450.c:subsys_initcall(gcc_sm8450_init);
clk/qcom/gcc-sm7150.c:subsys_initcall(gcc_sm7150_init);
clk/qcom/clk-smd-rpm.c:core_initcall(rpm_smd_clk_init);
clk/qcom/camcc-sdm845.c:subsys_initcall(cam_cc_sdm845_init);
clk/qcom/dispcc-qcm2290.c:subsys_initcall(disp_cc_qcm2290_init);
clk/qcom/gcc-sm4450.c:subsys_initcall(gcc_sm4450_init);
clk/qcom/gcc-ipq4019.c:core_initcall(gcc_ipq4019_init);
clk/qcom/gpucc-sm8250.c:subsys_initcall(gpu_cc_sm8250_init);
clk/qcom/gcc-msm8976.c:core_initcall(gcc_msm8976_init);
clk/qcom/gcc-apq8084.c:core_initcall(gcc_apq8084_init);
clk/qcom/mss-sc7180.c:subsys_initcall(mss_sc7180_init);
clk/qcom/dispcc-sc7280.c:subsys_initcall(disp_cc_sc7280_init);
clk/qcom/gpucc-sa8775p.c:subsys_initcall(gpu_cc_sa8775p_init);
clk/qcom/camcc-sm6350.c:subsys_initcall(camcc_sm6350_init);
clk/qcom/dispcc-sm6125.c:subsys_initcall(disp_cc_sm6125_init);
clk/qcom/gpucc-sdm845.c:subsys_initcall(gpu_cc_sdm845_init);
clk/qcom/gcc-qdu1000.c:subsys_initcall(gcc_qdu1000_init);
clk/qcom/gpucc-sm8350.c:subsys_initcall(gpu_cc_sm8350_init);
clk/qcom/gcc-sc7280.c:subsys_initcall(gcc_sc7280_init);
clk/qcom/gcc-sa8775p.c:core_initcall(gcc_sa8775p_init);
clk/qcom/gcc-msm8996.c:core_initcall(gcc_msm8996_init);
clk/qcom/videocc-sc7180.c:subsys_initcall(video_cc_sc7180_init);
clk/qcom/gcc-ipq6018.c:core_initcall(gcc_ipq6018_init);
clk/qcom/dispcc-sm8250.c:subsys_initcall(disp_cc_sm8250_init);
clk/qcom/gcc-sm6125.c:subsys_initcall(gcc_sm6125_init);
clk/qcom/gcc-x1e80100.c:subsys_initcall(gcc_x1e80100_init);
clk/qcom/gcc-sm8550.c:subsys_initcall(gcc_sm8550_init);
clk/qcom/videocc-sm8150.c:subsys_initcall(video_cc_sm8150_init);
clk/qcom/gcc-mdm9615.c:core_initcall(gcc_mdm9615_init);
clk/qcom/gcc-msm8917.c:core_initcall(gcc_msm8917_init);
clk/qcom/gcc-sm8250.c:subsys_initcall(gcc_sm8250_init);
clk/qcom/camcc-sc7180.c:subsys_initcall(cam_cc_sc7180_init);
clk/at91/pmc.c:/* This has to happen before arch_initcall because of the tcb_clksrc driver */
clk/at91/pmc.c:postcore_initcall(pmc_register_ops);
clk/renesas/rzg2l-cpg.c:subsys_initcall(rzg2l_cpg_init);
clk/renesas/renesas-cpg-mssr.c:subsys_initcall(cpg_mssr_init);
clk/renesas/r9a06g032-clocks.c:subsys_initcall(r9a06g032_clocks_init);
clk/mediatek/clk-mt6797.c:arch_initcall(clk_mt6797_init);
clk/mediatek/clk-mt2701.c:arch_initcall(clk_mt2701_init);
clk/mediatek/clk-mt7629.c:arch_initcall(clk_mt7629_init);
clk/mediatek/clk-mt6779.c:arch_initcall(clk_mt6779_init);
clk/mediatek/clk-mt6765.c:arch_initcall(clk_mt6765_init);
clk/clk-axm5516.c:core_initcall(axmclk_init);
clk/hisilicon/clk-hi3670.c:core_initcall(hi3670_clk_init);
clk/hisilicon/clk-hi3559a.c:core_initcall(hi3559av100_crg_init);
clk/hisilicon/crg-hi3516cv300.c:core_initcall(hi3516cv300_crg_init);
clk/hisilicon/clk-hi3660-stub.c:subsys_initcall(hi3660_stub_clk_init);
clk/hisilicon/clk-hi3660.c:core_initcall(hi3660_clk_init);
clk/hisilicon/clk-hi3519.c:core_initcall(hi3519_clk_init);
clk/hisilicon/crg-hi3798cv200.c:core_initcall(hi3798cv200_crg_init);
clk/hisilicon/clk-hi6220-stub.c:subsys_initcall(hi6220_stub_clk_init);
counter/counter-core.c:subsys_initcall(counter_init);
firmware/smccc/smccc.c:device_initcall(smccc_devices_init);
firmware/arm_ffa/driver.c:subsys_initcall(ffa_init);
firmware/dmi-id.c:arch_initcall(dmi_id_init);
firmware/imx/imx-scu.c:subsys_initcall_sync(imx_scu_driver_init);
firmware/edd.c:late_initcall(edd_init);
firmware/dmi_scan.c:		/* This is called as a core_initcall() because it isn't
firmware/dmi_scan.c:subsys_initcall(dmi_init);
firmware/broadcom/bcm47xx_sprom.c:fs_initcall(bcm47xx_sprom_register_fallbacks);
firmware/sysfb.c:device_initcall(sysfb_init);
firmware/psci/psci_checker.c:	 * Since we're in an initcall, we assume that all the CPUs that all
firmware/psci/psci_checker.c:	 * is no userspace yet in initcalls, that should be fine, as long as
firmware/psci/psci_checker.c:late_initcall(psci_checker);
firmware/psci/psci.c:late_initcall(psci_debugfs_init)
firmware/psci/psci.c:typedef int (*psci_initcall_t)(const struct device_node *);
firmware/psci/psci.c:	psci_initcall_t init_fn;
firmware/psci/psci.c:	init_fn = (psci_initcall_t)matched_np->data;
firmware/qcom/qcom_scm.c:subsys_initcall(qcom_scm_init);
firmware/qcom/qcom_qseecom.c:subsys_initcall(qcom_qseecom_init);
firmware/stratix10-svc.c:subsys_initcall(stratix10_svc_init);
firmware/memmap.c: * That function must be called before late_initcall.
firmware/memmap.c: * must be called before late_initcall. That's just because that function
firmware/memmap.c: * is called as late_initcall() function, which means that if you call
firmware/memmap.c:late_initcall(firmware_memmap_init);
firmware/arm_scmi/bus.c:subsys_initcall(scmi_bus_init);
firmware/efi/unaccepted_memory.c:core_initcall(unaccepted_memory_init_kdump);
firmware/efi/efi.c:subsys_initcall(efisubsys_init);
firmware/efi/efi.c:early_initcall(efi_memreserve_root_init);
firmware/efi/efi.c:late_initcall(register_update_efi_random_seed);
firmware/efi/capsule.c:core_initcall(capsule_reboot_register);
firmware/efi/earlycon.c: * paging_init() which is earlier than initcall callbacks. Thus adding this
firmware/efi/earlycon.c: * early initcall function early_efi_map_fb() to map the whole EFI framebuffer.
firmware/efi/earlycon.c:early_initcall(efi_earlycon_remap_fb);
firmware/efi/earlycon.c:late_initcall(efi_earlycon_unmap_fb);
firmware/efi/arm-runtime.c:device_initcall(ptdump_init);
firmware/efi/arm-runtime.c:early_initcall(arm_enable_runtime_services);
firmware/efi/arm-runtime.c:	 * be called early because dmi_id_init(), which is an arch_initcall
firmware/efi/arm-runtime.c:core_initcall(arm_dmi_init);
firmware/efi/rci2-table.c:late_initcall(efi_rci2_sysfs_init);
firmware/efi/dev-path-parser.c: * instantiate devices in the "subsys" initcall level, hence the earliest
firmware/efi/dev-path-parser.c: * initcall level in which this function should be called is "fs".
firmware/efi/mokvar-table.c: * This routine must be called during a "middle" initcall phase, i.e.
firmware/efi/mokvar-table.c:fs_initcall(efi_mokvar_sysfs_init);
firmware/efi/reboot.c:late_initcall(efi_shutdown_init);
firmware/efi/riscv-runtime.c:early_initcall(riscv_enable_runtime_services);
firmware/efi/esrt.c:device_initcall(esrt_sysfs_init);
firmware/efi/apple-properties.c:fs_initcall(map_properties);
platform/surface/aggregator/core.c:subsys_initcall(ssam_core_init);
platform/mips/ls2k-reset.c:arch_initcall(ls2k_reset_init);
platform/olpc/olpc-ec.c:arch_initcall(olpc_ec_init_module);
platform/x86/p2sb.c: * should happen after subsys_initcall which initializes PCI subsystem
platform/x86/p2sb.c: * and before device_initcall which requires P2SB resources.
platform/x86/p2sb.c:fs_initcall(p2sb_fs_init);
platform/x86/pmc_atom.c:device_initcall(pmc_atom_init);
platform/x86/intel/telemetry/pltdrv.c:device_initcall(telemetry_module_init);
platform/x86/intel/telemetry/debugfs.c:late_initcall(telemetry_debugfs_init);
platform/x86/intel/ishtp_eclite.c:late_initcall(ecl_ishtp_init);
platform/x86/intel/punit_ipc.c:fs_initcall(intel_punit_ipc_init);
platform/x86/intel/turbo_max_3.c:late_initcall(itmt_legacy_init)
platform/x86/intel_scu_wdt.c:arch_initcall(register_mid_wdt);
platform/x86/touchscreen_dmi.c: * itself is ready (which happens at postcore initcall level), but before
platform/x86/touchscreen_dmi.c: * ACPI starts enumerating devices (at subsys initcall level).
platform/x86/touchscreen_dmi.c:arch_initcall(ts_dmi_init);
platform/x86/amd/hsmp.c:device_initcall(hsmp_plt_init);
platform/x86/intel_scu_ipc.c:subsys_initcall(intel_scu_ipc_init);
platform/x86/wmi.c:subsys_initcall_sync(acpi_wmi_init);
platform/x86/dell/dell-wmi-base.c:late_initcall(dell_wmi_init);
platform/x86/dell/dell-laptop.c: * This can be achieved by late_initcall() instead module_init().
platform/x86/dell/dell-laptop.c:late_initcall(dell_init);
platform/x86/dell/dcdbas.c:subsys_initcall_sync(dcdbas_init);
platform/x86/uv_sysfs.c:device_initcall(uv_sysfs_init);
perf/arm_pmu_acpi.c:subsys_initcall(arm_pmu_acpi_init)
perf/arm_pmuv3.c:device_initcall(armv8_pmu_driver_init)
perf/arm_pmu.c:subsys_initcall(arm_pmu_hp_init);
perf/riscv_pmu_sbi.c:device_initcall(pmu_sbi_devinit)
perf/qcom_l2_pmu.c:device_initcall(register_l2_cache_pmu_driver);
perf/qcom_l3_pmu.c:device_initcall(register_qcom_l3_cache_pmu_driver);
perf/riscv_pmu_legacy.c:late_initcall(riscv_pmu_legacy_devinit);
infiniband/core/device.c:fs_initcall(ib_core_init);
infiniband/sw/rxe/rxe.c:late_initcall(rxe_module_init);
i3c/master.c:subsys_initcall(i3c_init);
tty/serial/rda-uart.c:console_initcall(rda_uart_console_init);
tty/serial/pic32_uart.c:console_initcall(pic32_console_init);
tty/serial/pic32_uart.c:core_initcall(pic32_late_console_init);
tty/serial/pic32_uart.c:arch_initcall(pic32_uart_init);
tty/serial/milbeaut_usio.c:console_initcall(mlb_usio_console_init);
tty/serial/vt8500_serial.c:device_initcall(vt8500_serial_init);
tty/serial/amba-pl011.c:arch_initcall(pl011_init);
tty/serial/mps2-uart.c:arch_initcall(mps2_uart_init);
tty/serial/zs.c:console_initcall(zs_serial_console_init);
tty/serial/mcf.c:console_initcall(mcf_console_init);
tty/serial/lantiq.c:console_initcall(lqasc_console_init);
tty/serial/altera_jtaguart.c:console_initcall(altera_jtaguart_console_init);
tty/serial/liteuart.c:console_initcall(liteuart_console_init);
tty/serial/pxa.c:device_initcall(serial_pxa_init);
tty/serial/dz.c:console_initcall(dz_serial_console_init);
tty/serial/sunhv.c:device_initcall(sunhv_init);
tty/serial/owl-uart.c:console_initcall(owl_uart_console_init);
tty/serial/kgdboc.c: * control what order console initcalls are made and, in any case, many
tty/serial/kgdboc.c: * the console initcalls!
tty/serial/kgdboc.c:console_initcall(kgdboc_earlycon_late_init);
tty/serial/pmac_zilog.c:console_initcall(pmz_console_init);
tty/serial/xilinx_uartps.c:arch_initcall(cdns_uart_init);
tty/serial/mvebu-uart.c:console_initcall(mvebu_uart_console_init);
tty/serial/mvebu-uart.c:arch_initcall(mvebu_uart_init);
tty/serial/atmel_serial.c:device_initcall(atmel_serial_init);
tty/serial/ma35d1_serial.c:console_initcall(ma35d1serial_console_init);
tty/serial/8250/8250_core.c:console_initcall(univ8250_console_init);
tty/serial/8250/8250_omap.c:console_initcall(omap8250_console_fixup);
tty/serial/mpc52xx_uart.c:console_initcall(mpc52xx_console_init);
tty/serial/altera_uart.c:console_initcall(altera_uart_console_init);
tty/serial/cpm_uart.c:console_initcall(cpm_uart_console_init);
tty/serial/sifive.c:console_initcall(sifive_console_init);
tty/serial/bcm63xx_uart.c:console_initcall(bcm63xx_console_init);
tty/serial/21285.c:console_initcall(rs285_console_init);
tty/serial/serial_base_bus.c:		dev_dbg(port->dev, "uart_add_one_port() called before arch_initcall()?\n");
tty/serial/serial_base_bus.c:arch_initcall(serial_base_init);
tty/serial/lpc32xx_hs.c:console_initcall(lpc32xx_hsuart_console_init);
tty/serial/suncore.c:device_initcall(suncore_init);
tty/serial/sprd_serial.c:console_initcall(sprd_serial_console_init);
tty/serial/apbuart.c:console_initcall(apbuart_console_init);
tty/serial/sa1100.c:console_initcall(sa1100_rs_console_init);
tty/serial/sb1250-duart.c:console_initcall(sbd_serial_console_init);
tty/serial/serial_txx9.c:console_initcall(serial_txx9_console_init);
tty/mips_ejtag_fdc.c:console_initcall(mips_ejtag_fdc_init_console);
tty/mips_ejtag_fdc.c:early_initcall(kgdbfdc_init);
tty/pty.c:device_initcall(pty_init);
tty/vt/vt.c:console_initcall(con_init);
tty/vt/vt.c:postcore_initcall(vtconsole_class_init);
tty/ehv_bytechan.c:console_initcall(ehv_bc_console_init);
tty/ehv_bytechan.c:device_initcall(ehv_bc_init);
tty/serdev/core.c:postcore_initcall(serdev_init);
tty/amiserial.c:console_initcall(amiserial_console_init);
tty/hvc/hvc_console.c: * (4) we are after driver, and this initcall will register us
tty/hvc/hvc_console.c:console_initcall(hvc_console_init);
tty/hvc/hvsi.c:device_initcall(hvsi_init);
tty/hvc/hvsi.c:console_initcall(hvsi_console_init);
tty/hvc/hvc_dcc.c:console_initcall(hvc_dcc_console_init);
tty/hvc/hvc_dcc.c:device_initcall(hvc_dcc_init);
tty/hvc/hvc_vio.c:device_initcall(hvc_vio_init); /* after drivers/tty/hvc/hvc_console.c */
tty/hvc/hvc_opal.c:device_initcall(hvc_opal_init);
tty/hvc/hvc_udbg.c:device_initcall(hvc_udbg_init);
tty/hvc/hvc_udbg.c:console_initcall(hvc_udbg_console_init);
tty/hvc/hvc_xen.c:device_initcall(xen_hvc_init);
tty/hvc/hvc_xen.c:console_initcall(xen_cons_init);
tty/hvc/hvc_rtas.c:device_initcall(hvc_rtas_init);
tty/hvc/hvc_rtas.c:console_initcall(hvc_rtas_console_init);
tty/hvc/hvc_riscv_sbi.c:device_initcall(hvc_sbi_init);
tty/hvc/hvc_iucv.c:device_initcall(hvc_iucv_init);
tty/tty_io.c:postcore_initcall(tty_class_init);
tty/sysrq.c:device_initcall(sysrq_init);
misc/eeprom/digsy_mtc_eeprom.c:device_initcall(digsy_mtc_eeprom_devices_init);
misc/uacce/uacce.c:subsys_initcall(uacce_init);
misc/vmw_balloon.c: * Using late_initcall() instead of module_init() allows the balloon to use the
misc/vmw_balloon.c: * as a module, late_initcall() is equivalent to module_init().
misc/vmw_balloon.c:late_initcall(vmballoon_init);
misc/sgi-gru/grufile.c:fs_initcall(gru_init);
misc/cxl/base.c:device_initcall(cxl_base_init);
misc/sram.c:postcore_initcall(sram_init);
misc/kgdbts.c:device_initcall(init_kgdbts);
misc/tifm_core.c:subsys_initcall(tifm_init);
mcb/mcb-core.c: * That means we must use some initcall between subsys_initcall and
mcb/mcb-core.c: * device_initcall.
mcb/mcb-core.c:fs_initcall(mcb_init);
dpll/dpll_core.c:subsys_initcall(dpll_init);
base/isa.c:postcore_initcall(isa_bus_init);
base/firmware_loader/main.c:fs_initcall(firmware_class_init);
base/topology.c:device_initcall(topology_sysfs_init);
base/regmap/regmap.c:static int __init regmap_initcall(void)
base/regmap/regmap.c:	regmap_debugfs_initcall();
base/regmap/regmap.c:postcore_initcall(regmap_initcall);
base/regmap/internal.h:extern void regmap_debugfs_initcall(void);
base/regmap/internal.h:static inline void regmap_debugfs_initcall(void) { }
base/regmap/regmap-debugfs.c:void regmap_debugfs_initcall(void)
base/component.c:core_initcall(component_debug_init);
base/dd.c:static bool initcalls_done;
base/dd.c: * * -ENODEV if initcalls have completed and modules are disabled.
base/dd.c:	if (!IS_ENABLED(CONFIG_MODULES) && initcalls_done) {
base/dd.c:	if (!driver_deferred_probe_timeout && initcalls_done) {
base/dd.c: * deferred_probe_initcall() - Enable probing of deferred devices
base/dd.c: * Instead, this initcall makes sure that deferred probing is delayed until
base/dd.c: * late_initcall time.
base/dd.c:static int deferred_probe_initcall(void)
base/dd.c:	/* Sort as many dependencies as possible before exiting initcalls */
base/dd.c:	initcalls_done = true;
base/dd.c:late_initcall(deferred_probe_initcall);
base/dd.c: * For initcall_debug, show the driver probe time.
base/dd.c:	 * CONFIG_DYNAMIC_DEBUG and we want a simple 'initcall_debug' on the
base/dd.c:	if (initcall_debug)
base/syscore.c:			if (initcall_debug)
base/soc.c:core_initcall(soc_bus_register);
base/devcoredump.c:__initcall(devcoredump_init);
base/core.c:postcore_initcall(devlink_class_init);
base/core.c:static int sync_state_resume_initcall(void)
base/core.c:late_initcall(sync_state_resume_initcall);
base/core.c:			if (initcall_debug)
base/core.c:			if (initcall_debug)
base/core.c:			if (initcall_debug)
base/arch_topology.c:subsys_initcall(register_cpu_capacity_sysctl);
base/arch_topology.c:core_initcall(register_cpufreq_notifier);
base/arch_topology.c:core_initcall(free_raw_capacity);
base/power/wakeup_stats.c:postcore_initcall(wakeup_sources_sysfs_init);
base/power/main.c:static ktime_t initcall_debug_start(struct device *dev, void *cb)
base/power/main.c:static void initcall_debug_report(struct device *dev, ktime_t calltime,
base/power/main.c:	calltime = initcall_debug_start(dev, cb);
base/power/main.c:	initcall_debug_report(dev, calltime, cb, error);
base/power/main.c:	calltime = initcall_debug_start(dev, cb);
base/power/main.c:	initcall_debug_report(dev, calltime, cb, error);
base/power/trace.c:core_initcall(early_resume_init);
base/power/trace.c:late_initcall(late_resume_init);
base/power/wakeup.c:postcore_initcall(wakeup_sources_debugfs_init);
base/swnode.c:postcore_initcall(software_node_init);
base/cacheinfo.c:device_initcall(cacheinfo_sysfs_init);
reset/sti/reset-stih407.c:arch_initcall(stih407_reset_init);
reset/reset-zynqmp.c:arch_initcall(zynqmp_reset_init);
reset/reset-intel-gw.c:postcore_initcall(intel_reset_init);
reset/reset-microchip-sparx5.c: * Because this is a global reset, keep this postcore_initcall() to issue the
reset/reset-microchip-sparx5.c:postcore_initcall(mchp_sparx5_reset_init);
reset/hisilicon/hi6220_reset.c:postcore_initcall(hi6220_reset_init);
reset/hisilicon/reset-hi3660.c:arch_initcall(hi3660_reset_init);
nubus/nubus.c:subsys_initcall(nubus_init);
nubus/bus.c:postcore_initcall(nubus_bus_register);
hwtracing/intel_th/core.c:subsys_initcall(intel_th_init);
dio/dio.c:subsys_initcall(dio_init);
dio/dio-driver.c:postcore_initcall(dio_driver_init);
acpi/acpi_adxl.c:subsys_initcall(adxl_init);
acpi/arm64/gtdt.c:device_initcall(gtdt_sbsa_gwdt_init);
acpi/event.c:fs_initcall(acpi_event_init);
acpi/apei/bert.c:late_initcall(bert_init);
acpi/apei/erst.c:device_initcall(erst_init);
acpi/numa/hmat.c:subsys_initcall(hmat_init);
acpi/bgrt.c:device_initcall(bgrt_init);
acpi/bus.c:subsys_initcall(acpi_init);
acpi/acpi_fpdt.c:fs_initcall(acpi_init_fpdt);
acpi/utils.c: * which happens in the subsys_initcall() subsection. Hence, do not
acpi/utils.c: * call from a subsys_initcall() or earlier (use acpi_get_devices()
acpi/utils.c: * with device_initcall()).
acpi/utils.c: * which happens in the subsys_initcall() subsection. Hence, do not
acpi/utils.c: * call from a subsys_initcall() or earlier (use acpi_get_devices()
acpi/utils.c: * with device_initcall()).
acpi/osl.c:fs_initcall_sync(acpi_reserve_resources);
dma-buf/dma-buf.c:subsys_initcall(dma_buf_init);
dma-buf/dma-resv.c:subsys_initcall(dma_resv_lockdep);
dma-buf/dma-heap.c:subsys_initcall(dma_heap_init);
dma-buf/sync_debug.c:late_initcall(sync_debugfs_init);
hv/vmbus_drv.c:subsys_initcall(hv_acpi_init);
soc/pxa/ssp.c:arch_initcall(pxa_ssp_init);
soc/gemini/soc-gemini.c:subsys_initcall(gemini_soc_init);
soc/samsung/exynos-regulator-coupler.c:arch_initcall(exynos_coupler_init);
soc/samsung/exynos-pmu.c:postcore_initcall(exynos_pmu_init);
soc/imx/soc-imx8m.c:device_initcall(imx8_soc_init);
soc/imx/soc-imx.c:device_initcall(imx_soc_device_init);
soc/sunxi/sunxi_mbus.c:arch_initcall(sunxi_mbus_init);
soc/tegra/fuse/fuse-tegra.c:early_initcall(tegra_init_fuse);
soc/tegra/fuse/fuse-tegra.c:device_initcall(tegra_init_soc);
soc/tegra/cbb/tegra234-cbb.c:pure_initcall(tegra234_cbb_init);
soc/tegra/cbb/tegra194-cbb.c:pure_initcall(tegra194_cbb_init);
soc/tegra/regulators-tegra30.c:arch_initcall(tegra_regulator_coupler_init);
soc/tegra/pmc.c:early_initcall(tegra_pmc_early_init);
soc/tegra/flowctrl.c:early_initcall(tegra_flowctrl_init);
soc/tegra/ari-tegra186.c:early_initcall(tegra186_ari_init);
soc/tegra/regulators-tegra20.c:arch_initcall(tegra_regulator_coupler_init);
soc/ti/smartreflex.c:late_initcall(sr_init);
soc/ti/k3-socinfo.c:subsys_initcall(k3_chipinfo_init);
soc/rockchip/grf.c:postcore_initcall(rockchip_grf_init);
soc/ux500/ux500-soc-id.c:subsys_initcall(ux500_soc_device_init);
soc/qcom/spm.c:arch_initcall(qcom_spm_init);
soc/qcom/qcom_stats.c:late_initcall(qcom_stats_init);
soc/qcom/smd-rpm.c:arch_initcall(qcom_smd_rpm_init);
soc/qcom/apr.c:subsys_initcall(apr_init);
soc/qcom/smem.c:arch_initcall(qcom_smem_init);
soc/qcom/rpmh-rsc.c:arch_initcall(rpmh_driver_init);
soc/qcom/rpm-proc.c:arch_initcall(rpm_proc_init);
soc/qcom/ramp_controller.c:arch_initcall(qcom_ramp_controller_init);
soc/qcom/cmd-db.c:arch_initcall(cmd_db_device_init);
soc/aspeed/aspeed-socinfo.c:early_initcall(aspeed_socinfo_init);
soc/renesas/renesas-soc.c:early_initcall(renesas_soc_init);
soc/amlogic/meson-gx-socinfo.c:device_initcall(meson_gx_socinfo_init);
soc/amlogic/meson-mx-socinfo.c:device_initcall(meson_mx_socinfo_init);
soc/atmel/soc.c:subsys_initcall(atmel_soc_device_init);
soc/mediatek/mtk-regulator-coupler.c:arch_initcall(mediatek_regulator_coupler_init);
soc/mediatek/mtk-infracfg.c:postcore_initcall(mtk_infracfg_init);
soc/loongson/loongson2_guts.c:core_initcall(loongson2_guts_init);
soc/versatile/soc-integrator.c:device_initcall(integrator_soc_init);
soc/bcm/brcmstb/pm/pm-mips.c:arch_initcall(brcmstb_pm_init);
soc/bcm/brcmstb/common.c:early_initcall(brcmstb_soc_device_early_init);
soc/bcm/brcmstb/common.c:arch_initcall(brcmstb_soc_device_init);
soc/bcm/brcmstb/biuctrl.c:early_initcall(brcmstb_biuctrl_init);
soc/fsl/qe/gpio.c:arch_initcall(qe_add_gpiochips);
soc/fsl/qe/qe.c:subsys_initcall(qe_init);
soc/fsl/qe/qe_ic.c:subsys_initcall(qe_ic_of_init);
soc/fsl/guts.c:core_initcall(fsl_guts_init);
memory/tegra/mc.c:arch_initcall(tegra_mc_init);
memory/fsl_ifc.c:subsys_initcall(fsl_ifc_init);
memory/jz4780-nemc.c:subsys_initcall(jz4780_nemc_init);
media/v4l2-core/v4l2-dev.c:subsys_initcall(videodev_init);
media/v4l2-core/v4l2-async.c:subsys_initcall(v4l2_async_init);
media/mc/mc-devnode.c:subsys_initcall(media_devnode_init);
media/pci/saa7134/saa7134-alsa.c:late_initcall(saa7134_alsa_init);
media/pci/sta2x11/sta2x11_vip.c:late_initcall_sync(sta2x11_vip_init_module);
media/pci/cx25821/cx25821-alsa.c:late_initcall(cx25821_alsa_init);
media/cec/core/cec-core.c:subsys_initcall(cec_devnode_init);
media/platform/ti/davinci/vpif.c:subsys_initcall(vpif_init);
media/platform/ti/omap/omap_vout.c:late_initcall(omap_vout_init);
media/dvb-core/dvbdev.c:subsys_initcall(init_dvbdev);
media/rc/rc-main.c:subsys_initcall(rc_core_init);
interconnect/qcom/sm6115.c:core_initcall(qnoc_driver_init);
interconnect/qcom/x1e80100.c:core_initcall(qnoc_driver_init);
interconnect/qcom/msm8996.c:core_initcall(qnoc_driver_init);
interconnect/qcom/sm8450.c:core_initcall(qnoc_driver_init);
interconnect/qcom/sm8650.c:core_initcall(qnoc_driver_init);
interconnect/qcom/sm8550.c:core_initcall(qnoc_driver_init);
interconnect/qcom/sdx75.c:core_initcall(qnoc_driver_init);
interconnect/qcom/sa8775p.c:core_initcall(qnoc_driver_init);
interconnect/qcom/sc8280xp.c:core_initcall(qnoc_driver_init);
interconnect/qcom/qdu1000.c:core_initcall(qnoc_driver_init);
interconnect/core.c:device_initcall(icc_init);
pinctrl/pinctrl-pistachio.c:arch_initcall(pistachio_pinctrl_register);
pinctrl/nomadik/pinctrl-abx500.c:core_initcall(abx500_gpio_init);
pinctrl/nomadik/pinctrl-nomadik.c:subsys_initcall(nmk_gpio_init);
pinctrl/nomadik/pinctrl-nomadik.c:core_initcall(nmk_pinctrl_init);
pinctrl/pinctrl-xway.c:core_initcall_sync(pinmux_xway_init);
pinctrl/nuvoton/pinctrl-npcm7xx.c:arch_initcall(npcm7xx_pinctrl_register);
pinctrl/nuvoton/pinctrl-npcm8xx.c:arch_initcall(npcm8xx_pinctrl_register);
pinctrl/samsung/pinctrl-samsung.c:postcore_initcall(samsung_pinctrl_drv_register);
pinctrl/stm32/pinctrl-stm32mp157.c:arch_initcall(stm32mp157_pinctrl_init);
pinctrl/stm32/pinctrl-stm32mp257.c:arch_initcall(stm32mp257_pinctrl_init);
pinctrl/stm32/pinctrl-stm32f746.c:arch_initcall(stm32f746_pinctrl_init);
pinctrl/stm32/pinctrl-stm32mp135.c:arch_initcall(stm32mp135_pinctrl_init);
pinctrl/stm32/pinctrl-stm32h743.c:arch_initcall(stm32h743_pinctrl_init);
pinctrl/stm32/pinctrl-stm32f769.c:arch_initcall(stm32f769_pinctrl_init);
pinctrl/stm32/pinctrl-stm32f469.c:arch_initcall(stm32f469_pinctrl_init);
pinctrl/stm32/pinctrl-stm32f429.c:arch_initcall(stm32f429_pinctrl_init);
pinctrl/pinctrl-mcp23s08_spi.c: * Register after SPI postcore initcall and before
pinctrl/pinctrl-mcp23s08_spi.c: * subsys initcalls that may rely on these GPIOs.
pinctrl/pinctrl-mcp23s08_spi.c:subsys_initcall(mcp23s08_spi_init);
pinctrl/pinctrl-at91.c:arch_initcall(at91_pinctrl_init);
pinctrl/intel/pinctrl-denverton.c:subsys_initcall(dnv_pinctrl_init);
pinctrl/intel/pinctrl-geminilake.c:subsys_initcall(glk_pinctrl_init);
pinctrl/intel/pinctrl-cedarfork.c:subsys_initcall(cdf_pinctrl_init);
pinctrl/intel/pinctrl-lynxpoint.c:subsys_initcall(lp_gpio_init);
pinctrl/intel/pinctrl-moorefield.c:subsys_initcall(mofld_pinctrl_init);
pinctrl/intel/pinctrl-sunrisepoint.c:subsys_initcall(spt_pinctrl_init);
pinctrl/intel/pinctrl-merrifield.c:subsys_initcall(mrfld_pinctrl_init);
pinctrl/intel/pinctrl-broxton.c:subsys_initcall(bxt_pinctrl_init);
pinctrl/intel/pinctrl-cherryview.c:subsys_initcall(chv_pinctrl_init);
pinctrl/intel/pinctrl-baytrail.c:subsys_initcall(byt_gpio_init);
pinctrl/pinctrl-mcp23s08_i2c.c: * Register after I²C postcore initcall and before
pinctrl/pinctrl-mcp23s08_i2c.c: * subsys initcalls that may rely on these GPIOs.
pinctrl/pinctrl-mcp23s08_i2c.c:subsys_initcall(mcp23s08_i2c_init);
pinctrl/freescale/pinctrl-imx8dxl.c:arch_initcall(imx8dxl_pinctrl_init);
pinctrl/freescale/pinctrl-imx8mm.c:arch_initcall(imx8mm_pinctrl_init);
pinctrl/freescale/pinctrl-imx27.c:arch_initcall(imx27_pinctrl_init);
pinctrl/freescale/pinctrl-imx6dl.c:arch_initcall(imx6dl_pinctrl_init);
pinctrl/freescale/pinctrl-imx6sll.c:arch_initcall(imx6sll_pinctrl_init);
pinctrl/freescale/pinctrl-imx6ul.c:arch_initcall(imx6ul_pinctrl_init);
pinctrl/freescale/pinctrl-imx35.c:arch_initcall(imx35_pinctrl_init);
pinctrl/freescale/pinctrl-imxrt1170.c:arch_initcall(imxrt1170_pinctrl_init);
pinctrl/freescale/pinctrl-imx8mq.c:arch_initcall(imx8mq_pinctrl_init);
pinctrl/freescale/pinctrl-imx8mn.c:arch_initcall(imx8mn_pinctrl_init);
pinctrl/freescale/pinctrl-imx6sx.c:arch_initcall(imx6sx_pinctrl_init);
pinctrl/freescale/pinctrl-imx6sl.c:arch_initcall(imx6sl_pinctrl_init);
pinctrl/freescale/pinctrl-imx8qxp.c:arch_initcall(imx8qxp_pinctrl_init);
pinctrl/freescale/pinctrl-imx8qm.c:arch_initcall(imx8qm_pinctrl_init);
pinctrl/freescale/pinctrl-imx50.c:arch_initcall(imx50_pinctrl_init);
pinctrl/freescale/pinctrl-imx25.c:arch_initcall(imx25_pinctrl_init);
pinctrl/freescale/pinctrl-imxrt1050.c:arch_initcall(imxrt1050_pinctrl_init);
pinctrl/freescale/pinctrl-vf610.c:arch_initcall(vf610_pinctrl_init);
pinctrl/freescale/pinctrl-imx93.c:arch_initcall(imx93_pinctrl_init);
pinctrl/freescale/pinctrl-imx7ulp.c:arch_initcall(imx7ulp_pinctrl_init);
pinctrl/freescale/pinctrl-imx23.c:postcore_initcall(imx23_pinctrl_init);
pinctrl/freescale/pinctrl-imx28.c:postcore_initcall(imx28_pinctrl_init);
pinctrl/freescale/pinctrl-imx51.c:arch_initcall(imx51_pinctrl_init);
pinctrl/freescale/pinctrl-imx53.c:arch_initcall(imx53_pinctrl_init);
pinctrl/freescale/pinctrl-imx8ulp.c:arch_initcall(imx8ulp_pinctrl_init);
pinctrl/freescale/pinctrl-imx8mp.c:arch_initcall(imx8mp_pinctrl_init);
pinctrl/freescale/pinctrl-imx6q.c:arch_initcall(imx6q_pinctrl_init);
pinctrl/freescale/pinctrl-imx7d.c:arch_initcall(imx7d_pinctrl_init);
pinctrl/actions/pinctrl-s900.c:arch_initcall(s900_pinctrl_init);
pinctrl/actions/pinctrl-s500.c:arch_initcall(s500_pinctrl_init);
pinctrl/actions/pinctrl-s700.c:arch_initcall(s700_pinctrl_init);
pinctrl/pinctrl-gemini.c:arch_initcall(gemini_pmx_init);
pinctrl/pinctrl-loongson2.c:arch_initcall(loongson2_pinctrl_init);
pinctrl/pinctrl-ingenic.c:subsys_initcall(ingenic_pinctrl_drv_register);
pinctrl/tegra/pinctrl-tegra194.c:arch_initcall(tegra194_pinctrl_init);
pinctrl/tegra/pinctrl-tegra124.c:arch_initcall(tegra124_pinctrl_init);
pinctrl/tegra/pinctrl-tegra20.c:arch_initcall(tegra20_pinctrl_init);
pinctrl/tegra/pinctrl-tegra30.c:arch_initcall(tegra30_pinctrl_init);
pinctrl/tegra/pinctrl-tegra234.c:arch_initcall(tegra234_pinctrl_init);
pinctrl/tegra/pinctrl-tegra210.c:arch_initcall(tegra210_pinctrl_init);
pinctrl/tegra/pinctrl-tegra114.c:arch_initcall(tegra114_pinctrl_init);
pinctrl/pinctrl-falcon.c:core_initcall_sync(pinctrl_falcon_init);
pinctrl/spear/pinctrl-spear1340.c:arch_initcall(spear1340_pinctrl_init);
pinctrl/spear/pinctrl-plgpio.c:subsys_initcall(plgpio_init);
pinctrl/spear/pinctrl-spear320.c:arch_initcall(spear320_pinctrl_init);
pinctrl/spear/pinctrl-spear300.c:arch_initcall(spear300_pinctrl_init);
pinctrl/spear/pinctrl-spear1310.c:arch_initcall(spear1310_pinctrl_init);
pinctrl/spear/pinctrl-spear310.c:arch_initcall(spear310_pinctrl_init);
pinctrl/visconti/pinctrl-tmpv7700.c:arch_initcall(tmpv7700_pinctrl_init);
pinctrl/qcom/pinctrl-msm8226.c:arch_initcall(msm8226_pinctrl_init);
pinctrl/qcom/pinctrl-msm8916.c:arch_initcall(msm8916_pinctrl_init);
pinctrl/qcom/pinctrl-msm8996.c:arch_initcall(msm8996_pinctrl_init);
pinctrl/qcom/pinctrl-ipq5332.c:arch_initcall(ipq5332_pinctrl_init);
pinctrl/qcom/pinctrl-sdx65.c:arch_initcall(sdx65_pinctrl_init);
pinctrl/qcom/pinctrl-sdx55.c:arch_initcall(sdx55_pinctrl_init);
pinctrl/qcom/pinctrl-sa8775p.c:arch_initcall(sa8775p_pinctrl_init);
pinctrl/qcom/pinctrl-apq8084.c:arch_initcall(apq8084_pinctrl_init);
pinctrl/qcom/pinctrl-sc8280xp.c:arch_initcall(sc8280xp_pinctrl_init);
pinctrl/qcom/pinctrl-ipq9574.c:arch_initcall(ipq9574_pinctrl_init);
pinctrl/qcom/pinctrl-x1e80100.c:arch_initcall(x1e80100_pinctrl_init);
pinctrl/qcom/pinctrl-sm8150.c:arch_initcall(sm8150_pinctrl_init);
pinctrl/qcom/pinctrl-sc7180.c:arch_initcall(sc7180_pinctrl_init);
pinctrl/qcom/pinctrl-ipq8064.c:arch_initcall(ipq8064_pinctrl_init);
pinctrl/qcom/pinctrl-sm6115.c:arch_initcall(sm6115_tlmm_init);
pinctrl/qcom/pinctrl-msm8x74.c:arch_initcall(msm8x74_pinctrl_init);
pinctrl/qcom/pinctrl-msm8998.c:arch_initcall(msm8998_pinctrl_init);
pinctrl/qcom/pinctrl-sm8550.c:arch_initcall(sm8550_tlmm_init);
pinctrl/qcom/pinctrl-sm8650.c:arch_initcall(sm8650_tlmm_init);
pinctrl/qcom/pinctrl-qdu1000.c:arch_initcall(qdu1000_tlmm_init);
pinctrl/qcom/pinctrl-msm8909.c:arch_initcall(msm8909_pinctrl_init);
pinctrl/qcom/pinctrl-qcs404.c:arch_initcall(qcs404_pinctrl_init);
pinctrl/qcom/pinctrl-sm4450.c:arch_initcall(sm4450_tlmm_init);
pinctrl/qcom/pinctrl-msm8953.c:arch_initcall(msm8953_pinctrl_init);
pinctrl/qcom/pinctrl-ipq4019.c:arch_initcall(ipq4019_pinctrl_init);
pinctrl/qcom/pinctrl-msm8960.c:arch_initcall(msm8960_pinctrl_init);
pinctrl/qcom/pinctrl-sdm670.c:arch_initcall(sdm670_pinctrl_init);
pinctrl/qcom/pinctrl-mdm9615.c:arch_initcall(mdm9615_pinctrl_init);
pinctrl/qcom/pinctrl-msm8976.c:arch_initcall(msm8976_pinctrl_init);
pinctrl/qcom/pinctrl-qdf2xxx.c:arch_initcall(qdf2xxx_pinctrl_init);
pinctrl/qcom/pinctrl-ipq5018.c:arch_initcall(ipq5018_pinctrl_init);
pinctrl/qcom/pinctrl-ipq6018.c:arch_initcall(ipq6018_pinctrl_init);
pinctrl/qcom/pinctrl-ipq8074.c:arch_initcall(ipq8074_pinctrl_init);
pinctrl/qcom/pinctrl-sdm845.c:arch_initcall(sdm845_pinctrl_init);
pinctrl/qcom/pinctrl-sm8450.c:arch_initcall(sm8450_tlmm_init);
pinctrl/qcom/pinctrl-mdm9607.c:arch_initcall(mdm9607_pinctrl_init);
pinctrl/qcom/pinctrl-sm8250.c:arch_initcall(sm8250_pinctrl_init);
pinctrl/qcom/pinctrl-sc7280.c:arch_initcall(sc7280_pinctrl_init);
pinctrl/qcom/pinctrl-sdx75.c:arch_initcall(sdx75_pinctrl_init);
pinctrl/qcom/pinctrl-msm8660.c:arch_initcall(msm8660_pinctrl_init);
pinctrl/qcom/pinctrl-sdm660.c:arch_initcall(sdm660_pinctrl_init);
pinctrl/qcom/pinctrl-sm6375.c:arch_initcall(sm6375_tlmm_init);
pinctrl/qcom/pinctrl-sc8180x.c:arch_initcall(sc8180x_pinctrl_init);
pinctrl/qcom/pinctrl-apq8064.c:arch_initcall(apq8064_pinctrl_init);
pinctrl/qcom/pinctrl-msm8994.c:arch_initcall(msm8994_pinctrl_init);
pinctrl/qcom/pinctrl-sm8350.c:arch_initcall(sm8350_tlmm_init);
pinctrl/qcom/pinctrl-sm6125.c:arch_initcall(sm6125_tlmm_init);
pinctrl/qcom/pinctrl-sm6350.c:arch_initcall(sm6350_tlmm_init);
pinctrl/qcom/pinctrl-sm7150.c:arch_initcall(sm7150_tlmm_init);
pinctrl/qcom/pinctrl-qcm2290.c:arch_initcall(qcm2290_pinctrl_init);
pinctrl/pinctrl-st.c:arch_initcall(st_pctl_init);
pinctrl/pinctrl-pic32.c:arch_initcall(pic32_gpio_register);
pinctrl/pinctrl-pic32.c:arch_initcall(pic32_pinctrl_register);
pinctrl/aspeed/pinctrl-aspeed-g6.c:arch_initcall(aspeed_g6_pinctrl_init);
pinctrl/aspeed/pinctrl-aspeed-g5.c:arch_initcall(aspeed_g5_pinctrl_init);
pinctrl/aspeed/pinctrl-aspeed-g4.c:arch_initcall(aspeed_g4_pinctrl_init);
pinctrl/pinctrl-rockchip.c:postcore_initcall(rockchip_pinctrl_drv_register);
pinctrl/renesas/pinctrl-rza1.c:core_initcall(rza1_pinctrl_init);
pinctrl/renesas/pinctrl-rza2.c:core_initcall(rza2_pinctrl_init);
pinctrl/renesas/pinctrl-rzv2m.c:core_initcall(rzv2m_pinctrl_init);
pinctrl/renesas/pinctrl-rzn1.c:subsys_initcall(_pinctrl_drv_register);
pinctrl/renesas/pinctrl-rzg2l.c:core_initcall(rzg2l_pinctrl_init);
pinctrl/renesas/core.c:postcore_initcall(sh_pfc_init);
pinctrl/core.c:core_initcall(pinctrl_init);
pinctrl/mediatek/pinctrl-mt8365.c:arch_initcall(mtk_pinctrl_init);
pinctrl/mediatek/pinctrl-mt8183.c:arch_initcall(mt8183_pinctrl_init);
pinctrl/mediatek/pinctrl-mt8516.c:arch_initcall(mtk_pinctrl_init);
pinctrl/mediatek/pinctrl-mt7981.c:arch_initcall(mt7981_pinctrl_init);
pinctrl/mediatek/pinctrl-mt6765.c:arch_initcall(mt6765_pinctrl_init);
pinctrl/mediatek/pinctrl-mt6795.c:arch_initcall(mtk_pinctrl_init);
pinctrl/mediatek/pinctrl-mt8127.c:arch_initcall(mtk_pinctrl_init);
pinctrl/mediatek/pinctrl-mt7622.c:arch_initcall(mt7622_pinctrl_init);
pinctrl/mediatek/pinctrl-mt8195.c:arch_initcall(mt8195_pinctrl_init);
pinctrl/mediatek/pinctrl-mt8188.c:arch_initcall(mt8188_pinctrl_init);
pinctrl/mediatek/pinctrl-mt6779.c:arch_initcall(mt6779_pinctrl_init);
pinctrl/mediatek/pinctrl-mt2712.c:arch_initcall(mtk_pinctrl_init);
pinctrl/mediatek/pinctrl-mt7620.c:core_initcall_sync(mt7620_pinctrl_init);
pinctrl/mediatek/pinctrl-mt2701.c:arch_initcall(mtk_pinctrl_init);
pinctrl/mediatek/pinctrl-mt8186.c:arch_initcall(mt8186_pinctrl_init);
pinctrl/mediatek/pinctrl-mt6797.c:arch_initcall(mt6797_pinctrl_init);
pinctrl/mediatek/pinctrl-mt8135.c:arch_initcall(mtk_pinctrl_init);
pinctrl/mediatek/pinctrl-mt8173.c:arch_initcall(mtk_pinctrl_init);
pinctrl/mediatek/pinctrl-mt8192.c:arch_initcall(mt8192_pinctrl_init);
pinctrl/mediatek/pinctrl-mt7986.c:arch_initcall(mt7986a_pinctrl_init);
pinctrl/mediatek/pinctrl-mt7986.c:arch_initcall(mt7986b_pinctrl_init);
pinctrl/mediatek/pinctrl-mt7629.c:arch_initcall(mt7629_pinctrl_init);
pinctrl/mediatek/pinctrl-rt305x.c:core_initcall_sync(rt305x_pinctrl_init);
pinctrl/mediatek/pinctrl-mt76x8.c:core_initcall_sync(mt76x8_pinctrl_init);
pinctrl/mediatek/pinctrl-mt7623.c:arch_initcall(mtk_pinctrl_init);
pinctrl/mediatek/pinctrl-rt2880.c:core_initcall_sync(rt2880_pinctrl_init);
pinctrl/mediatek/pinctrl-rt3883.c:core_initcall_sync(rt3883_pinctrl_init);
pinctrl/mediatek/pinctrl-mt8167.c:arch_initcall(mtk_pinctrl_init);
pinctrl/mediatek/pinctrl-mt7621.c:core_initcall_sync(mt7621_pinctrl_init);
pinctrl/pinctrl-bm1880.c:arch_initcall(bm1880_pinctrl_init);
pinctrl/bcm/pinctrl-iproc-gpio.c:arch_initcall_sync(iproc_gpio_init);
pinctrl/bcm/pinctrl-nsp-mux.c:arch_initcall(nsp_pinmux_init);
pinctrl/bcm/pinctrl-ns2-mux.c:arch_initcall(ns2_pinmux_init);
pinctrl/bcm/pinctrl-cygnus-mux.c:arch_initcall(cygnus_pinmux_init);
pinctrl/bcm/pinctrl-nsp-gpio.c:arch_initcall_sync(nsp_gpio_init);
pinctrl/pinctrl-sx150x.c:subsys_initcall(sx150x_init);
pinctrl/pinctrl-artpec6.c:arch_initcall(artpec6_pmx_init);
pinctrl/realtek/pinctrl-rtd1319d.c:arch_initcall(rtd1319d_pinctrl_init);
pinctrl/realtek/pinctrl-rtd1619b.c:arch_initcall(rtd1619b_pinctrl_init);
pinctrl/realtek/pinctrl-rtd1315e.c:arch_initcall(rtd1315e_pinctrl_init);
hwmon/aquacomputer_d5next.c:late_initcall(aqc_init);
hwmon/hwmon.c:subsys_initcall(hwmon_init);
hwmon/nzxt-kraken2.c:late_initcall(kraken2_init);
hwmon/gigabyte_waterforce.c:late_initcall(waterforce_init);
hwmon/corsair-cpro.c: * When compiling this driver as built-in, hwmon initcalls will get called before the
hwmon/corsair-cpro.c: * hid driver and this driver would fail to register. late_initcall solves this.
hwmon/corsair-cpro.c:late_initcall(ccp_init);
hwmon/nzxt-smart2.c:late_initcall(nzxt_smart2_init);
hwmon/corsair-psu.c: * built-in, so use late_initcall() instead.
hwmon/corsair-psu.c:late_initcall(corsair_init);
phy/ti/phy-omap-control.c:subsys_initcall(omap_control_phy_init);
phy/ti/phy-twl4030-usb.c:subsys_initcall(twl4030_usb_init);
phy/rockchip/phy-rockchip-usb.c:early_initcall(rockchip_init_usb_uart);
phy/phy-core.c:device_initcall(phy_core_init);
gpio/gpio-twl4030.c:subsys_initcall(gpio_twl4030_init);
gpio/gpiolib-acpi.c: * late_initcall_sync() handler, so that other builtin drivers can register their
gpio/gpiolib-acpi.c:late_initcall_sync(acpi_gpio_handle_deferred_request_irqs);
gpio/gpiolib-acpi.c:/* Directly after dmi_setup() which runs as core_initcall() */
gpio/gpiolib-acpi.c:postcore_initcall(acpi_gpio_setup_params);
gpio/gpio-max7300.c:subsys_initcall(max7300_init);
gpio/gpio-mc33880.c:/* register after spi postcore initcall and before
gpio/gpio-mc33880.c: * subsys initcalls that may rely on these GPIOs
gpio/gpio-mc33880.c:subsys_initcall(mc33880_init);
gpio/gpio-wm831x.c:subsys_initcall(wm831x_gpio_init);
gpio/gpio-loongson.c:postcore_initcall(loongson_gpio_setup);
gpio/gpio-rockchip.c:postcore_initcall(rockchip_gpio_init);
gpio/gpio-pca953x.c:/* register after i2c postcore initcall and before
gpio/gpio-pca953x.c: * subsys initcalls that may rely on these GPIOs
gpio/gpio-pca953x.c:subsys_initcall(pca953x_init);
gpio/gpio-pxa.c:postcore_initcall(pxa_gpio_legacy_init);
gpio/gpio-pxa.c:device_initcall(pxa_gpio_dt_init);
gpio/gpio-pxa.c:postcore_initcall(pxa_gpio_sysinit);
gpio/gpio-viperboard.c:subsys_initcall(vprbrd_gpio_init);
gpio/gpio-tc3589x.c:subsys_initcall(tc3589x_gpio_init);
gpio/gpio-davinci.c: * access GPIO. Hence davinci_gpio_drv_reg() is a postcore_initcall.
gpio/gpio-davinci.c:postcore_initcall(davinci_gpio_drv_reg);
gpio/gpio-mpc5200.c:subsys_initcall(mpc52xx_gpio_init);
gpio/gpio-stmpe.c:subsys_initcall(stmpe_gpio_init);
gpio/gpio-altera.c:subsys_initcall(altera_gpio_init);
gpio/gpio-xtensa.c:device_initcall(xtensa_gpio_init);
gpio/gpio-omap.c: * Hence omap_gpio_drv_reg() is a postcore_initcall.
gpio/gpio-omap.c:postcore_initcall(omap_gpio_drv_reg);
gpio/gpio-rc5t583.c:subsys_initcall(rc5t583_gpio_init);
gpio/gpio-stp-xway.c:subsys_initcall(xway_stp_init);
gpio/gpiolib.c:core_initcall(gpiolib_dev_init);
gpio/gpiolib.c:subsys_initcall(gpiolib_debugfs_init);
gpio/gpio-max7301.c:/* register after spi postcore initcall and before
gpio/gpio-max7301.c: * subsys initcalls that may rely on these GPIOs
gpio/gpio-max7301.c:subsys_initcall(max7301_init);
gpio/gpio-em.c:postcore_initcall(em_gio_init);
gpio/gpio-mxc.c:subsys_initcall(gpio_mxc_init);
gpio/gpio-loongson-64bit.c:postcore_initcall(loongson_gpio_setup);
gpio/gpio-ep93xx.c:postcore_initcall(ep93xx_gpio_init);
gpio/gpio-da9055.c:subsys_initcall(da9055_gpio_init);
gpio/gpio-wm8994.c:subsys_initcall(wm8994_gpio_init);
gpio/gpiolib-sysfs.c: * Context: arch_initcall or later
gpio/gpiolib-sysfs.c:	 * We run before arch_initcall() so chip->dev nodes can have
gpio/gpiolib-sysfs.c:	 * registered, and so arch_initcall() can always gpiod_export().
gpio/gpiolib-sysfs.c:postcore_initcall(gpiolib_sysfs_init);
gpio/gpio-xilinx.c:subsys_initcall(xgpio_init);
gpio/gpio-mxs.c:postcore_initcall(mxs_gpio_init);
gpio/gpio-spear-spics.c:subsys_initcall(spics_gpio_init);
gpio/gpio-sa1100.c:device_initcall(sa1100_gpio_init_devicefs);
gpio/gpio-mpc8xxx.c:arch_initcall(mpc8xxx_init);
gpio/gpio-f7188x.c:subsys_initcall(f7188x_gpio_init);
gpio/gpio-mm-lantiq.c:subsys_initcall(ltq_mm_init);
gpio/gpio-tps65910.c:subsys_initcall(tps65910_gpio_init);
gpio/gpio-palmas.c:subsys_initcall(palmas_gpio_init);
gpio/gpio-imx-scu.c:subsys_initcall_sync(_imx_scu_gpio_init);
gpio/gpio-wm8350.c:subsys_initcall(wm8350_gpio_init);
gpio/gpio-pcf857x.c:/* register after i2c postcore initcall and before
gpio/gpio-pcf857x.c: * subsys initcalls that may rely on these GPIOs
gpio/gpio-pcf857x.c:subsys_initcall(pcf857x_init);
gpio/gpio-htc-egpio.c:subsys_initcall(egpio_init);
gpio/gpio-max732x.c:/* register after i2c postcore initcall and before
gpio/gpio-max732x.c: * subsys initcalls that may rely on these GPIOs
gpio/gpio-max732x.c:subsys_initcall(max732x_init);
gpio/gpio-tps6586x.c:subsys_initcall(tps6586x_gpio_init);
pps/pps.c:subsys_initcall(pps_init);
power/supply/charger-manager.c:late_initcall(charger_manager_init);
power/supply/power_supply_core.c:subsys_initcall(power_supply_class_init);
power/reset/arm-versatile-reboot.c:device_initcall(versatile_reboot_probe);
power/reset/brcmstb-reboot.c:subsys_initcall(brcmstb_reboot_init);
spmi/hisi-spmi-controller.c:postcore_initcall(spmi_controller_init);
spmi/spmi.c:postcore_initcall(spmi_init);
vfio/mdev/mdev_core.c:subsys_initcall(mdev_init)
input/input.c:subsys_initcall(input_init);
input/keyboard/tca8418_keypad.c:subsys_initcall(tca8418_keypad_init);
input/keyboard/tca6416-keypad.c:subsys_initcall(tca6416_keypad_init);
input/keyboard/gpio_keys.c:late_initcall(gpio_keys_init);
input/gameport/gameport.c:subsys_initcall(gameport_init);
input/serio/serio.c:subsys_initcall(serio_init);
input/serio/ams_delta_serio.c:		 * still set full constriants flag at late_initcall in order
idle/intel_idle.c:device_initcall(intel_idle_init);
irqchip/irq-imgpdc.c:core_initcall(pdc_intc_init);
irqchip/irq-renesas-intc-irqpin.c:postcore_initcall(intc_irqpin_init);
irqchip/irq-stm32-exti.c:arch_initcall(stm32_exti_arch_init);
irqchip/irq-gic-v3-its-platform-msi.c:early_initcall(its_pmsi_init);
irqchip/irq-renesas-irqc.c:postcore_initcall(irqc_init);
irqchip/irq-vic.c: * vic_pm_init - initcall to register VIC pm
irqchip/irq-vic.c: * This is called via late_initcall() to register
irqchip/irq-vic.c:late_initcall(vic_pm_init);
irqchip/irq-sa11x0.c:device_initcall(sa1100irq_init_devicefs);
irqchip/irq-gic-v3-its-pci-msi.c:early_initcall(its_pci_msi_init);
irqchip/irq-st.c:core_initcall(st_irq_syscfg_init);
irqchip/irq-gic-v3-its-fsl-mc-msi.c:early_initcall(its_fsl_mc_msi_init);
irqchip/irq-mst-intc.c:late_initcall(mst_irq_pm_init);
irqchip/irq-renesas-rza1.c:postcore_initcall(rza1_irqc_init);
parport/procfs.c:subsys_initcall(parport_default_proc_register)
thunderbolt/nhi.c:rootfs_initcall(nhi_init);
cpuidle/cpuidle-qcom-spm.c:device_initcall(qcom_spm_cpuidle_init);
cpuidle/cpuidle-psci.c:device_initcall(psci_idle_init);
cpuidle/coupled.c:core_initcall(cpuidle_coupled_init);
cpuidle/cpuidle-psci-domain.c:subsys_initcall(psci_idle_init_domains);
cpuidle/governors/teo.c:postcore_initcall(teo_governor_init);
cpuidle/governors/haltpoll.c:postcore_initcall(init_haltpoll);
cpuidle/governors/ladder.c:postcore_initcall(init_ladder);
cpuidle/governors/menu.c:postcore_initcall(init_menu);
cpuidle/cpuidle-big_little.c:device_initcall(bl_idle_init);
cpuidle/cpuidle-cps.c:device_initcall(cps_cpuidle_init);
cpuidle/cpuidle-pseries.c:device_initcall(pseries_processor_idle_init);
cpuidle/cpuidle-riscv-sbi.c:device_initcall(sbi_cpuidle_init);
cpuidle/cpuidle.c:core_initcall(cpuidle_init);
cpuidle/cpuidle-arm.c:device_initcall(arm_idle_init);
cpuidle/cpuidle-powernv.c:device_initcall(powernv_processor_idle_init);
rtc/class.c:subsys_initcall(rtc_init);
pmdomain/samsung/exynos-pm-domains.c:core_initcall(exynos4_pm_init_power_domain);
pmdomain/st/ste-ux500-pm-domain.c:arch_initcall(ux500_pm_domains_init);
pmdomain/actions/owl-sps.c:postcore_initcall(owl_sps_init);
pmdomain/rockchip/pm-domains.c:postcore_initcall(rockchip_pm_domain_drv_register);
pmdomain/qcom/rpmhpd.c:core_initcall(rpmhpd_init);
pmdomain/qcom/rpmpd.c:core_initcall(rpmpd_init);
pmdomain/renesas/rcar-gen4-sysc.c:early_initcall(rcar_gen4_sysc_pd_init);
pmdomain/renesas/rmobile-sysc.c:core_initcall(rmobile_init_pm_domains);
pmdomain/renesas/rcar-sysc.c:early_initcall(rcar_sysc_pd_init);
pmdomain/core.c:late_initcall_sync(genpd_power_off_unused);
pmdomain/core.c:core_initcall(genpd_bus_init);
pmdomain/core.c:late_initcall(genpd_debug_init);
ssb/main.c: * That means we must use some initcall between subsys_initcall
ssb/main.c: * and device_initcall.
ssb/main.c:fs_initcall(ssb_modinit);
