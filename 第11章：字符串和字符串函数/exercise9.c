#include <stdio.h>

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
    //int i = 0;

    ret_val = fgets(st, n, stdin);

    if (ret_val)
    {
        while (*st != '\n' && *st != '\0')
            *st++;

        if (*st == '\n')
            *st = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}
