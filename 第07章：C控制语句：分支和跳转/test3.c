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
    printf("You have input %d odd numbers , the averange of them is %d\n" , odd_count , odd_sum / odd_count) ;
    printf("You have input %d even numbers , the averange of them is %d" , even_count , even_sum / even_count);

    return 0;
}
