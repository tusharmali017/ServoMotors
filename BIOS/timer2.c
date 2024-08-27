#include "timer2.h"

/**
 * This timer is used for delayms function.
 * This timer is set for PR2 to match at every 1ms
 */
void initTimer2()
{
    T2CON = 0;
    T2CONbits.TCKPS0 = 1; // 1:8 prescalar 
    T2CONbits.TCKPS1 = 0;
    TMR2 = 0;
    PR2 = 9999; /* Same value as OC1R */
}
