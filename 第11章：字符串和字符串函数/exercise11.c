#include <stdio.h>
#include <string.h>

#define SIZE 40

char *s_gets(char *st, int n);

int main(void)
{
    char str[SIZE];

    printf("Enter a string: ");

    if (s_gets(str, SIZE))
    {
        printf("You entered: %s\n", str);
    }

    return 0;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);

    if (ret_val)
    {
        char *p = strchr(st, '\n');    //strchr返回指针本身，而不是数值或者数组下标

        if (p)              //等价于if (p != NULL)，p是指针变量，找到\n就返回地址，不是NULL
            *p = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}
