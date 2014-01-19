/* SEMC:modified */
/* 
   ES209RA board specific file.   
   Copyright (C) 2009 Sony Ericsson Mobile Communications Japan, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License, version 2, as
   published by the Free Software Foundation.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/

#ifndef _BOARD_ES209RA_H
#define _BOARD_ES209RA_H

#if defined(CONFIG_ARCH_QSD8X50)
#include <mach/irqs-8x50.h>
#include <mach/sirc.h>
#else
#include <mach/irqs-7xxx.h>
#endif

#define INT_ES209RA_GPIO_BATLOW			MSM_GPIO_TO_INT(145)
#define INT_ES209RA_GPIO_LEDC			MSM_GPIO_TO_INT(144)
#define INT_ES209RA_GPIO_UART2DM_RXD	MSM_GPIO_TO_INT(139)
#define INT_ES209RA_GPIO_PROXS			MSM_GPIO_TO_INT(108)
#define INT_ES209RA_GPIO_ETHER			MSM_GPIO_TO_INT(107)
#define INT_ES209RA_GPIO_VSYNC			MSM_GPIO_TO_INT(98)
#define INT_ES209RA_GPIO_ECOMPASS		MSM_GPIO_TO_INT(3)
#define ES209RA_GPIO_ACCEL			82
#define INT_ES209RA_GPIO_ACCEL			MSM_GPIO_TO_INT(ES209RA_GPIO_ACCEL)
#define INT_ES209RA_GPIO_OCV			MSM_GPIO_TO_INT(44)
#define INT_ES209RA_GPIO_TOUCHPAD		MSM_GPIO_TO_INT(37)
#define INT_ES209RA_GPIO_PM				MSM_GPIO_TO_INT(24)
#define INT_ES209RA_GPIO_CARD_INS_N		MSM_GPIO_TO_INT(23)
#define INT_ES209RA_GPIO_BT_HOSTWAKE	MSM_GPIO_TO_INT(21)
#define INT_ES209RA_GPIO_CAM_VSYNC		MSM_GPIO_TO_INT(14)
#define INT_ES209RA_GPIO_CAM_ISP		MSM_GPIO_TO_INT(1) 

/* SEMC: add bit definition for startup_reason - start */
/* PMIC startup reason */
#define STARTUP_REASON_POWER_KEY		(1 << 0)
#define STARTUP_REASON_RTC_ALARM		(1 << 1)
#define STARTUP_REASON_CABLE_POWER_ON	(1 << 2)
#define STARTUP_REASON_SMPL				(1 << 3)
#define STARTUP_REASON_WDOG_RESTART		(1 << 4)
#define STARTUP_REASON_USB_CHARGER		(1 << 5)
#define STARTUP_REASON_WALL_CHARGER		(1 << 6)
/* software startup reason */
#define STARTUP_REASON_FOTA_IU			(1 << 16)
#define STARTUP_REASON_FOTA_FI			(1 << 17)
#define STARTUP_REASON_MR				(1 << 18)
#define STARTUP_REASON_CMZ				(1 << 19)
#define STARTUP_REASON_TYPE_APPROVAL	(1 << 28)

#ifdef CONFIG_MSM_MULTIMEDIA_USE_ION
#define MSM_PMEM_SF_SIZE 0x4000000 
#define MSM_PMEM_AUDIO_SIZE	0x4CF000
#define MSM_PMEM_ADSP2_SIZE 0x1700000
#define MSM_PMEM_SF_SIZE 0x4000000 
#define MSM_ION_CAMERA_SIZE   0x2000000

#define MSM_ION_CAMERA_BASE   (0x40E00000)	
#define MSM_ION_WB_BASE       (0x46400000)
#define MSM_ION_AUDIO_BASE    (0x7FB00000)

#define MSM_PMEM_SF_BASE		(0x70000000 - MSM_PMEM_SF_SIZE)
#define MSM_PMEM_ADSP_BASE		(MSM_PMEM_SF_BASE - MSM_PMEM_ADSP_SIZE)
#define MSM_PMEM_AUDIO_BASE		(0x46400000)
#define MSM_ION_SF_SIZE       MSM_PMEM_SF_SIZE
#define MSM_ION_ROTATOR_SIZE  MSM_PMEM_ADSP2_SIZE
#define MSM_ION_MM_FW_SIZE    0x200000  
#define MSM_ION_MM_SIZE       0x3D00000 
#define MSM_ION_MFC_SIZE      0x100000  
#define MSM_ION_WB_SIZE       0x2FD000  
#define MSM_ION_HEAP_NUM      9
#endif

extern struct max17040_device_data max17040_dev_data;

//#define GPIO_COMPASS	    161
#define GPIO_COMPASS_RST	2
#define PROJECT_NAME          "es209ra"
#define LAYOUTS { 			   \
	{ {-1,  0, 0}, { 0, -1,  0}, {0, 0,  1} }, \
	{ { 0, -1, 0}, { 1,  0,  0}, {0, 0, -1} }, \
	{ { 0, -1, 0}, { 1,  0,  0}, {0, 0,  1} }, \
	{ {-1,  0, 0}, { 0,  0, -1}, {0, 1,  0} }  \
}

#endif

