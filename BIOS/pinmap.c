#include "pinmap.h"

static void setPeripheralMap(void);

void initPinmap(void)
{
    LATB = 0x0000;
    LATC = 0x0000;
    LATD = 0x0000;
    LATE = 0x0000;
    LATF = 0x0000;
    LATG = 0x0000;

    TRISB = 0xFFFF;
    TRISC = 0xFFFF;
    TRISD = 0xFFFF;
    TRISE = 0xFFFF;
    TRISF = 0xFFFF;
    TRISG = 0xFFFF;

    ANSELB = 0x0000;
    ANSELC = 0x0000;
    ANSELD = 0x0000;
    ANSELE = 0x0000;
    ANSELF = 0x0000;
    ANSELG = 0x0000;

    TRISDbits.TRISD1 = 0; //RD1 pin as a output
    LATDbits.LATD1 = 0;

    TRISDbits.TRISD13 = 0; //RD13 pin as a output


    _TRISA0 = 0;
    _LATA0 = 0;

    setPeripheralMap();
}

/**
 * Tx and Rx pins of UART2 are configured here as RP17 and RP10 pins.
 * Tx and Rx pins of UART2 are configured here as RP16 and RP30 pins.
 */
static void setPeripheralMap(void)
{
    __builtin_write_OSCCONL(OSCCON & 0xbf);
    // Map OC1 output to PortD2
    RPOR12bits.RP24R = 13; // Use RP24 for OC1 
    __builtin_write_OSCCONL(OSCCON | 0x40);
}
