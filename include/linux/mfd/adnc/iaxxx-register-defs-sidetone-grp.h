/*
 * iaxxx-register-defs-sidetone-grp.h
 *
 * Copyright 2017 Knowles Corporation
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; version 2 of the License.
 *
 *  This program is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  General Public License for more details.
 */

/*
 *
 * AUTO-GENERATED BY gen_reg_header. DO NOT EDIT.
 *
 * sw_register_defs_SIDETONE_GRP.h
 *
 * This file contains definitions for hardware register fields defined in
 * SIDETONE_GRP register yml file. They are automatically extracted by gen_reg.
 *
 */
#ifndef __IAXXX_REGISTER_DEFS_SIDETONE_GRP_H__
#define __IAXXX_REGISTER_DEFS_SIDETONE_GRP_H__

/*** The base address for this set of registers ***/
#define IAXXX_SIDETONE_GRP_REGS_ADDR 0x06000008

/*** SIDETONE_GRP_ST_CHN (0x06000008) ***/
/*
 * SideTone Channel Register.
 */
#define IAXXX_SIDETONE_GRP_ST_CHN_ADDR 0x06000008
#define IAXXX_SIDETONE_GRP_ST_CHN_MASK_VAL 0x000fffff
#define IAXXX_SIDETONE_GRP_ST_CHN_RMASK_VAL 0x000fffff
#define IAXXX_SIDETONE_GRP_ST_CHN_WMASK_VAL 0x000fffff
#define IAXXX_SIDETONE_GRP_ST_CHN_RESET_VAL 0x00000000

/*
 * System ID of the Tx channel.
 * The configured Rx channel will be mixed with this Tx channel.
 */
#define IAXXX_SIDETONE_GRP_ST_CHN_TX_CHN_MASK 0x0000ffff
#define IAXXX_SIDETONE_GRP_ST_CHN_TX_CHN_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_CHN_TX_CHN_POS 0
#define IAXXX_SIDETONE_GRP_ST_CHN_TX_CHN_SIZE 16

/*
 * System ID of the Rx channel.
 * This Rx channel will be mixed with the configured Tx channel.
 */
#define IAXXX_SIDETONE_GRP_ST_CHN_RX_CHN_MASK 0x000f0000
#define IAXXX_SIDETONE_GRP_ST_CHN_RX_CHN_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_CHN_RX_CHN_POS 16
#define IAXXX_SIDETONE_GRP_ST_CHN_RX_CHN_SIZE 4

/*** SIDETONE_GRP_ST_GAIN (0x0600000c) ***/
/*
 * SideTone Gain and Equalizer Control Register.
 */
#define IAXXX_SIDETONE_GRP_ST_GAIN_ADDR 0x0600000c
#define IAXXX_SIDETONE_GRP_ST_GAIN_MASK_VAL 0x0001ffff
#define IAXXX_SIDETONE_GRP_ST_GAIN_RMASK_VAL 0x0001ffff
#define IAXXX_SIDETONE_GRP_ST_GAIN_WMASK_VAL 0x0001ffff
#define IAXXX_SIDETONE_GRP_ST_GAIN_RESET_VAL 0x00000000

/*
 * Gain to be applied to Rx channel,
 * before mixing it to Tx channel.
 */
#define IAXXX_SIDETONE_GRP_ST_GAIN_CH_GAIN_MASK 0x0000ffff
#define IAXXX_SIDETONE_GRP_ST_GAIN_CH_GAIN_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_GAIN_CH_GAIN_POS 0
#define IAXXX_SIDETONE_GRP_ST_GAIN_CH_GAIN_SIZE 16

/*
 * Enable/Disable equalizer.
 */
#define IAXXX_SIDETONE_GRP_ST_GAIN_EQ_CTRL_MASK 0x00010000
#define IAXXX_SIDETONE_GRP_ST_GAIN_EQ_CTRL_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_GAIN_EQ_CTRL_POS 16
#define IAXXX_SIDETONE_GRP_ST_GAIN_EQ_CTRL_SIZE 1

/*** SIDETONE_GRP_ST_STATUS (0x06000010) ***/
/*
 * SideTone Status Register.
 */
#define IAXXX_SIDETONE_GRP_ST_STATUS_ADDR 0x06000010
#define IAXXX_SIDETONE_GRP_ST_STATUS_MASK_VAL 0x00000001
#define IAXXX_SIDETONE_GRP_ST_STATUS_RMASK_VAL 0x00000001
#define IAXXX_SIDETONE_GRP_ST_STATUS_WMASK_VAL 0x00000000
#define IAXXX_SIDETONE_GRP_ST_STATUS_RESET_VAL 0x00000000

/*
 */
#define IAXXX_SIDETONE_GRP_ST_STATUS_ST_STATUS_MASK 0x00000001
#define IAXXX_SIDETONE_GRP_ST_STATUS_ST_STATUS_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_STATUS_ST_STATUS_POS 0
#define IAXXX_SIDETONE_GRP_ST_STATUS_ST_STATUS_SIZE 1

/*** SIDETONE_GRP_ST_EQ_COEFF_0 (0x06000014) ***/
/*
 * SideTone Equalizer Coefficient Register 0.
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_0_ADDR 0x06000014
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_0_MASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_0_RMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_0_WMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_0_RESET_VAL 0x00000000

/*
 * Equalizer Coefficient
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_0_COEFF_MASK 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_0_COEFF_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_0_COEFF_POS 0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_0_COEFF_SIZE 32

/*** SIDETONE_GRP_ST_EQ_COEFF_1 (0x06000018) ***/
/*
 * SideTone Equalizer Coefficient Register 1.
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_1_ADDR 0x06000018
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_1_MASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_1_RMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_1_WMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_1_RESET_VAL 0x00000000

/*
 * Equalizer Coefficient
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_1_COEFF_MASK 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_1_COEFF_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_1_COEFF_POS 0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_1_COEFF_SIZE 32

/*** SIDETONE_GRP_ST_EQ_COEFF_2 (0x0600001c) ***/
/*
 * SideTone Equalizer Coefficient Register 2.
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_2_ADDR 0x0600001c
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_2_MASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_2_RMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_2_WMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_2_RESET_VAL 0x00000000

/*
 * Equalizer Coefficient
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_2_COEFF_MASK 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_2_COEFF_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_2_COEFF_POS 0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_2_COEFF_SIZE 32

/*** SIDETONE_GRP_ST_EQ_COEFF_3 (0x06000020) ***/
/*
 * SideTone Equalizer Coefficient Register 3.
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_3_ADDR 0x06000020
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_3_MASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_3_RMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_3_WMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_3_RESET_VAL 0x00000000

/*
 * Equalizer Coefficient
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_3_COEFF_MASK 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_3_COEFF_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_3_COEFF_POS 0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_3_COEFF_SIZE 32

/*** SIDETONE_GRP_ST_EQ_COEFF_4 (0x06000024) ***/
/*
 * SideTone Equalizer Coefficient Register 4.
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_4_ADDR 0x06000024
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_4_MASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_4_RMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_4_WMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_4_RESET_VAL 0x00000000

/*
 * Equalizer Coefficient
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_4_COEFF_MASK 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_4_COEFF_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_4_COEFF_POS 0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_4_COEFF_SIZE 32

/*** SIDETONE_GRP_ST_EQ_COEFF_5 (0x06000028) ***/
/*
 * SideTone Equalizer Coefficient Register 5.
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_5_ADDR 0x06000028
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_5_MASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_5_RMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_5_WMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_5_RESET_VAL 0x00000000

/*
 * Equalizer Coefficient
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_5_COEFF_MASK 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_5_COEFF_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_5_COEFF_POS 0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_5_COEFF_SIZE 32

/*** SIDETONE_GRP_ST_EQ_COEFF_6 (0x0600002c) ***/
/*
 * SideTone Equalizer Coefficient Register 6.
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_6_ADDR 0x0600002c
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_6_MASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_6_RMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_6_WMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_6_RESET_VAL 0x00000000

/*
 * Equalizer Coefficient
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_6_COEFF_MASK 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_6_COEFF_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_6_COEFF_POS 0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_6_COEFF_SIZE 32

/*** SIDETONE_GRP_ST_EQ_COEFF_7 (0x06000030) ***/
/*
 * SideTone Equalizer Coefficient Register 7.
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_7_ADDR 0x06000030
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_7_MASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_7_RMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_7_WMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_7_RESET_VAL 0x00000000

/*
 * Equalizer Coefficient
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_7_COEFF_MASK 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_7_COEFF_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_7_COEFF_POS 0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_7_COEFF_SIZE 32

/*** SIDETONE_GRP_ST_EQ_COEFF_8 (0x06000034) ***/
/*
 * SideTone Equalizer Coefficient Register 8
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_8_ADDR 0x06000034
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_8_MASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_8_RMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_8_WMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_8_RESET_VAL 0x00000000

/*
 * Equalizer Coefficient
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_8_COEFF_MASK 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_8_COEFF_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_8_COEFF_POS 0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_8_COEFF_SIZE 32

/*** SIDETONE_GRP_ST_EQ_COEFF_9 (0x06000038) ***/
/*
 * SideTone Equalizer Coefficient Register 9.
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_9_ADDR 0x06000038
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_9_MASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_9_RMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_9_WMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_9_RESET_VAL 0x00000000

/*
 * Equalizer Coefficient
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_9_COEFF_MASK 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_9_COEFF_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_9_COEFF_POS 0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_9_COEFF_SIZE 32

/*** SIDETONE_GRP_ST_EQ_COEFF_10 (0x0600003c) ***/
/*
 * SideTone Equalizer Coefficient Register 10.
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_10_ADDR 0x0600003c
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_10_MASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_10_RMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_10_WMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_10_RESET_VAL 0x00000000

/*
 * Equalizer Coefficient
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_10_COEFF_MASK 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_10_COEFF_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_10_COEFF_POS 0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_10_COEFF_SIZE 32

/*** SIDETONE_GRP_ST_EQ_COEFF_11 (0x06000040) ***/
/*
 * SideTone Equalizer Coefficient Register 11.
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_11_ADDR 0x06000040
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_11_MASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_11_RMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_11_WMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_11_RESET_VAL 0x00000000

/*
 * Equalizer Coefficient
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_11_COEFF_MASK 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_11_COEFF_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_11_COEFF_POS 0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_11_COEFF_SIZE 32

/*** SIDETONE_GRP_ST_EQ_COEFF_12 (0x06000044) ***/
/*
 * SideTone Equalizer Coefficient Register 12.
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_12_ADDR 0x06000044
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_12_MASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_12_RMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_12_WMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_12_RESET_VAL 0x00000000

/*
 * Equalizer Coefficient
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_12_COEFF_MASK 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_12_COEFF_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_12_COEFF_POS 0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_12_COEFF_SIZE 32

/*** SIDETONE_GRP_ST_EQ_COEFF_13 (0x06000048) ***/
/*
 * SideTone Equalizer Coefficient Register 13.
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_13_ADDR 0x06000048
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_13_MASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_13_RMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_13_WMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_13_RESET_VAL 0x00000000

/*
 * Equalizer Coefficient
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_13_COEFF_MASK 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_13_COEFF_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_13_COEFF_POS 0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_13_COEFF_SIZE 32

/*** SIDETONE_GRP_ST_EQ_COEFF_14 (0x0600004c) ***/
/*
 * SideTone Equalizer Coefficient Register 14.
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_14_ADDR 0x0600004c
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_14_MASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_14_RMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_14_WMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_14_RESET_VAL 0x00000000

/*
 * Equalizer Coefficient
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_14_COEFF_MASK 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_14_COEFF_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_14_COEFF_POS 0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_14_COEFF_SIZE 32

/*** SIDETONE_GRP_ST_EQ_COEFF_15 (0x06000050) ***/
/*
 * SideTone Equalizer Coefficient Register 15.
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_15_ADDR 0x06000050
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_15_MASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_15_RMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_15_WMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_15_RESET_VAL 0x00000000

/*
 * Equalizer Coefficient
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_15_COEFF_MASK 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_15_COEFF_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_15_COEFF_POS 0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_15_COEFF_SIZE 32

/*** SIDETONE_GRP_ST_EQ_COEFF_16 (0x06000054) ***/
/*
 * SideTone Equalizer Coefficient Register 16.
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_16_ADDR 0x06000054
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_16_MASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_16_RMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_16_WMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_16_RESET_VAL 0x00000000

/*
 * Equalizer Coefficient
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_16_COEFF_MASK 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_16_COEFF_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_16_COEFF_POS 0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_16_COEFF_SIZE 32

/*** SIDETONE_GRP_ST_EQ_COEFF_17 (0x06000058) ***/
/*
 * SideTone Equalizer Coefficient Register 17.
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_17_ADDR 0x06000058
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_17_MASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_17_RMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_17_WMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_17_RESET_VAL 0x00000000

/*
 * Equalizer Coefficient
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_17_COEFF_MASK 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_17_COEFF_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_17_COEFF_POS 0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_17_COEFF_SIZE 32

/*** SIDETONE_GRP_ST_EQ_COEFF_18 (0x0600005c) ***/
/*
 * SideTone Equalizer Coefficient Register 18.
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_18_ADDR 0x0600005c
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_18_MASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_18_RMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_18_WMASK_VAL 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_18_RESET_VAL 0x00000000

/*
 * Equalizer Coefficient
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_18_COEFF_MASK 0xffffffff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_18_COEFF_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_18_COEFF_POS 0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_18_COEFF_SIZE 32

/*** SIDETONE_GRP_ST_EQ_COEFF_19 (0x06000060) ***/
/*
 * SideTone Equalizer Coefficient Register 19.
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_19_ADDR 0x06000060
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_19_MASK_VAL 0x000000ff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_19_RMASK_VAL 0x000000ff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_19_WMASK_VAL 0x000000ff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_19_RESET_VAL 0x00000000

/*
 * SideTone status given by the table below
 * 0 - Idle (No sidetone is added in to the system).
 * 1 - Pending (SideTone has been added into the system,
 *     but not in signal path).
 * 2 - Running (SideTone is in signal path).
 */
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_19_COEFF_MASK 0x000000ff
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_19_COEFF_RESET_VAL 0x0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_19_COEFF_POS 0
#define IAXXX_SIDETONE_GRP_ST_EQ_COEFF_19_COEFF_SIZE 8

/* Number of registers in the module */
#define IAXXX_SIDETONE_GRP_REG_NUM 23

#endif /* __IAXXX_REGISTER_DEFS_SIDETONE_GRP_H__ */