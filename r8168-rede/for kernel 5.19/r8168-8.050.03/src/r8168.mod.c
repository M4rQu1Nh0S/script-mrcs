#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
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
	{ 0xafefc455, "alloc_etherdev_mqs" },
	{ 0x999879d5, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xbde0be07, "device_set_wakeup_enable" },
	{ 0x491325e5, "__skb_pad" },
	{ 0x371c90d4, "skb_copy_bits" },
	{ 0x5889a7d6, "param_ops_uint" },
	{ 0x58512672, "param_ops_ulong" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc1be83e8, "pci_wake_from_d3" },
	{ 0xd218658c, "pci_enable_device" },
	{ 0x93701a0a, "skb_put" },
	{ 0x429815d5, "skb_tstamp_tx" },
	{ 0x16a3f68a, "__napi_alloc_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xf8eb35ea, "netdev_update_features" },
	{ 0xd016e716, "consume_skb" },
	{ 0xfc17883f, "netif_napi_add_weight" },
	{ 0xddc5ee3, "pci_choose_state" },
	{ 0x35a5b175, "unregister_netdev" },
	{ 0x5939bbf, "dma_unmap_page_attrs" },
	{ 0xf7370f56, "system_state" },
	{ 0x371108fb, "__pci_register_driver" },
	{ 0xc37af15d, "dma_sync_single_for_device" },
	{ 0xedc03953, "iounmap" },
	{ 0xdd955546, "pci_disable_msi" },
	{ 0x60430876, "pci_request_regions" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xbab057b5, "seq_lseek" },
	{ 0xf0c2ba3f, "pci_clear_mwi" },
	{ 0xa8caac79, "proc_create_data" },
	{ 0x5def106a, "remove_proc_subtree" },
	{ 0xaa4b0eff, "pci_set_power_state" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe8917b31, "__netif_napi_del" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9a574885, "pci_unregister_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc15f58e, "netdev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9877ec7a, "pskb_expand_head" },
	{ 0xdb7dbe85, "dev_driver_string" },
	{ 0x7a9457a0, "dev_addr_mod" },
	{ 0x56b9a737, "proc_get_parent_data" },
	{ 0x247c3a29, "eth_type_trans" },
	{ 0x928bb482, "pci_read_config_dword" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x69e0465e, "dma_map_page_attrs" },
	{ 0x9b93d61e, "napi_complete_done" },
	{ 0x92997ed8, "_printk" },
	{ 0x992b8014, "skb_checksum_help" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x4d0a2431, "__napi_schedule" },
	{ 0xa916b694, "strnlen" },
	{ 0xb781f3a8, "netif_device_detach" },
	{ 0x842bb979, "pci_disable_link_state" },
	{ 0xee3560b3, "_dev_info" },
	{ 0x66b16862, "napi_gro_receive" },
	{ 0xb563f820, "netif_device_attach" },
	{ 0xc6cbbc89, "capable" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb179faf0, "pci_set_mwi" },
	{ 0x47b069b3, "pci_find_capability" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xb5d3e36a, "pci_clear_master" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x2ac83b0c, "pci_enable_msi" },
	{ 0xa28f4376, "_dev_err" },
	{ 0xfbe26e7f, "init_net" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x433d42c8, "proc_mkdir_data" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xdf67366a, "dma_alloc_attrs" },
	{ 0x4499e5a9, "pci_read_config_word" },
	{ 0xb462241f, "napi_enable" },
	{ 0x4f2319ef, "seq_putc" },
	{ 0xad2f45b1, "register_netdev" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xde80cd09, "ioremap" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x1f40a827, "pci_restore_state" },
	{ 0x9caad7cc, "netif_tx_wake_queue" },
	{ 0x6ce94e14, "proc_mkdir" },
	{ 0x9d93905c, "dma_sync_single_for_cpu" },
	{ 0xfb578fc5, "memset" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x65bc5d17, "pci_set_master" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x8c8b65a3, "__netdev_alloc_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6070e5ef, "dma_set_coherent_mask" },
	{ 0x63af4e72, "seq_read" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x71d1eaf9, "dma_free_attrs" },
	{ 0xb270bd42, "pci_enable_wake" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x34e0c128, "pci_release_regions" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xad497ca, "__dev_kfree_skb_any" },
	{ 0xd1f6309f, "pci_write_config_byte" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9715758, "netif_carrier_off" },
	{ 0x455b421, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x203c37c3, "netif_carrier_on" },
	{ 0x70874b01, "pci_disable_device" },
	{ 0xdef43f17, "seq_puts" },
	{ 0xae37ba99, "pci_get_slot" },
	{ 0xb2772c1e, "single_release" },
	{ 0x9b0b1e3, "dma_set_mask" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xcf0dc8f6, "netif_set_tso_max_size" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x4dd2b21e, "napi_schedule_prep" },
	{ 0xa5f3572a, "pci_read_config_byte" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0xdc409a69, "napi_disable" },
	{ 0x2d2a26af, "param_ops_int" },
	{ 0xecbf4701, "_dev_printk" },
	{ 0xcbc0a435, "netif_set_tso_max_segs" },
	{ 0x19451316, "single_open" },
	{ 0x507c527c, "pci_write_config_word" },
	{ 0x410721c9, "__skb_gso_segment" },
	{ 0x4a67782, "skb_clone_tx_timestamp" },
	{ 0xf660fb02, "ethtool_op_get_ts_info" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9e5de86e, "pci_write_config_dword" },
	{ 0x57d40a9e, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x8e099eb2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010ECd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008136sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004B10bc*sc*i*");

MODULE_INFO(srcversion, "0B8582C6A11E9124DA40678");
