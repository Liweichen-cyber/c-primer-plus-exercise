#include <stdio.h>
int main (void) {
    int number ;
    int even_count = 0, odd_count = 0 , even_sum = 0 ,odd_sum = 0;  //odd为奇数 ，even为偶数

    printf ("Please enter numbers (0 to stop):");
    scanf ("%d" , &number) ;

    while (number != 0) {
        if (number %2 != 0) {
            odd_sum = odd_sum + number ;
            odd_count++ ;
        }

        else {
            even_sum = even_sum + number ;
            even_count ++ ;
        }
        printf("Put another number (0 to stop): ");  //一定要注意需要再有个scanf，否则会无限循环下去
        scanf("%d" , &number);

    }
    if (odd_count == 0) {
        printf("You have input 0 odd numbers, the average of them is 0\n");

        double even_average = (double)even_sum / even_count;
        printf("You have input %d even numbers, the average of them is %f\n",
               even_count, even_average);
    }
    else if (even_count == 0) {
        double odd_average = (double)odd_sum / odd_count;

        printf("You have input %d odd numbers, the average of them is %f\n",
               odd_count, odd_average);

        printf("You have input 0 even numbers, the average of them is 0\n");
    }
    else {
        double odd_average = (double)odd_sum / odd_count;
        double even_average = (double)even_sum / even_count;

        printf("You have input %d odd numbers, the average of them is %f\n",
               odd_count, odd_average);

        printf("You have input %d even numbers, the average of them is %f\n",
               even_count, even_average);
    }

    return 0;
}

//第一，注意如果没有输入奇数或者偶数会出现除以0的情况
//第二，如果结果为小数，需要double类型，因此平均值需要再定义一个double类型
//第三，平均值的计算要放在判断 count 是否为 0 之后，避免在 count 为 0 时进行除法
//第四，（double）a/b属于强制转换的表达方式
