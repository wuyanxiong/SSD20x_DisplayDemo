1024x600：
1、
	tar zxvf project-TAKOYAKI-ALPHA004-0910.tar.gz
	tar zxvf sdk-TAKOYAKI-ALPHA004-0910.tar.gz
	cd sdk/verify/
	cp /home/beal.wu/github/SSD20x_DisplayDemo/application/ . -rf
	
	程序自动运行修改：
	vi application/smarttalk/RunFile/demo.sh
		#./mginit &  修改为 ./mginit &

--------------------------虚线内的是如果要改1024x600需要改的部分，如果是800x480，就不需要管---------------
	vi application/smarttalk/demoApp/main_ui.h
		//#define UI_1024_600 修改为 #define UI_1024_600
	cd application/smarttalk/RunFile

	vi etc/MiniGUI.cfg
		将defaultmode=800x480-32bpp 全部改成 defaultmode=1024x600-32bpp
	修改1024x600的UI框架：
	#@mv $(IMAGE_INSTALL_DIR)/customer/smartLayout_800x480.xml $(IMAGE_INSTALL_DIR)/customer/smartLayout.xml
    @mv $(IMAGE_INSTALL_DIR)/customer/smartLayout_1024x600.xml $(IMAGE_INSTALL_DIR)/customer/smartLayout.xml
	
	1024x600的屏需要修改fb的参数：
	vi /project/board/i2m/SSC011A-S01A/config/fbdev.ini 
		[FB_DEVICE]
		FB_HWLAYER_ID = 1
		FB_HWWIN_ID = 0
		FB_HWLAYER_DST = 3
		FB_HWWIN_FORMAT = 5
		FB_HWLAYER_OUTPUTCOLOR = 1
		FB_WIDTH = 1024
		FB_HEIGHT = 600
		FB_TIMMING_WIDTH = 1920
		FB_TIMMING_HEIGHT = 1080
		FB_MMAP_NAME = E_MMAP_ID_FB
		FB_BUFFER_LEN = 4096
		#unit:Kbyte,4096=4M, fbdev.ko alloc size = FB_BUFFER_LEN*1024
-----------------------------------------------------------------------------------------------------------
	编译：
		cd /sdk/verify/application/smarttalk/demoApp
		./build_sample.sh
2、修改project中的编译开关，这里enable之后，编译打包镜像的时候会自动拷贝application下面的资源文件以及app bin到对应的目录
	vi /project/release/customer_tailor/nvr_i2m_display_glibc_tailor.mk
		verify_smarttalk:=enable
	
3、编译升级镜像
	缺省需要改一下内存配置，否则解码跑不起来，如下：
	vi /project/configs/nvr/i2m/8.2.1/spinand.glibc.011a.64
	KERNEL_BOOT_ENV = LX_MEM=$(KERNEL_MEMLEN) mma_heap=mma_heap_name0,miu=0,sz=0x1000000 mma_memblock_remove=1
	>>>>>>修改为如下
	KERNEL_BOOT_ENV = LX_MEM=$(KERNEL_MEMLEN) mma_heap=mma_heap_name0,miu=0,sz=0x1500000 mma_memblock_remove=1
	
	cd /project
	./setup_config.sh configs/nvr/i2m/8.2.1/spinand.glibc.011a.64 
	make clean;make image
