#include <stdio.h>

void to_base_n(unsigned long n, unsigned int base);

int main(void)
{
    unsigned long number;
    unsigned int base;

    printf("Enter a number and a base (2-10) (q to quit):\n");

    while (scanf("%lu %u", &number, &base) == 2)
    {
        if (base < 2 || base > 10)
        {
            printf("Base must be between 2 and 10.\n");
        }
        else
        {
            printf("Result: ");
            to_base_n(number, base);
            putchar('\n');
        }

        printf("Enter a number and a base (2-10) (q to quit):\n");
    }

    printf("Done.\n");
    return 0;
}

void to_base_n(unsigned long n, unsigned int base)
{
    unsigned int remainder = (unsigned int)(n % base);

    if (n >= base)
        to_base_n(n / base, base);

    putchar('0' + (int)remainder);
}
