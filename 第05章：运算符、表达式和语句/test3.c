#include <stdio.h>
int main(void) {
    int number ;

    printf("please input a number of days:");
    scanf ("%d" , &number);

    while (number > 0 ) {
        int weeks = number / 7;
        int days = number % 7 ;

        printf("%d days are %d weeks, %d days.\n" , number , weeks , days);
        printf("please input a number of days:");
        scanf ("%d" , &number);

    }
    return 0;
}
