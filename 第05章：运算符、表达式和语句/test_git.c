// 版本2：会算加法的程序（从一行注释升级成完整程序）
#include <stdio.h>

int main(void)
{
    int a, b;
    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    return 0;
}
