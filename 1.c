/******************************************************************************************
*实验名：led/数码管
*实验效果：数码管按照流水灯的亮灭情况在相应的位置显示0或1，其中1表示该位灯亮，0表示该位灯灭
******************************************************************************************/

#include <REGX52.H>
#include <intrins.h>

#define on 0;
#define off 1;


sbit led1 = P1^0;
sbit led2 = P1^1;
sbit led3 = P1^2;
sbit led4 = P1^3;

sbit wei1 = P2^4;
sbit wei2 = P2^5;
sbit wei3 = P2^6;
sbit wei4 = P2^7;

void delay(unsigned int x); //延时 x ms 

void display(unsigned int x); //第x位置1，其余位置0

int main(void)
{
    while(1)
    {
        led1 = on;
        display(1);
        delay(500);
        led1 = off;
        delay(500);
        
        led2 = on;
        display(2);
        delay(500);
        led2 = off;
        delay(500);
        
        led3 = on;
        display(3);
        delay(500);
        led3 = off;
        delay(500);
        
        led4 = on;
        display(4);
        delay(500);
        led4 = off;
        delay(500);
        
    }

    return 0;
}

void delay(unsigned int x) 
{
    unsigned int i, j;

    for (i = x; i > 0; i--)
    {
        for (j = 112; j > 0; j--) ;
    }
}

void display(unsigned int x) 
{
    unsigned int i;
    if (x == 1) //1000
    {       
       for (i = 11200; i > 0; i--)
       {
            wei1 = 1;
            wei2 = 0;
            wei3 = 0;
            wei4 = 0;
            P0 = 0x06; //显示1
            delay(2);
            wei1 = 0;
            wei2 = 1;
            wei3 = 0;
            wei4 = 0;
            P0 = 0x3f; //显示0
            wei1 = 0;
            wei2 = 0;
            wei3 = 1;
            wei4 = 0;
            P0 = 0x3f; //显示0
            wei1 = 0;   
            wei2 = 0;
            wei3 = 0;
            wei4 = 1;
            P0 = 0x3f; //显示0
       }
        
    }
    if (x == 2) //0100
    {       
        for (i = 11200; i > 0; i--)
        {
            wei1 = 1;
            wei2 = 0;
            wei3 = 0;
            wei4 = 0;
            P0 = 0x3f; //显示0
            delay(2);
            wei1 = 0;
            wei2 = 1;
            wei3 = 0;
            wei4 = 0;
            P0 = 0x06; //显示1
            wei1 = 0;
            wei2 = 0;
            wei3 = 1;
            wei4 = 0;
            P0 = 0x3f; //显示0
            wei1 = 0;
            wei2 = 0;
            wei3 = 0;
            wei4 = 1;
            P0 = 0x3f; //显示0
        }
        
    }
    if (x == 3) //0010
    {       
        wei1 = 1;
        wei2 = 0;
        wei3 = 0;
        wei4 = 0;
        P0 = 0x3f; //显示0
        delay(2);
        wei1 = 0;
        wei2 = 1;
        wei3 = 0;
        wei4 = 0;
        P0 = 0x3f; //显示0
        wei1 = 0;
        wei2 = 0;
        wei3 = 1;
        wei4 = 0;
        P0 = 0x06; //显示1
        wei1 = 0;
        wei2 = 0;
        wei3 = 0;
        wei4 = 1;
        P0 = 0x3f; //显示0
        
    }
    if (x == 4) //0001
    {       
        wei1 = 1;
        wei2 = 0;
        wei3 = 0;
        wei4 = 0;
        P0 = 0x3f; //显示0
        delay(2);
        wei1 = 0;
        wei2 = 1;
        wei3 = 0;
        wei4 = 0;
        P0 = 0x3f; //显示0
        wei1 = 0;
        wei2 = 0;
        wei3 = 1;
        wei4 = 0;
        P0 = 0x3f; //显示0
        wei1 = 0;
        wei2 = 0;
        wei3 = 0;
        wei4 = 1;
        P0 = 0x06; //显示1
        
    }
}
