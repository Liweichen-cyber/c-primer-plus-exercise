#include  <stdio.h>
int main (void) {

    int number , i ;
    double sum  ;  //不能用int sum
    printf("Please input a number to sum up :");
    scanf ("%d" , &number);

    while (number > 0 ) {
        sum = 0 ;     // 初始化累加变量：必须在 for 循环开始前，否则每轮都会清零，无法累加
        for (i = 1 ; i <= number ; i ++) {
            sum = sum + 1.0 /i ;     // 1.0 使除法变为浮点除法；1 / i 是整数除法，小数部分会被舍弃
        }
        printf("Sequence 1 :%f\n" , sum);
        printf("Please input another number to sum up:");
        scanf ("%d" , &number) ;
        }

    return 0;
    }


