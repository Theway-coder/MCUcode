/************************
 * 实验名：蜂鸣器实验
 * 实验效果：程序烧录进去后蜂鸣器发出滴滴的声音
************************/
#include <REGX52.H>

#define on 0
#define off 1
sbit fm = P2^3 ;

void delay(unsigned int xms) //延时xms毫秒
{
    unsigned int i, j ;
    
    for (i = xms; i > 0; i--)
    {
        for (j = 112; j > 0; j--) ;
    }
}

int main(void)
{
    while (1)
    {
        fm = on ; // P2^3 = 0 蜂鸣器响
        delay(100) ;
        fm = off ;
        delay(100) ;
    }

    return 0 ;
}

