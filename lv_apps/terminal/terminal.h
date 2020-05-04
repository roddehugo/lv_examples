/**
 * @file terminal.h
 *
 */

#ifndef TERMINAL_H
#define TERMINAL_H

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

#if LV_USE_DEMO

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
 * Open a terminal
 * @return pointer to the terminal window
 */
lv_obj_t * terminal_create(void);

/**
 * Add data to the terminal
 * @param txt_in character sting to add to the terminal
 */
void terminal_add(const char * txt_in);

/**********************
 *      MACROS
 **********************/

#endif /*LV_USE_TERMINAL*/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* LV_TERMINAL_H */
