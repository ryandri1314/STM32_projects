/*
 * my_timer.c
 *
 *  Created on: Oct 10, 2024
 *      Author: mary_uri
 */

#include "my_timer.h"

int counter_ON = 0;
int counter_OFF = 0;
int timer_flag = 0;

void setTimerOn(int duration) {
	counter_ON = duration;
}

void setTimerOff(int duration) {
	counter_OFF = duration;
}

void timerRun() {
	if (timer_flag == 0) {
		if (counter_OFF-- > 0) {
			if (counter_OFF <= 0) {
				timer_flag = 1;
			}
		}
	}
	else {
		if (counter_ON-- > 0) {
			if (counter_ON <= 0) {
				timer_flag = 0;
			}
		}
	}
}
