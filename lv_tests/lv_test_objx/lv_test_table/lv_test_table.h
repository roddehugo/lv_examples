/**
 * @file lv_test_table.h
 *
 */

#ifndef LV_TEST_TABLE_H
#define LV_TEST_TABLE_H

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

#if LV_USE_TABLE && LV_USE_TESTS

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
 * Create tables to test their functionalities
 */
void lv_test_table_1(void);

/**
 * Create tables to test their functionalities
 */
void lv_test_table_2(void);

/**********************
 *      MACROS
 **********************/

#endif /*LV_USE_TABLE && LV_USE_TESTS*/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_TEST_TABLE_H*/
