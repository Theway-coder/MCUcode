/**************************************
 * ???:???
 * ????:???(????)
**************************************/
#include <REGX52.H>

#define uint unsigned int
#define on 0
#define off 1

sbit led1 = P1^0;
sbit led2 = P1^2;
sbit led3 = P1^1;
sbit led4 = P1^3;
sbit led5 = P1^4;
sbit led6 = P1^5;
sbit led7 = P1^6;
sbit led8 = P1^7;

void delay(int xms) //?? xms
{
    uint i, j;
    for(i = xms; i > 0; i--)
    {
        for(j = 112; j > 0; j--) ;
    }
}

int main(void)
{
    while(1)
    {
        led1 = on;
        delay(100);
        led1 = off;
        delay(100);

        led2 = on;
        delay(100);
        led2 = off;
        delay(100);

        led3 = on;
        delay(100);
        led3 = off;
        delay(100);

        led4 = on;
        delay(100);
        led4 = off;
        delay(100);

        led5 = on;
        delay(100);
        led5 = off;
        delay(100);

        led6 = on;
        delay(100);
        led6 = off;
        delay(100);

        led7 = on;
        delay(100);
        led7 = off;
        delay(100);

        led8 = on;
        delay(100);
        led8 = off;
        delay(100);
    }

    return 0;
}
