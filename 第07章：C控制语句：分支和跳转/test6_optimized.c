#include <stdio.h>

int main(void)
{
    char current, previous;
    int count = 0;

    printf("Please input a text (# to stop): ");

    previous = getchar();   // 先读取第一个字符，并把它作为 previous

    while ((current = getchar()) != '#')   //这里getchar已经读取了第二个字符
    {
        if (previous == 'e' && current == 'i')
        {
            count++;
        }

                              // 当前字符变成下一轮的前一个字符
        previous = current;   // 先判断 previous 和 current，判断完成后再让 current 成为下一轮的 previous
    }

    // 输出 "ei" 出现的次数
    printf("The number of \"ei\" is %d\n", count);

    return 0;
}
