/**
 * @file lv_tutorial_animation.h
 *
 */

#ifndef LV_TUTORIAL_ANIMATION_H
#define LV_TUTORIAL_ANIMATION_H

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

#if LV_USE_ANIMATION && LV_USE_TUTORIALS


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
 * Crate some objects an animate them
 */
void lv_tutorial_animations(void);

/**********************
 *      MACROS
 **********************/

#endif /*LV_USE_ANIMATION && LV_USE_TUTORIALS*/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_TUTORIAL_ANTMATION_H*/
