// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2026 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_BOE_NT35517_5_QHD_VIDEO_H_
#define _PANEL_BOE_NT35517_5_QHD_VIDEO_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config boe_nt35517_5_qhd_video_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_boe_nt35517_5_qhd_video",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 0,
	.panel_init_delay = 0,
};

static struct panel_resolution boe_nt35517_5_qhd_video_panel_res = {
	.panel_width = 540,
	.panel_height = 960,
	.hfront_porch = 69,
	.hback_porch = 60,
	.hpulse_width = 8,
	.hsync_skew = 0,
	.vfront_porch = 5,
	.vback_porch = 15,
	.vpulse_width = 7,
	/* Borders not supported yet */
};

static struct color_info boe_nt35517_5_qhd_video_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char boe_nt35517_5_qhd_video_on_cmd_0[] = {
	0x06, 0x00, 0x29, 0xc0, 0xf0, 0x55, 0xaa, 0x52,
	0x08, 0x00, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_1[] = {
	0x02, 0x00, 0x29, 0xc0, 0xbc, 0x00, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_2[] = {
	0x04, 0x00, 0x29, 0xc0, 0xcc, 0x03, 0x00, 0x00
};
static char boe_nt35517_5_qhd_video_on_cmd_3[] = {
	0x06, 0x00, 0x29, 0xc0, 0xb0, 0x00, 0x0c, 0x40,
	0x3c, 0x3c, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_4[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb1, 0xfc, 0x00, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_5[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb6, 0x08, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_6[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb7, 0x00, 0x00, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_7[] = {
	0x02, 0x00, 0x29, 0xc0, 0xba, 0x01, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_8[] = {
	0x06, 0x00, 0x29, 0xc0, 0xbd, 0x01, 0x41, 0x10,
	0x37, 0x01, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_9[] = {
	0x03, 0x00, 0x29, 0xc0, 0xe0, 0x01, 0x01, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_10[] = {
	0x0b, 0x00, 0x29, 0xc0, 0xe3, 0xf0, 0xf0, 0xeb,
	0xeb, 0xeb, 0xe5, 0xe5, 0xe5, 0xdc, 0xdc, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_11[] = {
	0x06, 0x00, 0x29, 0xc0, 0xf0, 0x55, 0xaa, 0x52,
	0x08, 0x01, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_12[] = {
	0x04, 0x00, 0x29, 0xc0, 0xb0, 0x0a, 0x0a, 0x0a
};
static char boe_nt35517_5_qhd_video_on_cmd_13[] = {
	0x04, 0x00, 0x29, 0xc0, 0xb6, 0x44, 0x44, 0x44
};
static char boe_nt35517_5_qhd_video_on_cmd_14[] = {
	0x04, 0x00, 0x29, 0xc0, 0xb1, 0x0a, 0x0a, 0x0a
};
static char boe_nt35517_5_qhd_video_on_cmd_15[] = {
	0x04, 0x00, 0x29, 0xc0, 0xb7, 0x24, 0x24, 0x24
};
static char boe_nt35517_5_qhd_video_on_cmd_16[] = {
	0x04, 0x00, 0x29, 0xc0, 0xb2, 0x03, 0x03, 0x03
};
static char boe_nt35517_5_qhd_video_on_cmd_17[] = {
	0x04, 0x00, 0x29, 0xc0, 0xb8, 0x33, 0x33, 0x33
};
static char boe_nt35517_5_qhd_video_on_cmd_18[] = {
	0x04, 0x00, 0x29, 0xc0, 0xb3, 0x0d, 0x0d, 0x0d
};
static char boe_nt35517_5_qhd_video_on_cmd_19[] = {
	0x04, 0x00, 0x29, 0xc0, 0xb9, 0x24, 0x24, 0x24
};
static char boe_nt35517_5_qhd_video_on_cmd_20[] = {
	0x04, 0x00, 0x29, 0xc0, 0xb4, 0x0a, 0x0a, 0x0a
};
static char boe_nt35517_5_qhd_video_on_cmd_21[] = {
	0x04, 0x00, 0x29, 0xc0, 0xba, 0x24, 0x24, 0x24
};
static char boe_nt35517_5_qhd_video_on_cmd_22[] = {
	0x04, 0x00, 0x29, 0xc0, 0xb5, 0x07, 0x07, 0x07
};
static char boe_nt35517_5_qhd_video_on_cmd_23[] = {
	0x04, 0x00, 0x29, 0xc0, 0xbc, 0x00, 0x78, 0x00
};
static char boe_nt35517_5_qhd_video_on_cmd_24[] = {
	0x04, 0x00, 0x29, 0xc0, 0xbd, 0x00, 0x78, 0x00
};
static char boe_nt35517_5_qhd_video_on_cmd_25[] = {
	0x11, 0x00, 0x29, 0xc0, 0xd1, 0x00, 0x43, 0x00,
	0x58, 0x00, 0x78, 0x00, 0x90, 0x00, 0xa2, 0x00,
	0xc3, 0x00, 0xde, 0x01, 0x0b, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_26[] = {
	0x11, 0x00, 0x29, 0xc0, 0xd2, 0x01, 0x2e, 0x01,
	0x65, 0x01, 0x91, 0x01, 0xd9, 0x02, 0x14, 0x02,
	0x15, 0x02, 0x48, 0x02, 0x7f, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_27[] = {
	0x11, 0x00, 0x29, 0xc0, 0xd3, 0x02, 0xa3, 0x02,
	0xd2, 0x02, 0xf2, 0x03, 0x1f, 0x03, 0x3e, 0x03,
	0x64, 0x03, 0x7b, 0x03, 0x99, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_28[] = {
	0x05, 0x00, 0x29, 0xc0, 0xd4, 0x03, 0xe1, 0x03,
	0xff, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_29[] = {
	0x11, 0x00, 0x29, 0xc0, 0xd5, 0x00, 0x43, 0x00,
	0x58, 0x00, 0x78, 0x00, 0x90, 0x00, 0xa2, 0x00,
	0xc3, 0x00, 0xde, 0x01, 0x0b, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_30[] = {
	0x11, 0x00, 0x29, 0xc0, 0xd6, 0x01, 0x2e, 0x01,
	0x65, 0x01, 0x91, 0x01, 0xd9, 0x02, 0x14, 0x02,
	0x15, 0x02, 0x48, 0x02, 0x7f, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_31[] = {
	0x11, 0x00, 0x29, 0xc0, 0xd7, 0x02, 0xa3, 0x02,
	0xd2, 0x02, 0xf2, 0x03, 0x1f, 0x03, 0x3e, 0x03,
	0x64, 0x03, 0x7b, 0x03, 0x99, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_32[] = {
	0x05, 0x00, 0x29, 0xc0, 0xd8, 0x03, 0xe1, 0x03,
	0xff, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_33[] = {
	0x11, 0x00, 0x29, 0xc0, 0xd9, 0x00, 0x43, 0x00,
	0x58, 0x00, 0x78, 0x00, 0x90, 0x00, 0xa2, 0x00,
	0xc3, 0x00, 0xde, 0x01, 0x0b, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_34[] = {
	0x11, 0x00, 0x29, 0xc0, 0xdd, 0x01, 0x2e, 0x01,
	0x65, 0x01, 0x91, 0x01, 0xd9, 0x02, 0x14, 0x02,
	0x15, 0x02, 0x48, 0x02, 0x7f, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_35[] = {
	0x11, 0x00, 0x29, 0xc0, 0xde, 0x02, 0xa3, 0x02,
	0xd2, 0x02, 0xf2, 0x03, 0x1f, 0x03, 0x3e, 0x03,
	0x64, 0x03, 0x7b, 0x03, 0x99, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_36[] = {
	0x05, 0x00, 0x29, 0xc0, 0xdf, 0x03, 0xe1, 0x03,
	0xff, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_37[] = {
	0x11, 0x00, 0x29, 0xc0, 0xe0, 0x00, 0x43, 0x00,
	0x58, 0x00, 0x78, 0x00, 0x90, 0x00, 0xa2, 0x00,
	0xc3, 0x00, 0xde, 0x01, 0x0b, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_38[] = {
	0x11, 0x00, 0x29, 0xc0, 0xe1, 0x01, 0x2e, 0x01,
	0x65, 0x01, 0x91, 0x01, 0xd9, 0x02, 0x14, 0x02,
	0x15, 0x02, 0x48, 0x02, 0x7f, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_39[] = {
	0x11, 0x00, 0x29, 0xc0, 0xe2, 0x02, 0xa3, 0x02,
	0xd2, 0x02, 0xf2, 0x03, 0x1f, 0x03, 0x3e, 0x03,
	0x64, 0x03, 0x7b, 0x03, 0x99, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_40[] = {
	0x05, 0x00, 0x29, 0xc0, 0xe3, 0x03, 0xe1, 0x03,
	0xff, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_41[] = {
	0x11, 0x00, 0x29, 0xc0, 0xe4, 0x00, 0x43, 0x00,
	0x58, 0x00, 0x78, 0x00, 0x90, 0x00, 0xa2, 0x00,
	0xc3, 0x00, 0xde, 0x01, 0x0b, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_42[] = {
	0x11, 0x00, 0x29, 0xc0, 0xe5, 0x01, 0x2e, 0x01,
	0x65, 0x01, 0x91, 0x01, 0xd9, 0x02, 0x14, 0x02,
	0x15, 0x02, 0x48, 0x02, 0x7f, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_43[] = {
	0x11, 0x00, 0x29, 0xc0, 0xe6, 0x02, 0xa3, 0x02,
	0xd2, 0x02, 0xf2, 0x03, 0x1f, 0x03, 0x3e, 0x03,
	0x64, 0x03, 0x7b, 0x03, 0x99, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_44[] = {
	0x05, 0x00, 0x29, 0xc0, 0xe7, 0x03, 0xe1, 0x03,
	0xff, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_45[] = {
	0x11, 0x00, 0x29, 0xc0, 0xe8, 0x00, 0x43, 0x00,
	0x58, 0x00, 0x78, 0x00, 0x90, 0x00, 0xa2, 0x00,
	0xc3, 0x00, 0xde, 0x01, 0x0b, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_46[] = {
	0x11, 0x00, 0x29, 0xc0, 0xe9, 0x01, 0x2e, 0x01,
	0x65, 0x01, 0x91, 0x01, 0xd9, 0x02, 0x14, 0x02,
	0x15, 0x02, 0x48, 0x02, 0x7f, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_47[] = {
	0x11, 0x00, 0x29, 0xc0, 0xea, 0x02, 0xa3, 0x02,
	0xd2, 0x02, 0xf2, 0x03, 0x1f, 0x03, 0x3e, 0x03,
	0x64, 0x03, 0x7b, 0x03, 0x99, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_48[] = {
	0x05, 0x00, 0x29, 0xc0, 0xeb, 0x03, 0xe1, 0x03,
	0xff, 0xff, 0xff, 0xff
};
static char boe_nt35517_5_qhd_video_on_cmd_49[] = {
	0x51, 0x00, 0x15, 0x80
};
static char boe_nt35517_5_qhd_video_on_cmd_50[] = {
	0x53, 0x24, 0x15, 0x80
};
static char boe_nt35517_5_qhd_video_on_cmd_51[] = {
	0x55, 0x02, 0x15, 0x80
};
static char boe_nt35517_5_qhd_video_on_cmd_52[] = {
	0x11, 0x00, 0x05, 0x80
};
static char boe_nt35517_5_qhd_video_on_cmd_53[] = {
	0x29, 0x00, 0x05, 0x80
};

static char boe_nt35517_5_qhd_video_on_cmd_54[] = {
	0x51, 0x50, 0x15, 0x80
};

static struct mipi_dsi_cmd boe_nt35517_5_qhd_video_on_command[] = {
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_0), boe_nt35517_5_qhd_video_on_cmd_0, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_1), boe_nt35517_5_qhd_video_on_cmd_1, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_2), boe_nt35517_5_qhd_video_on_cmd_2, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_3), boe_nt35517_5_qhd_video_on_cmd_3, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_4), boe_nt35517_5_qhd_video_on_cmd_4, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_5), boe_nt35517_5_qhd_video_on_cmd_5, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_6), boe_nt35517_5_qhd_video_on_cmd_6, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_7), boe_nt35517_5_qhd_video_on_cmd_7, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_8), boe_nt35517_5_qhd_video_on_cmd_8, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_9), boe_nt35517_5_qhd_video_on_cmd_9, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_10), boe_nt35517_5_qhd_video_on_cmd_10, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_11), boe_nt35517_5_qhd_video_on_cmd_11, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_12), boe_nt35517_5_qhd_video_on_cmd_12, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_13), boe_nt35517_5_qhd_video_on_cmd_13, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_14), boe_nt35517_5_qhd_video_on_cmd_14, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_15), boe_nt35517_5_qhd_video_on_cmd_15, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_16), boe_nt35517_5_qhd_video_on_cmd_16, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_17), boe_nt35517_5_qhd_video_on_cmd_17, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_18), boe_nt35517_5_qhd_video_on_cmd_18, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_19), boe_nt35517_5_qhd_video_on_cmd_19, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_20), boe_nt35517_5_qhd_video_on_cmd_20, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_21), boe_nt35517_5_qhd_video_on_cmd_21, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_22), boe_nt35517_5_qhd_video_on_cmd_22, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_23), boe_nt35517_5_qhd_video_on_cmd_23, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_24), boe_nt35517_5_qhd_video_on_cmd_24, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_25), boe_nt35517_5_qhd_video_on_cmd_25, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_26), boe_nt35517_5_qhd_video_on_cmd_26, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_27), boe_nt35517_5_qhd_video_on_cmd_27, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_28), boe_nt35517_5_qhd_video_on_cmd_28, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_29), boe_nt35517_5_qhd_video_on_cmd_29, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_30), boe_nt35517_5_qhd_video_on_cmd_30, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_31), boe_nt35517_5_qhd_video_on_cmd_31, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_32), boe_nt35517_5_qhd_video_on_cmd_32, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_33), boe_nt35517_5_qhd_video_on_cmd_33, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_34), boe_nt35517_5_qhd_video_on_cmd_34, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_35), boe_nt35517_5_qhd_video_on_cmd_35, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_36), boe_nt35517_5_qhd_video_on_cmd_36, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_37), boe_nt35517_5_qhd_video_on_cmd_37, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_38), boe_nt35517_5_qhd_video_on_cmd_38, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_39), boe_nt35517_5_qhd_video_on_cmd_39, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_40), boe_nt35517_5_qhd_video_on_cmd_40, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_41), boe_nt35517_5_qhd_video_on_cmd_41, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_42), boe_nt35517_5_qhd_video_on_cmd_42, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_43), boe_nt35517_5_qhd_video_on_cmd_43, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_44), boe_nt35517_5_qhd_video_on_cmd_44, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_45), boe_nt35517_5_qhd_video_on_cmd_45, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_46), boe_nt35517_5_qhd_video_on_cmd_46, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_47), boe_nt35517_5_qhd_video_on_cmd_47, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_48), boe_nt35517_5_qhd_video_on_cmd_48, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_49), boe_nt35517_5_qhd_video_on_cmd_49, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_50), boe_nt35517_5_qhd_video_on_cmd_50, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_51), boe_nt35517_5_qhd_video_on_cmd_51, 0 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_52), boe_nt35517_5_qhd_video_on_cmd_52, 120 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_53), boe_nt35517_5_qhd_video_on_cmd_53, 20 },
	{ sizeof(boe_nt35517_5_qhd_video_on_cmd_54), boe_nt35517_5_qhd_video_on_cmd_54, 0 },
};

static char boe_nt35517_5_qhd_video_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char boe_nt35517_5_qhd_video_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd boe_nt35517_5_qhd_video_off_command[] = {
	{ sizeof(boe_nt35517_5_qhd_video_off_cmd_0), boe_nt35517_5_qhd_video_off_cmd_0, 20 },
	{ sizeof(boe_nt35517_5_qhd_video_off_cmd_1), boe_nt35517_5_qhd_video_off_cmd_1, 120 },
};

static struct command_state boe_nt35517_5_qhd_video_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info boe_nt35517_5_qhd_video_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info boe_nt35517_5_qhd_video_video_panel = {
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

static struct lane_configuration boe_nt35517_5_qhd_video_lane_config = {
	.dsi_lanes = 2,
	.dsi_lanemap = 1,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 0,
	.lane3_state = 0,
	.force_clk_lane_hs = 0,
};

static const uint32_t boe_nt35517_5_qhd_video_timings[] = {
	0x85, 0x1e, 0x14, 0x00, 0x43, 0x4c, 0x18, 0x21, 0x22, 0x03, 0x04, 0x00
};

static struct panel_timing boe_nt35517_5_qhd_video_timing_info = {
	.tclk_post = 0x04,
	.tclk_pre = 0x1b,
};

static struct panel_reset_sequence boe_nt35517_5_qhd_video_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 1, 20, 120 },
	.pin_direction = 2,
};

static struct backlight boe_nt35517_5_qhd_video_backlight = {
	.bl_interface_type = BL_DCS,
	.bl_min_level = 1,
	.bl_max_level = 255,
};

static inline void panel_boe_nt35517_5_qhd_video_select(struct panel_struct *panel,
							struct msm_panel_info *pinfo,
							struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &boe_nt35517_5_qhd_video_panel_data;
	panel->panelres = &boe_nt35517_5_qhd_video_panel_res;
	panel->color = &boe_nt35517_5_qhd_video_color;
	panel->videopanel = &boe_nt35517_5_qhd_video_video_panel;
	panel->commandpanel = &boe_nt35517_5_qhd_video_command_panel;
	panel->state = &boe_nt35517_5_qhd_video_state;
	panel->laneconfig = &boe_nt35517_5_qhd_video_lane_config;
	panel->paneltiminginfo = &boe_nt35517_5_qhd_video_timing_info;
	panel->panelresetseq = &boe_nt35517_5_qhd_video_reset_seq;
	panel->backlightinfo = &boe_nt35517_5_qhd_video_backlight;
	pinfo->mipi.panel_on_cmds = boe_nt35517_5_qhd_video_on_command;
	pinfo->mipi.panel_off_cmds = boe_nt35517_5_qhd_video_off_command;
	pinfo->mipi.num_of_panel_on_cmds = ARRAY_SIZE(boe_nt35517_5_qhd_video_on_command);
	pinfo->mipi.num_of_panel_off_cmds = ARRAY_SIZE(boe_nt35517_5_qhd_video_off_command);
	memcpy(phy_db->timing, boe_nt35517_5_qhd_video_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_BOE_NT35517_5_QHD_VIDEO_H_ */
