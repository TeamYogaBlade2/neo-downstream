include $(srctree)/drivers/misc/mediatek/Makefile.custom

obj-$(CONFIG_MTK_FB) := dsi_drv.o dpi_drv.o  lcd_drv.o dpi1_drv.o

ifeq ($(CONFIG_MTK_GPU_SUPPORT), y)
ccflags-y += -DHWGPU_SUPPORT
endif

# tvc_drv.o tve_drv.o tvrot_drv.o
#ccflags-y += -I$(MTK_PATH_PLATFORM)/drivers/videox/ \
#	     -I$(MTK_PATH_SOURCE)/drivers/video/ \
#			 -I$(MTK_PATH_PLATFORM)/drivers/dispsys/
