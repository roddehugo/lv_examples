/**
 * @file lv_tutorial_styles.h
 *
 */

#ifndef LV_TUTORIAL_STYLES_H
#define LV_TUTORIAL_STYLES_H

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
    void lv_tutorial_styles(void);

    /**********************
     *      MACROS
     **********************/

#endif /*LV_USE_TUTORIALS*/

#ifdef __cplusplus
} /* lv_tutorialtern "C" */
#endif

#endif /*LV_TUTORIAL_STYLES_H*/
