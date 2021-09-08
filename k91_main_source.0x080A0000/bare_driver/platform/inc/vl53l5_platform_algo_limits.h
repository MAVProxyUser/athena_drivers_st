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

#ifndef VL53L5_PLATFORM_ALGO_LIMITS_H
#define VL53L5_PLATFORM_ALGO_LIMITS_H

#include "vl53l5_types.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup PLATFORM_ALGO_LIMITS Platform Algo Limits
 * Platform algo limit definitions
 * @{
 */

/** uint32_t maximum value */
#define VL53L5_UINT32_MAX   ((uint32_t) 4294967295U)
/** uint32_t minimum value */
#define VL53L5_UINT32_MIN   ((uint32_t) 0U)
/** int32_t maximum value */
#define VL53L5_INT32_MAX    ((int32_t) 2147483647)
/** int32_t minimum value */
#define VL53L5_INT32_MIN    ((int32_t) -2147483648)
/** uint16_t maximum value */
#define VL53L5_UINT16_MAX   ((uint16_t) 65535U)
/** uint16_t minimum value */
#define VL53L5_UINT16_MIN   ((uint16_t) 0U)
/** int16_t maximum value */
#define VL53L5_INT16_MAX    ((int16_t) 32767)
/** int16_t minimum value */
#define VL53L5_INT16_MIN   ((int16_t) -32768)
/** uint8_t maximum value */
#define VL53L5_UINT8_MAX   ((uint8_t) 255U)
/** uint8_t minimum value */
#define VL53L5_UINT8_MIN   ((uint8_t) 0U)
/** int8_t maximum value */
#define VL53L5_INT8_MAX    ((int8_t) 127)
/** int8_t minimum value */
#define VL53L5_INT8_MIN    ((int8_t) -128)

/** }@ */

#ifdef __cplusplus
}
#endif
#endif                          /* VL53L5_PLATFORM_ALGO_LIMITS_H */
