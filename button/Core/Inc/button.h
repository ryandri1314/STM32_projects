/*
 * button.h
 *
 *  Created on: Oct 10, 2024
 *      Author: mary_uri
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_RESET
#define PRESSED_STATE GPIO_PIN_SET

int isButtonPressed();
void getKeyInput();

#endif /* INC_BUTTON_H_ */
