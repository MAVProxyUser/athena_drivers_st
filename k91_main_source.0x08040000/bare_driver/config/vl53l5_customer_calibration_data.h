
/*
* Copyright (c) 2020, STMicroelectronics - All Rights Reserved
*
* This file is part of the VL53L5 Bare Driver and is dual licensed,
* either 'STMicroelectronics Proprietary license'
* or 'BSD 3-clause "New" or "Revised" License' , at your option.
*
********************************************************************************
*
* 'STMicroelectronics Proprietary license'
*
********************************************************************************
*
* License terms: STMicroelectronics Proprietary in accordance with licensing
* terms at www.st.com/sla0081
*
* STMicroelectronics confidential
* Reproduction and Communication of this document is strictly prohibited unless
* specifically authorized in writing by STMicroelectronics.
*
*
********************************************************************************
*
* Alternatively, the VL53L5 Bare Driver may be distributed under the terms of
* 'BSD 3-clause "New" or "Revised" License', in which case the following
* provisions apply instead of the ones mentioned above :
*
********************************************************************************
*
* License terms: BSD 3-clause "New" or "Revised" License.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* 1. Redistributions of source code must retain the above copyright notice, this
* list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright notice,
* this list of conditions and the following disclaimer in the documentation
* and/or other materials provided with the distribution.
*
* 3. Neither the name of the copyright holder nor the names of its contributors
* may be used to endorse or promote products derived from this software
* without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
* FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*
********************************************************************************
*
*/

/*
 * @file  : vl53l5_customer_calibration_data.h
 * @date  : 20:36:34 13/09/2020
 * @note  : MAP_VERSION 10.5, CONFIG_VERSION 11.8, CUSTOMER_VERSION 0.1
 * @brief : 
 */

#ifndef _VL53L5_CUSTOMER_CALIBRATION_DATA_H_
#define _VL53L5_CUSTOMER_CALIBRATION_DATA_H_

#ifdef __cplusplus
extern "C" {
#endif

#define VL53L5_CAL__GENERIC_XTALK_GRID_SZ 604
#define VL53L5_CAL__GENERIC_XTALK_GRID_DATA { \
	0x40, 0x00, 0x00, 0x54, \
	0x0A, 0x00, 0x05, 0x00, \
	0xC0, 0x00, 0xFC, 0xA7, \
	0xB0, 0x04, 0xD0, 0x00, \
	0x25, 0x08, 0x08, 0x0B, \
	0x03, 0x08, 0x08, 0x04, \
	0x40, 0x01, 0x08, 0xA8, \
	0x23, 0x69, 0x00, 0x00, \
	0x4F, 0x92, 0x00, 0x00, \
	0xD1, 0x9F, 0x00, 0x00, \
	0x01, 0x00, 0xF0, 0x00, \
	0x10, 0x00, 0x00, 0x00, \
	0x40, 0x00, 0x1C, 0xA8, \
	0x23, 0x24, 0x25, 0x25, \
	0x04, 0x04, 0x20, 0xA8, \
	0x7E, 0xBB, 0x00, 0x00, \
	0xC6, 0x93, 0x00, 0x00, \
	0x45, 0x83, 0x00, 0x00, \
	0x7B, 0x78, 0x00, 0x00, \
	0x52, 0x64, 0x00, 0x00, \
	0xBB, 0x5A, 0x00, 0x00, \
	0x78, 0x51, 0x00, 0x00, \
	0xAA, 0x57, 0x00, 0x00, \
	0xDE, 0xD8, 0x00, 0x00, \
	0xED, 0xB1, 0x00, 0x00, \
	0x7B, 0x94, 0x00, 0x00, \
	0x92, 0x7C, 0x00, 0x00, \
	0x5C, 0x6D, 0x00, 0x00, \
	0x52, 0x62, 0x00, 0x00, \
	0x0B, 0x64, 0x00, 0x00, \
	0x91, 0x57, 0x00, 0x00, \
	0xD7, 0x2A, 0x01, 0x00, \
	0xCA, 0xBF, 0x00, 0x00, \
	0xC2, 0x99, 0x00, 0x00, \
	0x6F, 0x6C, 0x00, 0x00, \
	0xBD, 0x70, 0x00, 0x00, \
	0xEB, 0x56, 0x00, 0x00, \
	0x88, 0x61, 0x00, 0x00, \
	0xE8, 0x53, 0x00, 0x00, \
	0xE3, 0x36, 0x01, 0x00, \
	0x00, 0xC4, 0x00, 0x00, \
	0x88, 0x7D, 0x00, 0x00, \
	0x24, 0x63, 0x00, 0x00, \
	0x8D, 0x65, 0x00, 0x00, \
	0x20, 0x58, 0x00, 0x00, \
	0xD8, 0x53, 0x00, 0x00, \
	0x8E, 0x48, 0x00, 0x00, \
	0xB7, 0x0F, 0x01, 0x00, \
	0xE7, 0xB6, 0x00, 0x00, \
	0x9D, 0x7C, 0x00, 0x00, \
	0xC4, 0x65, 0x00, 0x00, \
	0xAE, 0x54, 0x00, 0x00, \
	0x78, 0x51, 0x00, 0x00, \
	0x60, 0x4C, 0x00, 0x00, \
	0x10, 0x45, 0x00, 0x00, \
	0x3C, 0xDB, 0x00, 0x00, \
	0x76, 0xA5, 0x00, 0x00, \
	0xE0, 0x6F, 0x00, 0x00, \
	0xE9, 0x5E, 0x00, 0x00, \
	0x67, 0x4F, 0x00, 0x00, \
	0xE8, 0x45, 0x00, 0x00, \
	0x0D, 0x42, 0x00, 0x00, \
	0x5F, 0x43, 0x00, 0x00, \
	0xCE, 0xC8, 0x00, 0x00, \
	0xBA, 0x96, 0x00, 0x00, \
	0xB6, 0x6A, 0x00, 0x00, \
	0x67, 0x4F, 0x00, 0x00, \
	0xE6, 0x3F, 0x00, 0x00, \
	0x20, 0x43, 0x00, 0x00, \
	0xD3, 0x3E, 0x00, 0x00, \
	0x2D, 0x41, 0x00, 0x00, \
	0x57, 0x9C, 0x00, 0x00, \
	0x0E, 0x72, 0x00, 0x00, \
	0x59, 0x57, 0x00, 0x00, \
	0xDC, 0x47, 0x00, 0x00, \
	0xEA, 0x38, 0x00, 0x00, \
	0x14, 0x37, 0x00, 0x00, \
	0x6F, 0x36, 0x00, 0x00, \
	0xBF, 0x3D, 0x00, 0x00, \
	0x02, 0x04, 0x20, 0xA9, \
	0x00, 0x0F, 0x00, 0x0E, \
	0x00, 0x0F, 0x00, 0x10, \
	0x00, 0x0E, 0x00, 0x0E, \
	0x00, 0x0F, 0x00, 0x0F, \
	0x00, 0x10, 0x00, 0x10, \
	0x00, 0x0F, 0x00, 0x10, \
	0x00, 0x0D, 0x00, 0x10, \
	0x00, 0x10, 0x00, 0x10, \
	0x00, 0x10, 0x00, 0x0E, \
	0x00, 0x0F, 0x00, 0x0E, \
	0x00, 0x10, 0x00, 0x0C, \
	0x00, 0x0F, 0x00, 0x10, \
	0x00, 0x10, 0x00, 0x10, \
	0x00, 0x0F, 0x00, 0x0F, \
	0x00, 0x10, 0x00, 0x0F, \
	0x00, 0x0E, 0x00, 0x0D, \
	0x00, 0x0F, 0x00, 0x0F, \
	0x00, 0x0F, 0x00, 0x10, \
	0x00, 0x0F, 0x00, 0x0F, \
	0x00, 0x10, 0x00, 0x10, \
	0x00, 0x10, 0x00, 0x0F, \
	0x00, 0x10, 0x00, 0x0E, \
	0x00, 0x0F, 0x00, 0x0D, \
	0x00, 0x10, 0x00, 0x0E, \
	0x00, 0x0F, 0x00, 0x0E, \
	0x00, 0x10, 0x00, 0x0F, \
	0x00, 0x10, 0x00, 0x10, \
	0x00, 0x10, 0x00, 0x0F, \
	0x00, 0x0C, 0x00, 0x0F, \
	0x00, 0x10, 0x00, 0x10, \
	0x00, 0x0F, 0x00, 0x10, \
	0x00, 0x10, 0x00, 0x10, \
	0x00, 0x01, 0xA0, 0xA9, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x01, 0xB0, 0xA9, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x40, 0x00, 0x74, 0xAE, \
	0x08, 0x08, 0x00, 0x25, \
	0x81, 0x00, 0x78, 0xAE, \
	0x03, 0x03, 0x0A, 0x00, \
	0x00, 0x00, 0x0D, 0x00, \
	0x81, 0x00, 0x80, 0xAE, \
	0x02, 0x02, 0x02, 0x00, \
	0x02, 0x00, 0x02, 0x00, \
	0x81, 0x00, 0x88, 0xAE, \
	0x08, 0x01, 0x01, 0x00, \
	0x01, 0x00, 0x01, 0x00, \
	0x81, 0x00, 0x90, 0xAE, \
	0x08, 0x08, 0x08, 0x00, \
	0x08, 0x00, 0x08, 0x00, \
	0x84, 0x00, 0x98, 0xAE, \
	0xE7, 0x1A, 0x02, 0x00, \
	0x44, 0x37, 0x02, 0x00, \
	0x50, 0x0D, 0x02, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x39, 0xBD, 0x02, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x8F, 0x5A, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x82, 0x00, 0xB8, 0xAE, \
	0x00, 0x04, 0x80, 0x00, \
	0x80, 0x00, 0x00, 0x00, \
	0x80, 0x00, 0x00, 0x00, \
	0x80, 0x00, 0x00, 0x00, \
	0x0F, 0x00, 0x00, 0x00}

#define VL53L5_CAL__GENERIC_XTALK_SHAPE_SZ 320
#define VL53L5_CAL__GENERIC_XTALK_SHAPE_DATA { \
	0x40, 0x00, 0x00, 0x54, \
	0x0A, 0x00, 0x05, 0x00, \
	0xC0, 0x00, 0x48, 0xAD, \
	0xF5, 0x72, 0x00, 0x00, \
	0xE0, 0x01, 0x90, 0x10, \
	0x24, 0x00, 0x00, 0x00, \
	0x02, 0x09, 0x54, 0xAD, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x01, 0x00, 0x10, 0x00, \
	0x15, 0x00, 0xAB, 0x00, \
	0x01, 0x0F, 0x6E, 0x1D, \
	0x15, 0x22, 0xDC, 0x22, \
	0x5F, 0x23, 0xB8, 0x23, \
	0xD2, 0x22, 0x9F, 0x15, \
	0xC4, 0x07, 0x02, 0x03, \
	0x67, 0x01, 0xBB, 0x00, \
	0x6D, 0x00, 0x49, 0x00, \
	0x34, 0x00, 0x2A, 0x00, \
	0x27, 0x00, 0x1A, 0x00, \
	0x0B, 0x00, 0x02, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x0F, 0x00, 0x00, 0x00}

#define VL53L5_CAL__DYN__XTALK_MONITOR_SZ 68
#define VL53L5_CAL__DYN__XTALK_MONITOR_DATA { \
	0x40, 0x00, 0x00, 0x54, \
	0x0A, 0x00, 0x05, 0x00, \
	0x84, 0x00, 0xF8, 0xB2, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x82, 0x00, 0x18, 0xB3, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x00, 0x00, 0x00, 0x00, \
	0x0F, 0x00, 0x00, 0x00}

#ifdef __cplusplus
}
#endif
#endif                          /* _VL53L5_CUSTOMER_CALIBRATION_DATA_H_ */
