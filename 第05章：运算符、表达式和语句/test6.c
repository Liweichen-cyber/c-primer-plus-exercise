#include <stdio.h>
int main(void) {
    int day , sum , i = 1 ;

    printf("Please input the day you work:");
    scanf("%d" , &day);

    sum = 0 ;

    while (i <= day) {
        sum = sum + i * i ;
        i ++ ;
    }
    printf ("The money you have earned is %d dollars\n" , sum);


    return 0 ;
}
