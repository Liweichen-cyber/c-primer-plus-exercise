#include <stdio.h>
int add (int a , int b) ;

int main (void) {
    int a , b ;
    printf("Please input two integer:") ;
    scanf("%d  %d" , &a , &b ) ;
    printf("The sum of a and b is %d" , add (a , b)) ;
    return 0;
}

int add (int a , int b) {
    int sum ;
    sum = a + b ;
    return sum ;
}
