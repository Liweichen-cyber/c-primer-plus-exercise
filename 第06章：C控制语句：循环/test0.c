#include <stdio.h>   //来自c primer plus复习题6.a

int main(void)
{
    int i = 0;

    while (++i< 4)
        printf("Hi! ");
    do
        printf("Bye! ");
    while (i++ < 8);
    return 0;
}
// ++i：先加1，再使用/判断
// i++：先使用/判断，再加1
// 循环条件中：++i比较新值，i++比较旧值

