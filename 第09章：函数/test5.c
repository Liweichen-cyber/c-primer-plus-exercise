#include <stdio.h>
void large_of (double *a , double *b) ;
int main(void) {
    double num_a , num_b ;
    printf("Please input two differnt number:") ;
    scanf("%lf %lf" , &num_a , &num_b) ;

    large_of(&num_a , &num_b) ;
    printf("%.3lf %.3f" , num_a , num_b) ;
    return 0;
}

void large_of (double *a , double *b) {    // 此时 num_a 的地址传给了 a，num_b 的地址传给了 b
    if (*a > *b) {
        *b = *a ;
    }

    else if (*a < *b) {
        *a = *b ;
    }
}

