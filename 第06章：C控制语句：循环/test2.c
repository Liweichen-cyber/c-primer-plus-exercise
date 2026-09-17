// 第06章练习 test2：while 循环倒数 5~1
#include <stdio.h>

int main(void)
{
    int n = 5;
    while (n > 0)
    {
        printf("%d ", n);
        n--;
    }
    printf("发射！\n");
    return 0;
}