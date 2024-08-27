#include "pwm.h"

void initPWM(void)
{
    OC1CON1 = 0; /* It is a good practice to clear off the control bits initially */
    OC1CON2 = 0;

    OC1CON1bits.OCTSEL = 0;
    OC1CON1bits.OCM = 0b101;
//    OC1CON1bits.TRIGMODE = 1;
    OC1CON2bits.SYNCSEL = 0b01100; /* TMR2 is the sync source */
}

