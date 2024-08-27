#include "bios.h"


void initBIOS(void)
{
    initPinmap();
    initPWM();
    initTimer1();
    initTimer2();
    initUART1();
    initUART2();

}
