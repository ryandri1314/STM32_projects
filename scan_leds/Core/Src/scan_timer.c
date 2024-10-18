/*
 * scan_timer.c
 *
 *  Created on: Oct 11, 2024
 *      Author: mary_uri
 */

#include "scan_timer.h"

int counter = 50;
int status = 0;

void turnLEDs(int status) {
	switch (status) {
		case 0: {
			HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, RESET);
			HAL_GPIO_WritePin(LD5_GPIO_Port, LD5_Pin, SET);
			break;
		}
		case 1: {
			HAL_GPIO_WritePin(LD5_GPIO_Port, LD5_Pin, RESET);
			HAL_GPIO_WritePin(LD6_GPIO_Port, LD6_Pin, SET);
			break;
		}
		case 2: {
			HAL_GPIO_WritePin(LD6_GPIO_Port, LD6_Pin, RESET);
			HAL_GPIO_WritePin(LD4_GPIO_Port, LD4_Pin, SET);
			break;
		}
		case 3: {
			HAL_GPIO_WritePin(LD4_GPIO_Port, LD4_Pin, RESET);
			HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, SET);
			break;
		}
		default:
			break;
	}
}

void runTimer() {
	if (counter-- > 0) {
		if (counter <= 0) {
			counter = 50;
			status = status >= 3 ? 0 : status + 1;
			turnLEDs(status);
		}
	}
}
