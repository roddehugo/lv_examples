/**
 * @file lv_tutorial_objects.h
 *
 */

#ifndef LV_TUTORIAL_OBJECTS_H
#define EX_OBJECTS_H

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
void lv_tutorial_objects(void);

/**********************
 *      MACROS
 **********************/

#endif /*LV_USE_TUTORIALS*/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_TUTORIAL_OBJECTS_H*/
