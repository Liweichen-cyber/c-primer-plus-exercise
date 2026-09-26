#include <stdio.h>
#define PAY_RATE 10.00
#define OVERTIME_RATE 1.5

#define TAX_RATE_1 0.15
#define TAX_RATE_2 0.20
#define TAX_RATE_3 0.25

#define TAX_LIMIT_1 300
#define TAX_LIMIT_2 450

int main(void) {
    int time ;
    double gross_pay , tax , net_pay ;     //gross_pay为税前工资，net_pay为净收入

    printf("Please input the time you work:");
    scanf("%d" , &time);

    if (time <= 40) {
        gross_pay = time * PAY_RATE ;
    }

    else {
        gross_pay = 40 * PAY_RATE + (time - 40) * PAY_RATE * OVERTIME_RATE;
    }

    printf("Your total salary is %.2lf dollars\n" , gross_pay) ;

    if (gross_pay <= TAX_LIMIT_1) {
        tax = gross_pay * TAX_RATE_1 ;
    }

    else if (gross_pay > TAX_LIMIT_1 && gross_pay <= TAX_LIMIT_2) {
        tax = TAX_LIMIT_1 * TAX_RATE_1 + (gross_pay - TAX_LIMIT_1) * TAX_RATE_2 ;
    }

    else {
        tax = TAX_LIMIT_1 * TAX_RATE_1 + (TAX_LIMIT_2 - TAX_LIMIT_1) * TAX_RATE_2 + (gross_pay - TAX_LIMIT_2) *TAX_RATE_3 ;
    }

    net_pay = gross_pay - tax ;
    printf("The tax you should pay is %.2lf dollars\n" , tax) ;
    printf("The real salary you get is %.2lf dollars\n" , net_pay) ;

return 0;

}

