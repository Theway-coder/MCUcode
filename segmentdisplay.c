/******************************************
*实验名:LED显示器动态显示
*实验效果:在3位一体LED显示器左数第4位显示1，过1s，
*在左数第3位显示2，过1s，在左数第2位显示3，过1s，
*左数第1位显示4，上述过程不断循环。
*******************************************/
#include<reg52.h>

#define duan P0
#define uchar unsigned char
sbit wei1 = P2^4;//定义第一位显示器
sbit wei2 = P2^5;//定义第二位显示器
sbit wei3 = P2^6;//定义第三位显示器
sbit wei4 = P2^7;//定义第四位显示器
uchar sz[17] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f, 0x77, 0x7c, 0x39, 0x5e, 0x79, 0x71, 0x00};

void delay(unsigned int xms);

int main(void)
{
    while(1)
    {
        duan = sz[1];
        wei1 = 1;
        wei2 = 0;
        wei3 = 0;
        wei4 = 0;
        delay(2);//延时0.002s
        duan = sz[2];
        wei1 = 0;
        wei2 = 1;
        wei3 = 0;
        wei4 = 0;
        delay(2);//延时0.002s
        duan = sz[3];
        wei1 = 0;
        wei2 = 0;
        wei3 = 1;
        wei4 = 0;
        delay(2);//延时0.002s
        duan = sz[4];
        wei1 = 0;
        wei2 = 0;
        wei3 = 0;
        wei4 = 1;
        delay(2);//延时0.002s
        
    } 
    return 0;
}

void delay(unsigned int xms)
{
    unsigned int i, j;
    for(i = xms; i > 0; i--)
    {
        for(j = 112 ; j > 0; j--);
    }
}