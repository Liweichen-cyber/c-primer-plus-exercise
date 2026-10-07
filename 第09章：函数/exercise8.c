#include <stdio.h>
int max3 (int a , int b , int c) ;
int main (void) {
    int a , b , c ;
    printf("Please input three integer:");
    scanf("%d %d %d" , &a , &b , &c) ;
    printf("The largest number is %d" , max3(a , b , c)) ;
    return 0;
}

int max3 (int a , int b , int c) {
    if (a >= b && a >= c) {
        return a ;
    }

    else if (b >= a && b >= c) {
        return b ;
    }

    else {
        return c ;
    }
}
