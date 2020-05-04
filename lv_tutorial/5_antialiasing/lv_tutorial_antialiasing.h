/**
 * @file lv_tutorial_antialiasing.h
 *
 */

#ifndef LV_TUTORIAL_ANTIALIASING_H
#define LV_TUTORIAL_ANTIALIASING_H

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

#if LV_USE_TUTORIALS

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
 * Create object to see how they change from the anti aliasing
 * Modify LV_ANTIALIAS and LV_FONT_ANTIALIAS to see what is changing
 */
void lv_tutorial_antialiasing(void);

/**********************
 *      MACROS
 **********************/

#endif /*LV_USE_TUTORIALS*/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_TUTORIAL_ANTIALIASING_H*/
