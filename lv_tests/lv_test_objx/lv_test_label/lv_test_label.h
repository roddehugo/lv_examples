/**
 * @file lv_test_label.h
 *
 */

#ifndef LV_TEST_LABEL_H
#define LV_TEST_LABEL_H

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

#if LV_USE_LABEL && LV_USE_TESTS

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
 * Create labels with dynamic, static and array texts
 */
void lv_test_label_1(void);

/**
 * Test label long modes
 */
void lv_test_label_2(void);

/**
 * Test text insert and cut
 */
void lv_test_label_3(void);

/**
 * Test mixed features
 */
void lv_test_label_4(void);
/**********************
 *      MACROS
 **********************/

#endif /*LV_USE_LABEL*/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_USE_LABEL && LV_USE_TESTS*/
