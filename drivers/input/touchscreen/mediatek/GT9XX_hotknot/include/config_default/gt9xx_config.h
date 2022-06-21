/* drivers/input/touchscreen/gt1x_generic.h
 *
 * 2010 - 2014 Goodix Technology.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be a reference
 * to you, when you are integrating the GOODiX's CTP IC into your system,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * Version: 1.0
 * Revision Record:
 *      V1.0:  first release. 2014/09/28.
 *
 */

#ifndef _GT9XX_CONFIG_H_
#define _GT9XX_CONFIG_H_

//#define CONFIG_GTP_DRIVER_SEND_CFG //driver send config to TP
#define CONFIG_GTP_CUSTOM_CFG

//#define CONFIG_GTP_FW_DOWNLOAD
//#define CONFIG_GTP_AUTO_UPDATE //auto update firmware
#define CONFIG_GTP_HEADER_FW_UPDATE //updated fw by gt1x_firmware.h,function together with GTP_AUTO_UPDATE
//#define CONFIG_GTP_AUTO_UPDATE_CFG

//#define CONFIG_GUP_USE_HEADER_FILE
//#define CONFIG_GTP_COMPATIBLE_MODE

//#define CONFIG_GTP_CHANGE_X2Y //swap x  y
//#define CONFIG_GTP_SUPPORT_I2C_DMA
#define CONFIG_GTP_CREATE_WR_NODE //supports GTP Tools
#define CONFIG_GTP_POWER_CTRL_SLEEP //power off  when suspend

//#define CONFIG_GTP_SLIDE_WAKEUP
//#define CONFIG_HOTKNOT_BLOCK_RW
//#define CONFIG_TPD_PROXIMITY

//#define CONFIG_GTP_ESD_PROTECT //esd protection
//#define CONFIG_GTP_CHARGER_DETECT //charger plugin & plugout detect
//#define CONFIG_GTP_CHARGER_SWITCH

//#define CONFIG_GTP_DEBUG_ON
//#define CONFIG_GTP_DEBUG_ARRAY_ON
//#define CONFIG_GTP_DEBUG_FUNC_ON
//#define CONFIG_GTP_DBL_CLK_WAKEUP

#define TPD_HAVE_BUTTON

#define GTP_MAX_HEIGHT   1920
#define GTP_MAX_WIDTH    1080

#define TPD_WARP_X
#define TPD_WARP_Y

/***************************PART2:TODO define**********************************/
/*TODO: puts the config info corresponded to your TP here, the following is just
		a sample config, send this config should cause the chip can not work normally*/

/* TODO define your config for Sensor_ID == 0 here, if needed */
#define CTP_CFG_GROUP1 {\
	0x4E,0x38,0x04,0x80,0x07,0x0A,0x35,0x01,\
	0x01,0x08,0x28,0x28,0x78,0x64,0x03,0x05,\
	0x4E,0x00,0x00,0x00,0x22,0x22,0x08,0x14,\
	0x14,0x24,0x14,0x8C,0x2D,0x0E,0x59,0x5B,\
	0xB9,0x08,0xB9,0x08,0x00,0xBB,0x33,0x11,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x2B,0x24,0x78,0x54,0xC0,0x02,\
	0x10,0x00,0x03,0x04,0xB1,0x28,0x00,0x90,\
	0x34,0x28,0x7A,0x42,0x00,0x6A,0x54,0x00,\
	0x5E,0x6B,0x00,0x5E,0x70,0x00,0x00,0x00,\
	0xF5,0x50,0x40,0xAA,0xAA,0x57,0x15,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x67,\
	0x22,0x00,0x03,0x00,0x10,0x02,0x32,0x14,\
	0x14,0x14,0x50,0x00,0x00,0x00,0x00,0x28,\
	0x02,0x04,0x06,0x08,0x0A,0x0C,0x0E,0x10,\
	0x12,0x14,0x16,0x18,0x1A,0x1C,0x00,0x00,\
	0x00,0x00,0x02,0x78,0x46,0x07,0x40,0x63,\
	0xB4,0xA0,0x13,0x94,0x8C,0x46,0x14,0x13,\
	0x12,0x10,0x0F,0x0C,0x0A,0x08,0x06,0x04,\
	0x02,0x00,0x16,0x18,0x1C,0x24,0x26,0x28,\
	0x1D,0x1E,0x1F,0x20,0x21,0x22,0x29,0xFF,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0xBE,0x01,\
}

#define CTP_CFG_GROUP1_CHARGER {}

/* TODO puts your group2 config info here,if need. */
#define CTP_CFG_GROUP2 {}

/* TODO puts your group2 config info here,if need. */
#define CTP_CFG_GROUP2_CHARGER {}

/* TODO puts your group3 config info here,if need. */
#define CTP_CFG_GROUP3 {}

/* TODO puts your group3 config info here,if need. */
#define CTP_CFG_GROUP3_CHARGER {}

/* TODO: define your config for Sensor_ID == 3 here, if needed */
#define CTP_CFG_GROUP4 {}

/* TODO: define your config for Sensor_ID == 4 here, if needed */
#define CTP_CFG_GROUP5 {}

/* TODO: define your config for Sensor_ID == 5 here, if needed */
#define CTP_CFG_GROUP6 {}

#define TPD_CALIBRATION_MATRIX_ROTATION_NORMAL {-4096, 0, GTP_MAX_WIDTH*4096, 0, -4096, GTP_MAX_HEIGHT*4096, 0, 0}
#define TPD_CALIBRATION_MATRIX_ROTATION_FACTORY {-4096, 0, GTP_MAX_WIDTH*4096, 0, -4096, GTP_MAX_HEIGHT*4096, 0, 0}

#endif /* _GT1X_CONFIG_H_ */
