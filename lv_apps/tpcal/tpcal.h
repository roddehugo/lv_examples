/**
 * @file tpcal.h
 *
 */

#ifndef TPCAL_H
#define TPCAL_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "../../lv_examples.h"

#ifndef LV_EX_NO_CONF
#ifdef LV_CONF_INCLUDE_SIMPLE
#include "lv_ex_conf.h"
#else
#include "../../../lv_ex_conf.h"
#endif
#endif

#if LV_USE_TPCAL

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Create a touch pad calibration screen
 */
void tpcal_create(void);

/**********************
 *      MACROS
 **********************/

#endif /*LV_USE_TPCAL*/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*TP_CAL_H*/
