#include <stdio.h>
double caculate (int num_a , int num_b) ;
int main(void) {
    double num_a , num_b ;
    printf("Input two integer and I can caculate the harmonic average:") ;
    scanf("%lf %lf" , &num_a , &num_b) ;
    printf("The harmonic average is %.3f" , caculate(num_a,num_b)) ;
    return 0;
}

double caculate (int num_a , int num_b) {
    double down_a , down_b ;
    double average ;
    double result ;

    down_a = 1.0/num_a ;
    down_b = 1.0/num_b ;
    average = (double) (down_a + down_b)/2 ;
    result = 1.0 / average ;
    return result ;
}
