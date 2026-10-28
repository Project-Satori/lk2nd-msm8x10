// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2026 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_TIANMA_OTM9605A_5_QHD_VIDEO_H_
#define _PANEL_TIANMA_OTM9605A_5_QHD_VIDEO_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config tianma_otm9605a_5_qhd_video_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_tianma_otm9605a_5_qhd_video",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 0,
	.panel_init_delay = 0,
};

static struct panel_resolution tianma_otm9605a_5_qhd_video_panel_res = {
	.panel_width = 540,
	.panel_height = 960,
	.hfront_porch = 100,
	.hback_porch = 100,
	.hpulse_width = 4,
	.hsync_skew = 0,
	.vfront_porch = 32,
	.vback_porch = 32,
	.vpulse_width = 2,
	/* Borders not supported yet */
};

static struct color_info tianma_otm9605a_5_qhd_video_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char tianma_otm9605a_5_qhd_video_on_cmd_0[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_1[] = {
	0x04, 0x00, 0x29, 0xc0, 0xff, 0x96, 0x05, 0x01
};
static char tianma_otm9605a_5_qhd_video_on_cmd_2[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_3[] = {
	0x03, 0x00, 0x29, 0xc0, 0xff, 0x96, 0x05, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_4[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_5[] = {
	0x02, 0x00, 0x29, 0xc0, 0xa0, 0x00, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_6[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xb4, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_7[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc0, 0x50, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_8[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_9[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc1, 0x36, 0x66, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_10[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x89, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_11[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc0, 0x01, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_12[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_13[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc4, 0x9c, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_14[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xb1, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_15[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc6, 0x06, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_16[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xa0, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_17[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc1, 0x00, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_18[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xc0, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_19[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc5, 0x00, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_20[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xc5, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_21[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb0, 0x03, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_22[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x90, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_23[] = {
	0x08, 0x00, 0x29, 0xc0, 0xc5, 0x96, 0x19, 0x01,
	0x79, 0x33, 0x33, 0x34
};
static char tianma_otm9605a_5_qhd_video_on_cmd_24[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xa0, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_25[] = {
	0x08, 0x00, 0x29, 0xc0, 0xc5, 0x96, 0x16, 0x00,
	0x79, 0x33, 0x33, 0x34
};
static char tianma_otm9605a_5_qhd_video_on_cmd_26[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_27[] = {
	0x03, 0x00, 0x29, 0xc0, 0xd8, 0x5f, 0x5f, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_28[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xb0, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_29[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc5, 0x04, 0x28, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_30[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_31[] = {
	0x11, 0x00, 0x29, 0xc0, 0xe1, 0x01, 0x0d, 0x14,
	0x0e, 0x07, 0x13, 0x0b, 0x0a, 0x02, 0x06, 0x08,
	0x08, 0x0e, 0x12, 0x0f, 0x0b, 0xff, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_32[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_33[] = {
	0x11, 0x00, 0x29, 0xc0, 0xe2, 0x01, 0x0d, 0x14,
	0x0e, 0x07, 0x13, 0x0b, 0x0a, 0x02, 0x06, 0x08,
	0x08, 0x0e, 0x12, 0x0f, 0x0b, 0xff, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_34[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_35[] = {
	0x0b, 0x00, 0x29, 0xc0, 0xcb, 0x05, 0x00, 0x00,
	0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_36[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x90, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_37[] = {
	0x10, 0x00, 0x29, 0xc0, 0xcb, 0x55, 0x55, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00
};
static char tianma_otm9605a_5_qhd_video_on_cmd_38[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xa0, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_39[] = {
	0x10, 0x00, 0x29, 0xc0, 0xcb, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00
};
static char tianma_otm9605a_5_qhd_video_on_cmd_40[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xb0, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_41[] = {
	0x0b, 0x00, 0x29, 0xc0, 0xcb, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_42[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xc0, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_43[] = {
	0x10, 0x00, 0x29, 0xc0, 0xcb, 0x55, 0x55, 0x00,
	0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00,
	0x04, 0x04, 0x04, 0x00
};
static char tianma_otm9605a_5_qhd_video_on_cmd_44[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xd0, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_45[] = {
	0x10, 0x00, 0x29, 0xc0, 0xcb, 0x04, 0x00, 0x00,
	0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x00, 0x04,
	0x00, 0x04, 0x00, 0x04
};
static char tianma_otm9605a_5_qhd_video_on_cmd_46[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xe0, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_47[] = {
	0x0b, 0x00, 0x29, 0xc0, 0xcb, 0x00, 0x04, 0x04,
	0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_48[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xf0, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_49[] = {
	0x0b, 0x00, 0x29, 0xc0, 0xcb, 0x0f, 0x00, 0xcc,
	0x00, 0x00, 0x0f, 0x00, 0xcc, 0xc3, 0x00, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_50[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_51[] = {
	0x0b, 0x00, 0x29, 0xc0, 0xcc, 0x25, 0x26, 0x00,
	0x00, 0x00, 0x0c, 0x00, 0x0a, 0x00, 0x10, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_52[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x90, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_53[] = {
	0x10, 0x00, 0x29, 0xc0, 0xcc, 0x00, 0x0e, 0x02,
	0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x25,
	0x26, 0x00, 0x00, 0x00
};
static char tianma_otm9605a_5_qhd_video_on_cmd_54[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xa0, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_55[] = {
	0x10, 0x00, 0x29, 0xc0, 0xcc, 0x0b, 0x00, 0x09,
	0x00, 0x0f, 0x00, 0x0d, 0x01, 0x03, 0x00, 0x05,
	0x00, 0x00, 0x00, 0x00
};
static char tianma_otm9605a_5_qhd_video_on_cmd_56[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xb0, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_57[] = {
	0x0b, 0x00, 0x29, 0xc0, 0xcc, 0x26, 0x25, 0x00,
	0x00, 0x00, 0x0d, 0x00, 0x0f, 0x00, 0x09, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_58[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xc0, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_59[] = {
	0x10, 0x00, 0x29, 0xc0, 0xcc, 0x00, 0x0b, 0x03,
	0x01, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x26,
	0x25, 0x00, 0x00, 0x00
};
static char tianma_otm9605a_5_qhd_video_on_cmd_60[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xd0, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_61[] = {
	0x10, 0x00, 0x29, 0xc0, 0xcc, 0x0e, 0x00, 0x10,
	0x00, 0x0a, 0x00, 0x0c, 0x04, 0x02, 0x00, 0x06,
	0x00, 0x00, 0x00, 0x00
};
static char tianma_otm9605a_5_qhd_video_on_cmd_62[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_63[] = {
	0x0d, 0x00, 0x29, 0xc0, 0xce, 0x8b, 0x03, 0x27,
	0x8a, 0x03, 0x28, 0x89, 0x03, 0x27, 0x88, 0x03,
	0x28, 0xff, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_64[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x90, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_65[] = {
	0x0f, 0x00, 0x29, 0xc0, 0xce, 0x39, 0x0f, 0x27,
	0x39, 0x0e, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_66[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xa0, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_67[] = {
	0x0f, 0x00, 0x29, 0xc0, 0xce, 0x38, 0x07, 0x03,
	0xc0, 0x00, 0x28, 0x00, 0x38, 0x06, 0x03, 0xc1,
	0x00, 0x28, 0x00, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_68[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xb0, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_69[] = {
	0x0f, 0x00, 0x29, 0xc0, 0xce, 0x38, 0x05, 0x03,
	0xc2, 0x00, 0x28, 0x00, 0x38, 0x04, 0x03, 0xc3,
	0x00, 0x28, 0x00, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_70[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xc0, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_71[] = {
	0x0f, 0x00, 0x29, 0xc0, 0xce, 0x38, 0x03, 0x03,
	0xc4, 0x00, 0x28, 0x00, 0x38, 0x02, 0x03, 0xc5,
	0x00, 0x28, 0x00, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_72[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xd0, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_73[] = {
	0x0f, 0x00, 0x29, 0xc0, 0xce, 0x38, 0x01, 0x03,
	0xc6, 0x00, 0x28, 0x00, 0x38, 0x00, 0x03, 0xc7,
	0x00, 0x28, 0x00, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_74[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_75[] = {
	0x0f, 0x00, 0x29, 0xc0, 0xcf, 0xf0, 0x00, 0x00,
	0x10, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x10,
	0x00, 0x00, 0x00, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_76[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x90, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_77[] = {
	0x0f, 0x00, 0x29, 0xc0, 0xcf, 0xf0, 0x00, 0x00,
	0x10, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x10,
	0x00, 0x00, 0x00, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_78[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xa0, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_79[] = {
	0x0f, 0x00, 0x29, 0xc0, 0xcf, 0xf0, 0x00, 0x00,
	0x10, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x10,
	0x00, 0x00, 0x00, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_80[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xb0, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_81[] = {
	0x0f, 0x00, 0x29, 0xc0, 0xcf, 0xf0, 0x00, 0x00,
	0x10, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x10,
	0x00, 0x00, 0x00, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_82[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xc0, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_83[] = {
	0x0b, 0x00, 0x29, 0xc0, 0xcf, 0x01, 0x01, 0x20,
	0x20, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_84[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_85[] = {
	0x04, 0x00, 0x29, 0xc0, 0xff, 0xff, 0xff, 0xff
};
static char tianma_otm9605a_5_qhd_video_on_cmd_86[] = {
	0x51, 0x00, 0x15, 0x80
};
static char tianma_otm9605a_5_qhd_video_on_cmd_87[] = {
	0x53, 0x24, 0x15, 0x80
};
static char tianma_otm9605a_5_qhd_video_on_cmd_88[] = {
	0x55, 0x01, 0x15, 0x80
};
static char tianma_otm9605a_5_qhd_video_on_cmd_89[] = {
	0x11, 0x00, 0x05, 0x80
};
static char tianma_otm9605a_5_qhd_video_on_cmd_90[] = {
	0x29, 0x00, 0x05, 0x80
};
static char tianma_otm9605a_5_qhd_video_on_cmd_91[] = {
	//0x51, 0x00, 0x15, 0x80
	0x51, 0x30, 0x15, 0x80
};

static struct mipi_dsi_cmd tianma_otm9605a_5_qhd_video_on_command[] = {
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_0), tianma_otm9605a_5_qhd_video_on_cmd_0, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_1), tianma_otm9605a_5_qhd_video_on_cmd_1, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_2), tianma_otm9605a_5_qhd_video_on_cmd_2, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_3), tianma_otm9605a_5_qhd_video_on_cmd_3, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_4), tianma_otm9605a_5_qhd_video_on_cmd_4, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_5), tianma_otm9605a_5_qhd_video_on_cmd_5, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_6), tianma_otm9605a_5_qhd_video_on_cmd_6, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_7), tianma_otm9605a_5_qhd_video_on_cmd_7, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_8), tianma_otm9605a_5_qhd_video_on_cmd_8, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_9), tianma_otm9605a_5_qhd_video_on_cmd_9, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_10), tianma_otm9605a_5_qhd_video_on_cmd_10, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_11), tianma_otm9605a_5_qhd_video_on_cmd_11, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_12), tianma_otm9605a_5_qhd_video_on_cmd_12, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_13), tianma_otm9605a_5_qhd_video_on_cmd_13, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_14), tianma_otm9605a_5_qhd_video_on_cmd_14, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_15), tianma_otm9605a_5_qhd_video_on_cmd_15, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_16), tianma_otm9605a_5_qhd_video_on_cmd_16, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_17), tianma_otm9605a_5_qhd_video_on_cmd_17, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_18), tianma_otm9605a_5_qhd_video_on_cmd_18, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_19), tianma_otm9605a_5_qhd_video_on_cmd_19, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_20), tianma_otm9605a_5_qhd_video_on_cmd_20, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_21), tianma_otm9605a_5_qhd_video_on_cmd_21, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_22), tianma_otm9605a_5_qhd_video_on_cmd_22, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_23), tianma_otm9605a_5_qhd_video_on_cmd_23, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_24), tianma_otm9605a_5_qhd_video_on_cmd_24, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_25), tianma_otm9605a_5_qhd_video_on_cmd_25, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_26), tianma_otm9605a_5_qhd_video_on_cmd_26, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_27), tianma_otm9605a_5_qhd_video_on_cmd_27, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_28), tianma_otm9605a_5_qhd_video_on_cmd_28, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_29), tianma_otm9605a_5_qhd_video_on_cmd_29, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_30), tianma_otm9605a_5_qhd_video_on_cmd_30, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_31), tianma_otm9605a_5_qhd_video_on_cmd_31, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_32), tianma_otm9605a_5_qhd_video_on_cmd_32, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_33), tianma_otm9605a_5_qhd_video_on_cmd_33, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_34), tianma_otm9605a_5_qhd_video_on_cmd_34, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_35), tianma_otm9605a_5_qhd_video_on_cmd_35, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_36), tianma_otm9605a_5_qhd_video_on_cmd_36, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_37), tianma_otm9605a_5_qhd_video_on_cmd_37, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_38), tianma_otm9605a_5_qhd_video_on_cmd_38, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_39), tianma_otm9605a_5_qhd_video_on_cmd_39, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_40), tianma_otm9605a_5_qhd_video_on_cmd_40, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_41), tianma_otm9605a_5_qhd_video_on_cmd_41, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_42), tianma_otm9605a_5_qhd_video_on_cmd_42, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_43), tianma_otm9605a_5_qhd_video_on_cmd_43, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_44), tianma_otm9605a_5_qhd_video_on_cmd_44, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_45), tianma_otm9605a_5_qhd_video_on_cmd_45, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_46), tianma_otm9605a_5_qhd_video_on_cmd_46, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_47), tianma_otm9605a_5_qhd_video_on_cmd_47, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_48), tianma_otm9605a_5_qhd_video_on_cmd_48, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_49), tianma_otm9605a_5_qhd_video_on_cmd_49, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_50), tianma_otm9605a_5_qhd_video_on_cmd_50, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_51), tianma_otm9605a_5_qhd_video_on_cmd_51, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_52), tianma_otm9605a_5_qhd_video_on_cmd_52, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_53), tianma_otm9605a_5_qhd_video_on_cmd_53, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_54), tianma_otm9605a_5_qhd_video_on_cmd_54, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_55), tianma_otm9605a_5_qhd_video_on_cmd_55, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_56), tianma_otm9605a_5_qhd_video_on_cmd_56, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_57), tianma_otm9605a_5_qhd_video_on_cmd_57, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_58), tianma_otm9605a_5_qhd_video_on_cmd_58, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_59), tianma_otm9605a_5_qhd_video_on_cmd_59, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_60), tianma_otm9605a_5_qhd_video_on_cmd_60, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_61), tianma_otm9605a_5_qhd_video_on_cmd_61, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_62), tianma_otm9605a_5_qhd_video_on_cmd_62, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_63), tianma_otm9605a_5_qhd_video_on_cmd_63, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_64), tianma_otm9605a_5_qhd_video_on_cmd_64, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_65), tianma_otm9605a_5_qhd_video_on_cmd_65, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_66), tianma_otm9605a_5_qhd_video_on_cmd_66, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_67), tianma_otm9605a_5_qhd_video_on_cmd_67, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_68), tianma_otm9605a_5_qhd_video_on_cmd_68, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_69), tianma_otm9605a_5_qhd_video_on_cmd_69, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_70), tianma_otm9605a_5_qhd_video_on_cmd_70, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_71), tianma_otm9605a_5_qhd_video_on_cmd_71, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_72), tianma_otm9605a_5_qhd_video_on_cmd_72, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_73), tianma_otm9605a_5_qhd_video_on_cmd_73, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_74), tianma_otm9605a_5_qhd_video_on_cmd_74, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_75), tianma_otm9605a_5_qhd_video_on_cmd_75, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_76), tianma_otm9605a_5_qhd_video_on_cmd_76, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_77), tianma_otm9605a_5_qhd_video_on_cmd_77, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_78), tianma_otm9605a_5_qhd_video_on_cmd_78, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_79), tianma_otm9605a_5_qhd_video_on_cmd_79, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_80), tianma_otm9605a_5_qhd_video_on_cmd_80, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_81), tianma_otm9605a_5_qhd_video_on_cmd_81, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_82), tianma_otm9605a_5_qhd_video_on_cmd_82, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_83), tianma_otm9605a_5_qhd_video_on_cmd_83, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_84), tianma_otm9605a_5_qhd_video_on_cmd_84, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_85), tianma_otm9605a_5_qhd_video_on_cmd_85, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_86), tianma_otm9605a_5_qhd_video_on_cmd_86, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_87), tianma_otm9605a_5_qhd_video_on_cmd_87, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_88), tianma_otm9605a_5_qhd_video_on_cmd_88, 0 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_89), tianma_otm9605a_5_qhd_video_on_cmd_89, 120 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_90), tianma_otm9605a_5_qhd_video_on_cmd_90, 20 },
	{ sizeof(tianma_otm9605a_5_qhd_video_on_cmd_91), tianma_otm9605a_5_qhd_video_on_cmd_91, 0 },
};

static char tianma_otm9605a_5_qhd_video_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char tianma_otm9605a_5_qhd_video_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd tianma_otm9605a_5_qhd_video_off_command[] = {
	{ sizeof(tianma_otm9605a_5_qhd_video_off_cmd_0), tianma_otm9605a_5_qhd_video_off_cmd_0, 20 },
	{ sizeof(tianma_otm9605a_5_qhd_video_off_cmd_1), tianma_otm9605a_5_qhd_video_off_cmd_1, 120 },
};

static struct command_state tianma_otm9605a_5_qhd_video_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info tianma_otm9605a_5_qhd_video_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info tianma_otm9605a_5_qhd_video_video_panel = {
	.hsync_pulse = 1,
	.hfp_power_mode = 0,
	.hbp_power_mode = 0,
	.hsa_power_mode = 0,
	.bllp_eof_power_mode = 1,
	.bllp_power_mode = 1,
	.traffic_mode = 2,
	/* This is bllp_eof_power_mode and bllp_power_mode combined */
	.bllp_eof_power = 1 << 3 | 1 << 0,
};

static struct lane_configuration tianma_otm9605a_5_qhd_video_lane_config = {
	.dsi_lanes = 2,
	.dsi_lanemap = 1,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 0,
	.lane3_state = 0,
	.force_clk_lane_hs = 0,
};

static const uint32_t tianma_otm9605a_5_qhd_video_timings[] = {
	0x96, 0x22, 0x17, 0x00, 0x4a, 0x54, 0x1b, 0x26, 0x27, 0x03, 0x04, 0x00
};

static struct panel_timing tianma_otm9605a_5_qhd_video_timing_info = {
	.tclk_post = 0x04,
	.tclk_pre = 0x1b,
};

static struct panel_reset_sequence tianma_otm9605a_5_qhd_video_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 1, 20, 120 },
	.pin_direction = 2,
};

static struct backlight tianma_otm9605a_5_qhd_video_backlight = {
	.bl_interface_type = BL_DCS,
	.bl_min_level = 1,
	.bl_max_level = 255,
};

static inline void panel_tianma_otm9605a_5_qhd_video_select(struct panel_struct *panel,
							    struct msm_panel_info *pinfo,
							    struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &tianma_otm9605a_5_qhd_video_panel_data;
	panel->panelres = &tianma_otm9605a_5_qhd_video_panel_res;
	panel->color = &tianma_otm9605a_5_qhd_video_color;
	panel->videopanel = &tianma_otm9605a_5_qhd_video_video_panel;
	panel->commandpanel = &tianma_otm9605a_5_qhd_video_command_panel;
	panel->state = &tianma_otm9605a_5_qhd_video_state;
	panel->laneconfig = &tianma_otm9605a_5_qhd_video_lane_config;
	panel->paneltiminginfo = &tianma_otm9605a_5_qhd_video_timing_info;
	panel->panelresetseq = &tianma_otm9605a_5_qhd_video_reset_seq;
	panel->backlightinfo = &tianma_otm9605a_5_qhd_video_backlight;
	pinfo->mipi.panel_on_cmds = tianma_otm9605a_5_qhd_video_on_command;
	pinfo->mipi.panel_off_cmds = tianma_otm9605a_5_qhd_video_off_command;
	pinfo->mipi.num_of_panel_on_cmds = ARRAY_SIZE(tianma_otm9605a_5_qhd_video_on_command);
	pinfo->mipi.num_of_panel_off_cmds = ARRAY_SIZE(tianma_otm9605a_5_qhd_video_off_command);
	memcpy(phy_db->timing, tianma_otm9605a_5_qhd_video_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_TIANMA_OTM9605A_5_QHD_VIDEO_H_ */
