#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[100];
    printf("请输入名字：");
    scanf("%s", name);

    // a
    printf("a: \"%s\"\n", name);
    // b 右对齐，占20字符
    printf("b: \"%20s\"\n", name);
    // c 左对齐，占20字符
    printf("c: \"%-20s\"\n", name);
    // d 宽度=名字长度+3
    int width = strlen(name)+3;
    printf("d: \"%*s\"\n", width, name);

    return 0;
}

