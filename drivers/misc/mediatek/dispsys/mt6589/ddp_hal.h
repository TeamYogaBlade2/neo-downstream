/*
* Copyright (C) 2011-2014 MediaTek Inc.
* 
* This program is free software: you can redistribute it and/or modify it under the terms of the 
* GNU General Public License version 2 as published by the Free Software Foundation.
* 
* This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with this program.
* If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __DDP_HAL_H__
#define __DDP_HAL_H__

#include "DpDataType.h"
#include "ddp_ovl.h"
#include "ddp_rdma.h"
#include "ddp_drv.h"

struct disp_path_config_ovl_mode_t
{
    unsigned int mode;
    unsigned int pitch;
	unsigned int format;
    unsigned int address;
    struct DISP_REGION roi;
};

int disp_wait_timeout(bool flag, unsigned int timeout);
int disp_path_config(struct disp_path_config_struct* pConfig);
int disp_path_config_layer(OVL_CONFIG_STRUCT* pOvlConfig);
int disp_path_config_layer_addr(unsigned int layer, unsigned int addr);
int disp_path_get_mutex(void);
int disp_path_release_mutex(void);
int disp_path_wait_reg_update(void);

int disp_path_get_mutex_(int mutexId);
int disp_path_release_mutex_(int mutexId);
int disp_path_config_(struct disp_path_config_struct* pConfig, int mutexId);

int disp_path_config_mem_out(struct disp_path_config_mem_out_struct* pConfig);
int disp_path_config_mem_out_without_lcd(struct disp_path_config_mem_out_struct* pConfig);
int disp_path_clock_on(char* name);
int disp_path_clock_off(char* name);
int disp_path_change_tdshp_status(unsigned int layer, unsigned int enable);

void disp_path_clear_mem_out_done_flag(void);
int disp_path_query(void); // return different functions according to chip type
int disp_bls_set_max_backlight(unsigned int level);

int disp_path_config_rdma (RDMA_CONFIG_STRUCT* pRdmaConfig);
int disp_path_config_wdma (struct disp_path_config_mem_out_struct* pConfig);
int disp_path_switch_ovl_mode (struct disp_path_config_ovl_mode_t *pConfig);
int disp_path_get_mem_read_mutex (void);
int disp_path_release_mem_read_mutex (void);
int disp_path_get_mem_write_mutex (void);
int disp_path_release_mem_write_mutex (void);
int disp_path_wait_frame_done(void);
#if defined(CONFIG_TRUSTONIC_TEE_SUPPORT) && defined(CONFIG_MTK_SEC_VIDEO_PATH_SUPPORT)
int disp_path_update_secure_port(void);
#endif
#endif
