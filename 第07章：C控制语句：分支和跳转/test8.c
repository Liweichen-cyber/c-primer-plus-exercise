#include <stdio.h>

#define PAY_RATE_1 8.75
#define PAY_RATE_2 9.33
#define PAY_RATE_3 10.00
#define PAY_RATE_4 11.20
#define OVERTIME_RATE 1.5

#define TAX_RATE_1 0.15
#define TAX_RATE_2 0.20
#define TAX_RATE_3 0.25

#define TAX_LIMIT_1 300
#define TAX_LIMIT_2 450

int main(void)
{
    int hours;
    int option = 0;
    double pay_rate;
    double gross_pay, tax, net_pay;

    while (option != 5) {
        printf("********************************************************\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("1) $8.75/hr                  2) $9.33/hr\n");
        printf("3) $10.00/hr                 4) $11.20/hr\n");
        printf("5) quit\n");
        printf("********************************************************\n");

        /* 读取选项并检查输入是否合法：scanf 返回 1 才说明成功读到一个整数 */
        if (scanf("%d", &option) != 1) {
            while (getchar() != '\n');   /* 清空输入缓冲区里的残留字符 */
            printf("Invalid input. Please enter a number.\n");
            continue;                    /* 非法输入不进入 switch，直接重新显示菜单 */
        }

        switch (option) {
            case 1:
                pay_rate = PAY_RATE_1;
                break;

            case 2:
                pay_rate = PAY_RATE_2;
                break;

            case 3:
                pay_rate = PAY_RATE_3;
                break;

            case 4:
                pay_rate = PAY_RATE_4;
                break;

            case 5:
                return 0;    /* 选 5 = 退出程序，直接返回最直白 */

            default:
                printf("Please input a number from 1 to 5:\n");
                continue;
        }

        printf("Please input the hours you work:");
        if (scanf("%d", &hours) != 1) {
            while (getchar() != '\n');
            printf("Invalid hours. Please restart.\n");
            continue;
        }

        if (hours <= 40) {
            gross_pay = hours * pay_rate;
        } else {
            gross_pay = 40 * pay_rate + (hours - 40) * pay_rate * OVERTIME_RATE;
        }

        printf("The total salary you get is %.2lf dollars\n", gross_pay);

        if (gross_pay <= TAX_LIMIT_1) {
            tax = gross_pay * TAX_RATE_1;
        } else if (gross_pay > TAX_LIMIT_1 && gross_pay <= TAX_LIMIT_2) {
            tax = TAX_LIMIT_1 * TAX_RATE_1 + (gross_pay - TAX_LIMIT_1) * TAX_RATE_2;
        } else {
            tax = TAX_LIMIT_1 * TAX_RATE_1
                + (TAX_LIMIT_2 - TAX_LIMIT_1) * TAX_RATE_2
                + (gross_pay - TAX_LIMIT_2) * TAX_RATE_3;
        }

        net_pay = gross_pay - tax;
        printf("The tax you should pay is %.2lf dollars\n", tax);
        printf("The real salary you get is %.2lf dollars\n", net_pay);
    }

    return 0;
}