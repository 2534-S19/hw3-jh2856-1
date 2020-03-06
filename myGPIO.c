/*
 * GPIO.c
 *
 *  Created on:
 *      Author:
 */

// For the code you place here, you may use your code that uses register references.
// However, I encourage you to start using the Driver Library as soon as possible.

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include "myGPIO.h"

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

#define CLEAR 0x00


// TODO: Create a function to initialize the GPIO.
// Even though this assignment does not use all of the pushbuttons, you should write one function that does a complete GPIO init.
void initGPIO()
{
    /*// Launchpad S1

    // Launchpad S2

    // Boosterpack S1

    // Boosterpack S2

    // Launchpad LED1

    // Launchpad LED2 Red

    // Launchpad LED2 Green

    // Launchpad LED2 Blue

    // Boosterpack LED Red

    // Boosterpack LED Green

    // Boosterpack LED Blue*/
   // Turn off all LEDs at the start.

    // We do this at the beginning of all our programs for now.Later we learn more about it.
    WDT_A_hold(WDT_A_BASE);

    // initializing all LEDS to correct values
       P1DIR |= LED1;
     P2DIR |= LED2_R;
     P2DIR |= LED2_G;
     P2DIR |= LED2_B;
     P2DIR |= LED3_R;
     P2DIR |= LED3_G;
     P5DIR |= LED3_B;

     P2OUT = CLEAR;
     P5OUT = CLEAR;
    // Button initialization pt. 1
    P1DIR &= ~LEFT_BUTTON;
    P1DIR &= ~RIGHT_BUTTON;
    P5DIR &= ~SWITCH_1;
    P3DIR &= ~SWITCH_2;

    // Button initialization pt.2
    P1REN |= LEFT_BUTTON;
    P1REN |= RIGHT_BUTTON;
    P5REN |= SWITCH_1;
    P3REN |= SWITCH_2;

    // Button initialization pt.3
    P1OUT |= LEFT_BUTTON;
    P1OUT |= RIGHT_BUTTON;
    P5OUT |= SWITCH_1;
    P3OUT |= SWITCH_2;

    P1OUT = 0x00;

}

// TODO: Create a function to return the status of Launchpad Pushbutton S1
unsigned char checkStatus_LaunchpadS1()
{
    //return GPIO_getInputPinValue(GPIO_PORT_P1, GPIO_PIN1);
}

// TODO: Create a function to return the status of Launchpad Pushbutton S2
unsigned char checkStatus_LaunchpadS2()
{
    //return  GPIO_getInputPinValue(GPIO_PORT_P1, GPIO_PIN4);

}

// TODO: Create a function to return the status of Boosterpack Pushbutton S1
unsigned char checkStatus_BoosterpackS1()
{
    return  GPIO_getInputPinValue(GPIO_PORT_P5, GPIO_PIN1);
}

// TODO: Create a function to return the status of Boosterpack Pushbutton S2
unsigned char checkStatus_BoosterpackS2()
{

}

// TODO: Create a function to turn on Launchpad LED1.
void turnOn_LaunchpadLED1()
{

}

// TODO: Create a function to turn off Launchpad LED1.
void turnOff_LaunchpadLED1()
{

}

// TODO: Create a function to turn on the Red Launchpad LED2.
void turnOn_LaunchpadLED2Red()
{
    GPIO_setOutputHighOnPin(GPIO_PORT_P2, GPIO_PIN0);
}

// TODO: Create a function to turn off the Red Launchpad LED2.
void turnOff_LaunchpadLED2Red()
{
    GPIO_setOutputLowOnPin(GPIO_PORT_P2, GPIO_PIN0);
}

// TODO: Create a function to turn on the Green Launchpad LED2.
void turnOn_LaunchpadLED2Green()
{
    GPIO_setOutputHighOnPin(GPIO_PORT_P2, GPIO_PIN1);
}

// TODO: Create a function to turn off the Green Launchpad LED2.
void turnOff_LaunchpadLED2Green()
{
    GPIO_setOutputLowOnPin(GPIO_PORT_P2, GPIO_PIN1);
}

// TODO: Create a function to turn on the Blue Launchpad LED2.
void turnOn_LaunchpadLED2Blue()
{
    GPIO_setOutputHighOnPin(GPIO_PORT_P2, GPIO_PIN2);
}

// TODO: Create a function to turn off the Blue Launchpad LED2.
void turnOff_LaunchpadLED2Blue()
{
    GPIO_setOutputLowOnPin(GPIO_PORT_P2, GPIO_PIN2);
}

// TODO: Create a function to turn on the Red Boosterpack LED2.
void turnOn_BoosterpackLEDRed()
{
    GPIO_setOutputHighOnPin(GPIO_PORT_P2, GPIO_PIN6);
}

// TODO: Create a function to turn off the Red Boosterpack LED2.
void turnOff_BoosterpackLEDRed()
{
    GPIO_setOutputLowOnPin(GPIO_PORT_P2, GPIO_PIN6);
}

// TODO: Create a function to turn on the Green Boosterpack LED2.
void turnOn_BoosterpackLEDGreen()
{
    GPIO_setOutputHighOnPin(GPIO_PORT_P2, GPIO_PIN4);
}

// TODO: Create a function to turn off the Green Boosterpack LED2.
void turnOff_BoosterpackLEDGreen()
{
    GPIO_setOutputLowOnPin(GPIO_PORT_P2, GPIO_PIN4);
}

// TODO: Create a function to turn on the Blue Boosterpack LED2.
void turnOn_BoosterpackLEDBlue()
{
    GPIO_setOutputHighOnPin(GPIO_PORT_P5, GPIO_PIN6);
}

// TODO: Create a function to turn off the Green Boosterpack LED2.
void turnOff_BoosterpackLEDBlue()
{
    GPIO_setOutputLowOnPin(GPIO_PORT_P5, GPIO_PIN6);
}
