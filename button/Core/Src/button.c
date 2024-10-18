/*
 * button.c
 *
 *  Created on: Oct 10, 2024
 *      Author: mary_uri
 */

#include "button.h"

int state0 = NORMAL_STATE;
int state1 = NORMAL_STATE;
int state2 = NORMAL_STATE;

int state3 = NORMAL_STATE;
int timerForKey =  200;
int flag_led = 0;


int isButtonPressed() {
	if (flag_led) {
		flag_led = 0;
		return 1;
	}
	return 0;
}

void getKeyInput() {
	state0 = state1;
	state1= state2;
	state2 = HAL_GPIO_ReadPin(B1_GPIO_Port, B1_Pin);
	if ((state0 == state1) && (state1 == state2)) {
		if (state3 != state2) {
			state3 = state2;
			if (state2 == PRESSED_STATE) {
				//TODO
				flag_led = 1;
				timerForKey = 200;
			}
		} else {
			timerForKey--;
			if (timerForKey == 0) {
				//TODO
				state3 = NORMAL_STATE;
			}
		}
	}
}
