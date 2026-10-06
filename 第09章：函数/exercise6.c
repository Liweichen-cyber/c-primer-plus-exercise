#include <stdio.h>

void alter(int *a, int *b);                 // a、b 是指针，用来接收 x、y 的地址

int main(void)
{
    int x, y;                               // x、y 是普通 int 变量

    printf("Please input two integers:");
    scanf("%d %d", &x, &y);                 // &x、&y：把 x、y 的地址交给 scanf

    alter(&x, &y);                          // 把 x、y 的地址传给 alter
    printf("%d\n%d", x, y);                 // alter 已直接修改 x、y，此处直接输出

    return 0;
}

void alter(int *a, int *b)
{
    // 调用 alter(&x, &y) 后：
    // a 保存 x 的地址，因此 *a 就是 x 的值
    // b 保存 y 的地址，因此 *b 就是 y 的值

    int temp = *a;                          // 保存原来的 x，防止修改 *a 后丢失
    *a = *a + *b;                           // 通过地址修改 x：x = 原 x + 原 y
    *b = temp - *b;                         // 通过地址修改 y：y = 原 x - 原 y
}