#include  <stdio.h>
int main (void) {

    int number , i ;
    double sum1 , sum2  ;  //不能用int sum
    printf("Please input a number to sum up :");
    scanf ("%d" , &number);

    while (number > 0 ) {
        sum1 = 0 , sum2 = 0 ;   // 初始化累加变量：必须在 for 循环开始前，否则每轮都会清零，无法累加
        for (i = 1 ; i <= number ; i ++) {
            sum1 = sum1 + 1.0 /i ;       // 1.0 使除法变为浮点除法；1 / i 是整数除法，小数部分会被舍弃

            if (i % 2 == 0) {            //通过if语句判断奇偶，注意不需要修改for循环的条件
                sum2 = sum2 - 1.0/i ;
            }
            else {
                sum2 = sum2 + 1.0/i ;
            }
        }
        printf("Sequence 1 :%f\n" ,  sum1);
        printf("Sequence 2 :%f\n" ,  sum2);
        printf("Please input another number to sum up:");
        scanf ("%d" , &number) ;            //需要用户再次输入，用到scanf，否则将一直循环下去，变成无限循环
        }


    return 0;
    }





