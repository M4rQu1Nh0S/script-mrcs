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
	{ 0x4f26cfb3, "alloc_etherdev_mqs" },
	{ 0x2c808b9e, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x1363e619, "device_set_wakeup_enable" },
	{ 0xdc5b4917, "__skb_pad" },
	{ 0x5e5eb908, "skb_copy_bits" },
	{ 0x8c429269, "param_ops_uint" },
	{ 0x35b435a, "param_ops_ulong" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x5608190a, "pci_wake_from_d3" },
	{ 0x99163a45, "pci_enable_device" },
	{ 0x1657ccfa, "skb_put" },
	{ 0x95e17b93, "skb_tstamp_tx" },
	{ 0x57d86bf0, "__napi_alloc_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xfa50a5ad, "netdev_update_features" },
	{ 0xfccfea8a, "consume_skb" },
	{ 0x715ec5e0, "netif_napi_add_weight" },
	{ 0x52cf514f, "pci_choose_state" },
	{ 0x136caa74, "unregister_netdev" },
	{ 0x1602e251, "dma_unmap_page_attrs" },
	{ 0xf7370f56, "system_state" },
	{ 0x346d0498, "__pci_register_driver" },
	{ 0x6db29433, "dma_sync_single_for_device" },
	{ 0xedc03953, "iounmap" },
	{ 0x59d57177, "pci_disable_msi" },
	{ 0xe379b818, "pci_request_regions" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x8a8a1261, "seq_lseek" },
	{ 0x466a77f9, "pci_clear_mwi" },
	{ 0xbc4ab1a0, "proc_create_data" },
	{ 0x2f2c1287, "remove_proc_subtree" },
	{ 0xf8261602, "pci_set_power_state" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6fd5fb7d, "__netif_napi_del" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4a3c7e9, "pci_unregister_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x957cb279, "netdev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6ff04eb9, "pskb_expand_head" },
	{ 0x7fe51d77, "dev_driver_string" },
	{ 0x8d360ef, "dev_addr_mod" },
	{ 0x9ba6c4c3, "proc_get_parent_data" },
	{ 0x545f84d, "eth_type_trans" },
	{ 0xa6401952, "pci_read_config_dword" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x81ea092f, "dma_map_page_attrs" },
	{ 0xdbd7a5b6, "napi_complete_done" },
	{ 0x92997ed8, "_printk" },
	{ 0xe74b561, "skb_checksum_help" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xa87b7292, "__napi_schedule" },
	{ 0xa916b694, "strnlen" },
	{ 0x6050d520, "netif_device_detach" },
	{ 0x8d3943b2, "pci_disable_link_state" },
	{ 0x4a6dd7ad, "_dev_info" },
	{ 0x57646b37, "napi_gro_receive" },
	{ 0xe3173e78, "netif_device_attach" },
	{ 0xc6cbbc89, "capable" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcaae0371, "pci_set_mwi" },
	{ 0xeff0058, "pci_find_capability" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xcc734e24, "pci_clear_master" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xc3030b8c, "pci_enable_msi" },
	{ 0x90e4ccca, "_dev_err" },
	{ 0x54663477, "init_net" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb1e73597, "proc_mkdir_data" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x102d4cd8, "dma_alloc_attrs" },
	{ 0x3c503812, "pci_read_config_word" },
	{ 0x6cd2f46d, "napi_enable" },
	{ 0xa302e543, "seq_putc" },
	{ 0x8f863c94, "register_netdev" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xde80cd09, "ioremap" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x17522e17, "pci_restore_state" },
	{ 0x737ac6a7, "netif_tx_wake_queue" },
	{ 0xb8bcf97b, "proc_mkdir" },
	{ 0x323078c1, "dma_sync_single_for_cpu" },
	{ 0xfb578fc5, "memset" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa0224787, "pci_set_master" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xceadab7a, "__netdev_alloc_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c62de61, "dma_set_coherent_mask" },
	{ 0x850c9204, "seq_read" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1ff9aa9c, "dma_free_attrs" },
	{ 0xfa042eeb, "pci_enable_wake" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2c2dc98e, "pci_release_regions" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x496ffb2e, "__dev_kfree_skb_any" },
	{ 0xdbb95925, "pci_write_config_byte" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf25aa099, "netif_carrier_off" },
	{ 0xc4974c81, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x96c1dd83, "netif_carrier_on" },
	{ 0xd2ed0d60, "pci_disable_device" },
	{ 0x6fd0881d, "seq_puts" },
	{ 0x42381541, "pci_get_slot" },
	{ 0xd6270304, "single_release" },
	{ 0x7e6ca629, "dma_set_mask" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc605c29e, "netif_set_tso_max_size" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xd7a7a249, "napi_schedule_prep" },
	{ 0x525b8094, "pci_read_config_byte" },
	{ 0x754d539c, "strlen" },
	{ 0x97af0fa8, "napi_disable" },
	{ 0x5d2f7bcc, "param_ops_int" },
	{ 0x95e20d4b, "_dev_printk" },
	{ 0xe80f624f, "netif_set_tso_max_segs" },
	{ 0x1dd70dd0, "single_open" },
	{ 0xc4bf7364, "pci_write_config_word" },
	{ 0xb5e3032a, "__skb_gso_segment" },
	{ 0x4cf8625f, "ethtool_op_get_ts_info" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3d28a876, "pci_write_config_dword" },
	{ 0x5b57a11c, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa91f0dd9, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010ECd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008136sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004B10bc*sc*i*");

MODULE_INFO(srcversion, "0B8582C6A11E9124DA40678");

MODULE_INFO(suserelease, "openSUSE Tumbleweed");
