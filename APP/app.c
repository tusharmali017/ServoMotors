#include "app.h"

static void setServoMiddlePos();
static void setServoPlus90Degree();
static void setServoMinus90Degree();

void runApp(void)
{
//    setServoMiddlePos();
//    timer1Delayms(1000);
    T2CONbits.TON = 1;
    setServoPlus90Degree();
    
    while (1)
    {
//        setServoMiddlePos();
//        timer1Delayms(1000);
//        setServoPlus90Degree();
        timer1Delayms(2000);
        setServoMinus90Degree();
//        timer1Delayms(2000);
    }
}

static void setServoMiddlePos()
{
    T2CONbits.TON = 0;
    OC1R = 0;
    OC1RS = 749; //1.5 msec delay
    T2CONbits.TON = 1;
}

static void setServoPlus90Degree()
{
    T2CONbits.TON = 0;
    OC1R = 0;
    //SG90S
    OC1RS = 1299; //2.39 msec delay
    //MG90S
    //OC1RS = 1299; //2.59 msec delay
    //metal servo
//    OC1RS = 1265; //2.39 msec delay
    T2CONbits.TON = 1;
}

static void setServoMinus90Degree()
{
    T2CONbits.TON = 0;
    OC1R = 0;
    //SG90S
        OC1RS = 329; //0.6 msec delay
    //MG90S
    //    OC1RS = 245; //0.5 msec delay
    //metal servo
//    OC1RS = 245;        //0.5 msec delay
    T2CONbits.TON = 1;
}