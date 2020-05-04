/**
 * @file lv_test_imgbtn.h
 *
 */

#ifndef LV_TEST_IMGBTN_H
#define LV_TEST_IMGBTN_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "../../../lv_examples.h"

#ifndef LV_EX_NO_CONF
#ifdef LV_CONF_INCLUDE_SIMPLE
#include "lv_ex_conf.h"
#else
#include "../../../../lv_ex_conf.h"
#endif
#endif

#if LV_USE_IMGBTN && LV_USE_TESTS

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
 * Create imgbtns to test their functionalities
 */
void lv_test_imgbtn_1(void);

/**********************
 *      MACROS
 **********************/

#endif /*LV_USE_IMGBTN && LV_USE_TESTS*/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_TEST_BAR_H*/
