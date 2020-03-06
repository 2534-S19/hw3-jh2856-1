/*
 * homework3.h
 *
 *  Created on:
 *      Author:
 */



#ifndef HOMEWORK3_H_
#define HOMEWORK3_H_

// This function initializes the board by turning off the Watchdog Timer.
void initBoard();
// This function indexes a count value to an LED color on Launchpad LED2.
void changeLaunchpadLED2(unsigned int count);
// This function indexes a count value to an LED color on the Boosterpack LED.
void changeBoosterpackLED(unsigned int count);
// This function serves as a debounce state machine for Boosterpack button S1
bool fsmBoosterpackButtonS1(unsigned int buttonhistory);


// TODO: Define any constants that are local to homework.c using #define

#define LED1 BIT0
#define LED2_R BIT0
#define LED2_G BIT1
#define LED2_B BIT2
#define LED3_R BIT6
#define LED3_G BIT4
#define LED3_B BIT6

#define LEFT_BUTTON BIT1
#define RIGHT_BUTTON BIT4
#define SWITCH_1 BIT1
#define SWITCH_2 BIT5

#define LED2_COUNT 0x2DC6C0
#define LEDB_COUNT 0x55F0

#endif /* HOMEWORK3_H_ */
