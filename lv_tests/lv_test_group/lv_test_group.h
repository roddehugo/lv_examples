/**
 * @file lv_test_group.h
 *
 */

#ifndef LV_TEST_GROUP_H
#define LV_TEST_GROUP_H

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

#if LV_USE_GROUP && LV_USE_TESTS

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
 * Create base groups to test their functionalities
 */
lv_group_t *lv_test_group_1(void);

/**********************
 *      MACROS
 **********************/

#endif /* LV_USE_GROUP && LV_USE_TESTS */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_TEST_BAR_H*/
