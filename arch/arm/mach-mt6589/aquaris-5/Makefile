include $(srctree)/drivers/misc/mediatek/Makefile.custom

# TODO

ifneq ($(CONFIG_ARCH_MTK_PROJECT),)
ARCH_MTK_PROJECT := $(shell echo $(CONFIG_ARCH_MTK_PROJECT))
obj-y	+= core/
obj-y	+= dct/dct/
endif

#include $(MTK_PATH_BUILD)/common.mk
#$(call all-modules-src-or-makefile,$(obj),CUSTOM_KERNEL_)
#obj-n := dummy.o
#
#ifeq ($(MTK_ALPS_BOX_SUPPORT), yes)
#ccflags-y += -DMTK_ALPS_BOX_SUPPORT
#endif
