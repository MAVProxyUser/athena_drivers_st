/*
 * bu27030_reg.h
 *
 *  Created on: Nov 28, 2020
 *      Author: sangweilin@xiaomi.com
 */

#ifndef INC_BU27030_REG_H_
#define INC_BU27030_REG_H_

#include <stdint.h>
#include <stddef.h>
#include <math.h>

typedef int32_t(*stmdev_write_ptr) (void *, uint8_t, uint8_t *, uint16_t);
typedef int32_t(*stmdev_read_ptr) (void *, uint8_t, uint8_t *, uint16_t);

typedef struct {
        /** Component mandatory fields **/
  stmdev_write_ptr write_reg;
  stmdev_read_ptr read_reg;
        /** Customizable optional pointer **/
  void *handle;
} stmdev_ctx_t;

/*************** Definitions ******************/
/* GENERAL */
#define AGC_SUPPORT        (1)

/* I2C ADDRESS */
#define BU27030_I2C_COMUNICATE_ADD (0x70)

/* BU27030 REGSTER */
#define BU27030_REG_SYSTEM_CTL         (0x40)
#define BU27030_REG_MODE_CTL1          (0x41)
#define BU27030_REG_MODE_CTL2          (0x42)
#define BU27030_REG_MODE_CTL3          (0x43)
#define BU27030_REG_DATA0_0            (0x50)
#define BU27030_REG_DATA0_1            (0x51)
#define BU27030_REG_DATA1_0            (0x52)
#define BU27030_REG_DATA1_1            (0x53)
#define BU27030_REG_PART_ID            (0x92)
#define BU27030_PART_ID_VALUE          (0xE0)

#define BU27030_REG_SOFT_RST           (BU27030_REG_SYSTEM_CTL)
#define BU27030_REG_CONTROL            (BU27030_REG_MODE_CTL3)
#define BU27030_REG_TIMING             (BU27030_REG_MODE_CTL1)
#define BU27030_REG_GAIN               (BU27030_REG_MODE_CTL2)

/************ define parameter for register ************/
#define BU27030_ENABLE      (1)
#define BU27030_DISABLE     (0)

#define ALS_VALID_HIGH     (1 << 7)

/* Time(0x41) */
#define MEASURE_50MS       (1)
#define ALPHA_JUDGE        (10)
#define ALPHA_FACTOR       (100)

/* Gain (0x87) */
#define DATA0_GAIN_X1       (0x02 << 4)
#define DATA1_GAIN_X1       (0x02)

#define DATA0_GAIN_X32      (0x0a << 4)
#define DATA1_GAIN_X32      (0x0a)

#define DATA0_GAIN_X256     (0x0c << 4)
#define DATA1_GAIN_X256     (0x0c)

#define DATA0_DATA1_GAIN_X1      (DATA0_GAIN_X1   | DATA1_GAIN_X1)
#define DATA0_DATA1_GAIN_X32     (DATA0_GAIN_X32  | DATA1_GAIN_X32)
#define DATA0_DATA1_GAIN_X256    (DATA0_GAIN_X256 | DATA1_GAIN_X256)

#define DATA_TRANSFER_COFF (100 * 256)  //100ms, 256x

#define DATA0_GAIN_MASK (0xF0)
#define DATA1_GAIN_MASK (0x0F)

#define MEASURE_DEFAULT_TIME    (MEASURE_50MS)

#define BU27030_1X          (1)
#define BU27030_32X         (32)
#define BU27030_256X        (256)

#define BU27030_SATURATION_THRESH       (60000)
#define BU27030_INSUFFICIENCE_THRESH    (100)

/** Default values loaded in probe function */
#define BU27030_WHOAMI_VALUE              (BU27030_PART_ID_VALUE)  /** Who Am I default value */

/* POWER SUPPLY VOLTAGE RANGE */
#define BU27030_VDD_MIN_UV  (2000000)
#define BU27030_VDD_MAX_UV  (3300000)
#define BU27030_VIO_MIN_UV  (1750000)
#define BU27030_VIO_MAX_UV  (1950000)

#define ALS_SET_MIN_DELAY_TIME  (100)

/* structure to read data value from sensor */
typedef struct {
  unsigned int data0;
  unsigned int data1;
} READ_DATA_ARG;

typedef struct {
  unsigned char als_time;
  unsigned short gain0;
  unsigned short gain1;
  unsigned int als_data0;
  unsigned int als_data1;
} CALC_DATA;

#endif /* INC_BU27030_REG_H_ */
