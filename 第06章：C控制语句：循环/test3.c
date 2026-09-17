// 第06章练习 test3：do-while 循环求 1~5 的和
#include <stdio.h>

int main(void)
{
    int sum = 0, i = 1;
    do
    {
        sum += i;
        i++;
    } while (i <= 5);
    printf("1+2+3+4+5 = %d\n", sum);
    return 0;
}