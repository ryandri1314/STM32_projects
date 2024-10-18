/*
 * my_timer.h
 *
 *  Created on: Oct 10, 2024
 *      Author: mary_uri
 */

#ifndef INC_MY_TIMER_H_
#define INC_MY_TIMER_H_

extern int timer_flag;

void setTimerOn(int duration);
void setTimerOff(int duration);
void timerRun();

#endif /* INC_MY_TIMER_H_ */
