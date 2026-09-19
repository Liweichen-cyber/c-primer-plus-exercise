#include <stdio.h>

int main(void)
{
    int row;
    char ch;

    for (row = 0; row <= 5; row++)
    {
        ch = 'A' + row * (row + 1) / 2;

        for (int i = 0; i <= row; i++)
        {
            printf("%c", ch++);
        }

        printf("\n");
    }

    return 0;
}