#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe49bb82b, "module_layout" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2fdc09ca, "netdev_info" },
	{ 0xe5ac9a30, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb307af5e, "ethtool_op_get_ts_info" },
	{ 0x48f4cf58, "skb_clone_tx_timestamp" },
	{ 0xfff80313, "__skb_gso_segment" },
	{ 0x4451c68e, "pci_write_config_word" },
	{ 0xb387c1b, "single_open" },
	{ 0xe221ae70, "_dev_printk" },
	{ 0x6aed265, "param_ops_int" },
	{ 0x684beff4, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xda79796f, "pci_read_config_byte" },
	{ 0x710aad85, "napi_schedule_prep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xcf241651, "dma_set_mask" },
	{ 0xd027439d, "single_release" },
	{ 0x98b258fd, "pci_get_slot" },
	{ 0x158effe1, "seq_puts" },
	{ 0xc8621f5c, "pci_disable_device" },
	{ 0xcadd1b16, "netif_carrier_on" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa1e158d0, "seq_printf" },
	{ 0x60ce9c7c, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xccbc9d33, "pci_write_config_byte" },
	{ 0xe0d3b20d, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xecfba84d, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x198e2a17, "pci_enable_wake" },
	{ 0xae462575, "dma_free_attrs" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3b7e6611, "seq_read" },
	{ 0x4cba64b7, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa06d083e, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x44162c1d, "PDE_DATA" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3abee171, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x6052c34c, "dma_sync_single_for_cpu" },
	{ 0xa81ea040, "proc_mkdir" },
	{ 0x2b3e0f39, "netif_tx_wake_queue" },
	{ 0x614d1e5d, "pci_restore_state" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xde80cd09, "ioremap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5537e52b, "register_netdev" },
	{ 0x138450ae, "seq_putc" },
	{ 0xd9cc5bc7, "napi_enable" },
	{ 0xce7ad4e4, "pci_read_config_word" },
	{ 0x14743fb4, "dma_alloc_attrs" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x87fd1fa8, "proc_mkdir_data" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3f682e53, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf3463887, "init_net" },
	{ 0x63b28712, "_dev_err" },
	{ 0x481e80d4, "pci_enable_msi" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x2e8ba275, "pci_clear_master" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xc139e4a, "pci_find_capability" },
	{ 0x40ab5596, "pci_set_mwi" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xc6cbbc89, "capable" },
	{ 0x50a3e143, "netif_device_attach" },
	{ 0x3b51184, "napi_gro_receive" },
	{ 0xca3d15a5, "_dev_info" },
	{ 0xd9176a4b, "pci_disable_link_state" },
	{ 0xbb914bd6, "netif_device_detach" },
	{ 0xa916b694, "strnlen" },
	{ 0x2bcd2a0e, "__napi_schedule" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7fced08c, "skb_checksum_help" },
	{ 0x92997ed8, "_printk" },
	{ 0x380c1ce1, "napi_complete_done" },
	{ 0x12785d85, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe6edc564, "pci_read_config_dword" },
	{ 0x9da4eb4c, "eth_type_trans" },
	{ 0x1fd07a34, "proc_get_parent_data" },
	{ 0x28c2f996, "dev_driver_string" },
	{ 0x8752c3db, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x460793d5, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc9b822eb, "pci_unregister_driver" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8bd65fac, "__netif_napi_del" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4126ab4b, "pci_set_power_state" },
	{ 0x2200bad7, "remove_proc_subtree" },
	{ 0x54cc4ba2, "proc_create_data" },
	{ 0xfed44a8f, "pci_clear_mwi" },
	{ 0xead3cacc, "seq_lseek" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd6418f67, "pci_request_regions" },
	{ 0xdb1b969f, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xaa72d60e, "dma_sync_single_for_device" },
	{ 0x9c75f2bc, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0x8c4a6dbe, "dma_unmap_page_attrs" },
	{ 0xe7c57927, "unregister_netdev" },
	{ 0x9257233f, "pci_choose_state" },
	{ 0x598edd68, "consume_skb" },
	{ 0xa95f9dc8, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x22d2601b, "__napi_alloc_skb" },
	{ 0xfd98dcf7, "skb_tstamp_tx" },
	{ 0x321b5123, "skb_put" },
	{ 0x7ec807e2, "pci_enable_device" },
	{ 0xf74c5a42, "pci_wake_from_d3" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xd3940437, "param_ops_ulong" },
	{ 0x2313088c, "param_ops_uint" },
	{ 0xea286315, "skb_copy_bits" },
	{ 0x5c9cda7f, "__skb_pad" },
	{ 0xedca606f, "device_set_wakeup_enable" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x67513ede, "pci_save_state" },
	{ 0xdffc8831, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010ECd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008136sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004B10bc*sc*i*");

MODULE_INFO(srcversion, "A9333C60271C1AA7CCCDBA0");
