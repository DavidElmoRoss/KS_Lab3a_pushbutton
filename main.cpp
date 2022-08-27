/*
Title:      Program to toggle RED LED ON/OFF using RIGHT Pushbutton
Author:     Dave Ross
Date:       Aug 27th, 2022
Description:    This program will cause the RED Led to TURN ON
                when the right pb is pressed and TURN OFF when
                the right Pb is released.
*/

#include "mbed.h"

// Hardware Definitions
DigitalOut RED(LED1);           // Label Red is associate with RED LED Pin
DigitalIn right_pb(SW2);        // Label right+pb is associated with the Right PB pin

#include "mbed.h"               // include the mbed library

// main() runs in its own thread in the OS
int main()
{
    RED=1;                              // turn OFF RED led
    for(;;)                             // endless loop
    {
        if(right_pb==0)                 // If left pb is pressed
        {
            RED=0;                      // Turn ON RED LED
        }
        else
        {
            RED=1;                      // else turn OFF RED led
        }
    }
}

