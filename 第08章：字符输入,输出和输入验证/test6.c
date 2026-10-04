#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main(void)
{
    char ch;

    printf("Enter some characters: ");
    ch = get_first();

    printf("The first non-whitespace character is: %c\n", ch);

    return 0;
}

char get_first(void)
{
    int ch;
    ch = getchar();

    while (isspace(ch)) {
        ch = getchar() ;    // 当前字符为空白时，继续读取下一个字符
        continue;
    }

    while (getchar() != '\n') {
        continue;
    }



    return ch;
}
