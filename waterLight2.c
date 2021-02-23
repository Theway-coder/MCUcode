/*********************************
 * 实验名：流水灯
 * 实验效果：流水灯（循环位移）
*********************************/
#include <REGX52.H>
#include <intrins.h>

void delay(unsigned int xms)
{
    unsigned int i, j;
    for (i = xms; i > 0; i--)
    {
        for (j = 112; j > 0; j--) ;
    }
}

int main(void)
{
    P1 = 0xfe; //1111 1110
    while (1)
    {
        delay(500);
        P1 = _crol_(P1, 1); /*将P1循环左移1位*/
    }
    
}
