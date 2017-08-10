struct cpuinfo_mock_file filesystem[] = {
	{
		.path = "/proc/cpuinfo",
		.size = 906,
		.content =
			"processor\t: 0\n"
			"model name\t: AArch64 Processor rev 2 (aarch64)\n"
			"Features\t: fp asimd evtstrm aes pmull sha1 sha2 crc32\n"
			"CPU implementer\t: 0x51\n"
			"CPU architecture: 8\n"
			"CPU variant\t: 0x1\n"
			"CPU part\t: 0x211\n"
			"CPU revision\t: 2\n"
			"\n"
			"processor\t: 1\n"
			"model name\t: AArch64 Processor rev 2 (aarch64)\n"
			"Features\t: fp asimd evtstrm aes pmull sha1 sha2 crc32\n"
			"CPU implementer\t: 0x51\n"
			"CPU architecture: 8\n"
			"CPU variant\t: 0x1\n"
			"CPU part\t: 0x211\n"
			"CPU revision\t: 2\n"
			"\n"
			"processor\t: 2\n"
			"model name\t: AArch64 Processor rev 2 (aarch64)\n"
			"Features\t: fp asimd evtstrm aes pmull sha1 sha2 crc32\n"
			"CPU implementer\t: 0x51\n"
			"CPU architecture: 8\n"
			"CPU variant\t: 0x1\n"
			"CPU part\t: 0x205\n"
			"CPU revision\t: 2\n"
			"\n"
			"processor\t: 3\n"
			"model name\t: AArch64 Processor rev 2 (aarch64)\n"
			"Features\t: fp asimd evtstrm aes pmull sha1 sha2 crc32\n"
			"CPU implementer\t: 0x51\n"
			"CPU architecture: 8\n"
			"CPU variant\t: 0x1\n"
			"CPU part\t: 0x205\n"
			"CPU revision\t: 2\n"
			"\n"
			"Hardware\t: Qualcomm Technologies, Inc MSM8996\n"
			"Revision\t: 000f\n",
	},
	{
		.path = "/system/build.prop",
		.size = 9155,
		.content =
			"\n"
			"# begin build properties\n"
			"# autogenerated by buildinfo.sh\n"
			"ro.build.id=MMB29M\n"
			"ro.build.display.id=MMB29M.G930AUCS4API2\n"
			"ro.build.version.incremental=G930AUCS4API2\n"
			"ro.build.version.sdk=23\n"
			"ro.build.version.preview_sdk=0\n"
			"ro.build.version.codename=REL\n"
			"ro.build.version.all_codenames=REL\n"
			"ro.build.version.release=6.0.1\n"
			"ro.build.version.security_patch=2016-09-01\n"
			"ro.build.version.base_os=samsung/heroqlteuc/heroqlteatt:6.0.1/MMB29M/G930AUCU2APG1:user/release-keys\n"
			"ro.build.date=Fri Sep  9 15:03:08 KST 2016\n"
			"ro.build.date.utc=1473400988\n"
			"ro.build.type=user\n"
			"ro.build.user=dpi\n"
			"ro.build.host=SWHD7522\n"
			"ro.build.tags=release-keys\n"
			"ro.build.flavor=heroqlteuc-user\n"
			"ro.product.model=SAMSUNG-SM-G930A\n"
			"ro.product.brand=samsung\n"
			"ro.product.name=heroqlteuc\n"
			"ro.product.device=heroqlteatt\n"
			"ro.product.board=msm8996\n"
			"# ro.product.cpu.abi and ro.product.cpu.abi2 are obsolete,\n"
			"# use ro.product.cpu.abilist instead.\n"
			"ro.product.cpu.abi=arm64-v8a\n"
			"ro.product.cpu.abilist=arm64-v8a,armeabi-v7a,armeabi\n"
			"ro.product.cpu.abilist32=armeabi-v7a,armeabi\n"
			"ro.product.cpu.abilist64=arm64-v8a\n"
			"ro.product.manufacturer=samsung\n"
			"ro.product.locale=en-US\n"
			"ro.wifi.channels=\n"
			"ro.board.platform=msm8996\n"
			"# ro.build.product is obsolete; use ro.product.device\n"
			"ro.build.product=heroqlteatt\n"
			"# Do not try to parse description, fingerprint, or thumbprint\n"
			"ro.build.description=heroqlteuc-user 6.0.1 MMB29M G930AUCS4API2 release-keys\n"
			"ro.build.fingerprint=samsung/heroqlteuc/heroqlteatt:6.0.1/MMB29M/G930AUCS4API2:user/release-keys\n"
			"ro.build.characteristics=att\n"
			"# Samsung Specific Properties\n"
			"ro.build.PDA=G930AUCS4API2\n"
			"ro.build.hidden_ver=G930AUCS4API2\n"
			"ro.config.rm_preload_enabled=0\n"
			"ro.build.changelist=8575098\n"
			"ro.product_ship=true\n"
			"ro.chipname=MSM8996\n"
			"# end build properties\n"
			"\n"
			"#\n"
			"# HWUI_BUILD_PROPERTIES\n"
			"#\n"
			"ro.hwui.texture_cache_size=88\n"
			"ro.hwui.layer_cache_size=58\n"
			"ro.hwui.path_cache_size=16\n"
			"ro.hwui.texture_cache_flushrate=0.4\n"
			"ro.hwui.shape_cache_size=4\n"
			"ro.hwui.gradient_cache_size=2\n"
			"ro.hwui.drop_shadow_cache_size=6\n"
			"ro.hwui.r_buffer_cache_size=8\n"
			"ro.hwui.text_small_cache_width=1024\n"
			"ro.hwui.text_small_cache_height=1024\n"
			"ro.hwui.text_large_cache_width=4096\n"
			"ro.hwui.text_large_cache_height=2048\n"
			"ro.hwui.fbo_cache_size=16\n"
			"#\n"
			"# from device/samsung/heroqlteatt/system.prop\n"
			"#\n"
			"#\n"
			"# system.prop for msm8996\n"
			"#\n"
			"\n"
			"ro.sf.lcd_density=640\n"
			"\n"
			"debug.sf.hw=1\n"
			"debug.egl.hw=1\n"
			"debug.gralloc.enable_fb_ubwc=1\n"
			"dalvik.vm.heapsize=36m\n"
			"dev.pm.dyn_samplingrate=1\n"
			"persist.demo.hdmirotationlock=false\n"
			"\n"
			"#ro.hdmi.enable=true\n"
			"#persist.speaker.prot.enable=false\n"
			"qcom.hw.aac.encoder=true\n"
			"\n"
			"#system props for the MM modules\n"
			"media.stagefright.enable-player=true\n"
			"media.stagefright.enable-http=true\n"
			"media.stagefright.enable-aac=true\n"
			"media.stagefright.enable-qcp=true\n"
			"media.stagefright.enable-fma2dp=true\n"
			"media.stagefright.enable-scan=true\n"
			"mmp.enable.3g2=true\n"
			"media.aac_51_output_enabled=true\n"
			"mm.enable.smoothstreaming=true\n"
			"#3314291: Decimal sum after adding FLAC parser flag 131072\n"
			"#37491 is decimal sum of supported codecs in AAL\n"
			"#codecs: DivX DivXHD AVI AC3 ASF AAC QCP DTS 3G2 MP2TS\n"
			"mm.enable.qcom_parser=3314291\n"
			"persist.mm.enable.prefetch=true\n"
			"\n"
			"#\n"
			"# system props for the data modules\n"
			"#\n"
			"#ro.use_data_netmgrd=true\n"
			"#persist.data.netmgrd.qos.enable=true\n"
			"#persist.data.mode=concurrent\n"
			"persist.data.dpm.enable=true\n"
			"\n"
			"#system props for time-services\n"
			"persist.timed.enable=true\n"
			"\n"
			"#\n"
			"# system prop for opengles version\n"
			"#\n"
			"# 196608 is decimal for 0x30000 to report version 3\n"
			"ro.opengles.version=196609\n"
			"\n"
			"# system property for maximum number of HFP client connections\n"
			"#bt.max.hfpclient.connections=1\n"
			"\n"
			"# System property for cabl\n"
			"ro.qualcomm.cabl=1\n"
			"\n"
			"#Simulate sdcard on /data/media\n"
			"#\n"
			"persist.fuse_sdcard=true\n"
			"\n"
			"#system prop for Bluetooth SOC type\n"
			"#qcom.bluetooth.soc=rome\n"
			"\n"
			"#system prop for A4WP profile support\n"
			"#ro.bluetooth.a4wp=true\n"
			"\n"
			"#system prop for wipower support\n"
			"#ro.bluetooth.wipower=true\n"
			"\n"
			"#Set this true as ROME which is programmed\n"
			"#as embedded wipower mode by deafult\n"
			"#ro.bluetooth.emb_wp_mode=true\n"
			"\n"
			"#\n"
			"#snapdragon value add features\n"
			"#\n"
			"ro.qc.sdk.audio.ssr=false\n"
			"\n"
			"##fluencetype can be \"fluence\" or \"fluencepro\" or \"none\"\n"
			"ro.qc.sdk.audio.fluencetype=none\n"
			"persist.audio.fluence.voicecall=true\n"
			"persist.audio.fluence.voicerec=false\n"
			"persist.audio.fluence.speaker=true\n"
			"\n"
			"#system prop for RmNet Data\n"
			"persist.rmnet.data.enable=true\n"
			"persist.data.wda.enable=true\n"
			"persist.data.df.dl_mode=5\n"
			"persist.data.df.ul_mode=5\n"
			"persist.data.df.agg.dl_pkt=10\n"
			"persist.data.df.agg.dl_size=4096\n"
			"persist.data.df.mux_count=8\n"
			"persist.data.df.iwlan_mux=9\n"
			"persist.data.df.dev_name=rmnet_usb0\n"
			"\n"
			"#property to enable user to access Google WFD settings\n"
			"persist.debug.wfd.enable=1\n"
			"##property to choose between virtual/external wfd display\n"
			"persist.sys.wfd.virtual=0\n"
			"\n"
			"#property to enable sde downscale feature for external display\n"
			"#sdm.debug.downscale_external=1\n"
			"\n"
			"#property to specify the number of frames to skip before setting hint\n"
			"sdm.perf_hint_window=50\n"
			"\n"
			"#disable tunnel encoding\n"
			"tunnel.audio.encode=false\n"
			"\n"
			"#disable gapless by default\n"
			"audio.offload.gapless.enabled=false\n"
			"\n"
			"#Buffer size in kbytes for compress offload playback\n"
			"audio.offload.buffer.size.kb=32\n"
			"\n"
			"#Enable offload audio video playback by default\n"
			"av.offload.enable=true\n"
			"\n"
			"#Enable 16 bit PCM offload by default\n"
			"audio.offload.pcm.16bit.enable=true\n"
			"\n"
			"#Enable 24 bit PCM offload by default\n"
			"audio.offload.pcm.24bit.enable=true\n"
			"\n"
			"#Enable audio track offload by default\n"
			"audio.offload.track.enabled=true\n"
			"\n"
			"#enable voice path for PCM VoIP by default\n"
			"use.voice.path.for.pcm.voip=true\n"
			"\n"
			"# system prop for NFC DT\n"
			"ro.nfc.port=I2C\n"
			"\n"
			"#hwui properties\n"
			"ro.hwui.texture_cache_size=72\n"
			"ro.hwui.layer_cache_size=48\n"
			"ro.hwui.r_buffer_cache_size=8\n"
			"ro.hwui.path_cache_size=32\n"
			"ro.hwui.gradient_cache_size=1\n"
			"ro.hwui.drop_shadow_cache_size=6\n"
			"ro.hwui.texture_cache_flushrate=0.4\n"
			"ro.hwui.text_small_cache_width=1024\n"
			"ro.hwui.text_small_cache_height=1024\n"
			"ro.hwui.text_large_cache_width=2048\n"
			"ro.hwui.text_large_cache_height=1024\n"
			"\n"
			"#enable voice path for PCM VoIP by default\n"
			"use.voice.path.for.pcm.voip=true\n"
			"\n"
			"#Disable property for Dolby ds2\n"
			"audio.dolby.ds2.enabled=false\n"
			"\n"
			"#Disable property for hard bypass\n"
			"audio.dolby.ds2.hardbypass=false\n"
			"\n"
			"audio.offload.passthrough=false\n"
			"audio.offload.multiple.enabled=false\n"
			"\n"
			"# enable navigation bar\n"
			"qemu.hw.mainkeys=1\n"
			"\n"
			"#property to enable VDS WFD solution\n"
			"persist.hwc.enable_vds=1\n"
			"\n"
			"#Enable stm events\n"
			"#Samsung Disable this because of too poor performance when it enabled.\n"
			"ro.dbg.coresight.config=stm_events_disabled\n"
			"#property to enable fingerprint\n"
			"persist.qfp=false\n"
			"\n"
			"#Set SSC Debug Level on AP Side\n"
			"persist.debug.sensors.hal=W\n"
			"debug.qualcomm.sns.daemon=I\n"
			"debug.qualcomm.sns.libsensor1=I\n"
			"\n"
			"#Disable Sensor Feature\n"
			"ro.qti.sensors.georv=false\n"
			"ro.qti.sensors.cmc=false\n"
			"ro.qti.sensors.dpc=false\n"
			"ro.qti.sensors.facing=false\n"
			"ro.qti.sensors.fast_amd=false\n"
			"ro.qti.sensors.scrn_ortn=false\n"
			"\n"
			"#Disable rotator split feature\n"
			"sdm.debug.disable_rotator_split=1\n"
			"\n"
			"#\n"
			"# ADDITIONAL_BUILD_PROPERTIES\n"
			"#\n"
			"ro.astcenc.astcsupport=1\n"
			"ro.mct.compressiontype=ETC1\n"
			"ro.config.dmverity=true\n"
			"ro.config.kap_default_on=true\n"
			"ro.config.kap=true\n"
			"ro.use_data_netmgrd=true\n"
			"persist.radio.sib16_support=0\n"
			"ro.telephony.default_network=9\n"
			"dalvik.vm.heapstartsize=8m\n"
			"dalvik.vm.heapgrowthlimit=256m\n"
			"dalvik.vm.heapsize=512m\n"
			"dalvik.vm.heaptargetutilization=0.75\n"
			"dalvik.vm.heapminfree=2m\n"
			"dalvik.vm.heapmaxfree=8m\n"
			"keyguard.no_require_sim=true\n"
			"ro.carrier=unknown\n"
			"ro.security.icd.flagmode=multi\n"
			"ro.vendor.extension_library=libqti-perfd-client.so\n"
			"persist.radio.apm_sim_not_pwdn=1\n"
			"persist.radio.custom_ecc=1\n"
			"af.fast_track_multiplier=1\n"
			"audio_hal.period_size=192\n"
			"camera.disable_zsl_mode=1\n"
			"security.mdpp.mass=skmm\n"
			"ro.build.scafe.version=2016A\n"
			"ro.build.scafe.size=short\n"
			"ro.build.scafe.shot=single\n"
			"ro.build.scafe.cream=white\n"
			"ro.frp.pst=/dev/block/persistent\n"
			"ro.error.receiver.default=com.samsung.receiver.error\n"
			"ro.hdcp2.rx=tz\n"
			"ro.secwvk=144\n"
			"ro.securestorage.support=true\n"
			"security.mdpp=None\n"
			"ro.security.mdpp.ver=2.0\n"
			"ro.security.mdpp.release=7\n"
			"security.mdpp.result=None\n"
			"ro.hardware.keystore=mdfpp\n"
			"ro.hardware.gatekeeper=mdfpp\n"
			"ro.security.vpnpp.ver=1.4\n"
			"ro.security.vpnpp.release=6.1\n"
			"ro.sec.fle.encryption=true\n"
			"sys.config.bigdata_enable=true\n"
			"sys.config.bigdata_mem_enable=true\n"
			"ro.config.dha_cached_min=8\n"
			"ro.config.dha_cached_max=16\n"
			"ro.config.dha_empty_min=8\n"
			"ro.config.dha_empty_max=32\n"
			"ro.config.dha_th_rate=1.7\n"
			"ro.config.dha_pwhitelist_enable=1\n"
			"ro.config.ringtone=ATT_Firefly_Default.ogg\n"
			"ro.config.notification_sound=Whisper.ogg\n"
			"ro.config.alarm_alert=Morning_Flower.ogg\n"
			"ro.config.media_sound=Media_preview_Touch_the_light.ogg\n"
			"ro.config.ringtone_2=Basic_Bell.ogg\n"
			"ro.config.notification_sound_2=S_Charming_Bell.ogg\n"
			"ro.security.mdpp.ux=Enabled\n"
			"ro.setupwizard.mode=OPTIONAL\n"
			"ro.com.google.gmsversion=6.0_r4\n"
			"ro.com.google.clientidbase=android-samsung\n"
			"persist.sys.dalvik.vm.lib.2=libart.so\n"
			"dalvik.vm.isa.arm64.variant=kryo\n"
			"dalvik.vm.isa.arm64.features=default\n"
			"dalvik.vm.isa.arm.variant=cortex-a53\n"
			"dalvik.vm.isa.arm.features=default\n"
			"ro.build.selinux=1\n"
			"ro.config.knox=v30\n"
			"ro.config.tima=1\n"
			"ro.config.timaversion=3.0\n"
			"ro.config.iccc_version=1.0\n"
			"ro.kernel.qemu=0\n"
			"net.bt.name=Android\n"
			"dalvik.vm.stack-trace-file=/data/anr/traces.txt\n"
			"persist.gps.qc_nlp_in_use=1\n"
			"persist.loc.nlp_name=com.qualcomm.location\n"
			"ro.gps.agps_provider=1\n"
			"ro.build.version.sdl=2301\n"
			"ro.expect.recovery_id=0xbac75f48839f9ae1a4cfb41a5dbbf9aa6183ef1f000000000000000000000000\n"
			"\n",
	},
	{
		.path = "/sys/devices/system/cpu/kernel_max",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/possible",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/present",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1593600\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "307200\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_siblings_list",
		.size = 4,
		.content = "0-1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/thread_siblings_list",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1593600\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "307200\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/core_siblings_list",
		.size = 4,
		.content = "0-1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/core_id",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/thread_siblings_list",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "2150400\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "307200\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/physical_package_id",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/core_siblings_list",
		.size = 4,
		.content = "2-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/core_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/thread_siblings_list",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "2150400\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "307200\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/physical_package_id",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/core_siblings_list",
		.size = 4,
		.content = "2-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/core_id",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/thread_siblings_list",
		.size = 2,
		.content = "3\n",
	},
	{ NULL },
};
