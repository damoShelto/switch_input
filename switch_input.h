
#ifndef     __SWITCH_INPUT_H
#define     __SWITCH_INPUT_H

//---------------------------------------

#include <Arduino.h>

#include <pin_defines.h>
#include <app_defines.h>


//--------- prototypes ------------------


extern void show_switch_pressed(void);


bool is_switch_pressed(void);


/**
 * @brief test if the switch is held for the 
 * 	required period
 * 
 * @param timeout in milliseconds
 * @return true 
 * @return false 
 */
bool is_long_press(uint16_t timeout);



//---------------------------------------

#endif