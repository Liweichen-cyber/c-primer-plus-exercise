#include <stdio.h>
void exchange (double *a , double *b , double *c) ;
int main(void) {
    double num_a , num_b , num_c ;
    printf("Please input three numbers:") ;
    scanf("%lf %lf %lf" , &num_a , &num_b , &num_c) ;

    exchange(&num_a , &num_b , &num_c) ;
    printf("%f , %f , %f" , num_a , num_b , num_c) ;
    return 0;
}

void exchange (double *a , double *b , double *c) {
    double temp1 = *a ;
    double temp2 = *b ;
    if (*a > *b && *b > *c) {
        *a = *c ;
        *c = temp1 ;
    }

    else if (*a > *c && *c > *b) {
        *a = *b ;
        *b = *c ;
        *c = temp1 ;
    }

    else if (*b > *a && *a > *c) {
        *a = *c ;
        *b = temp1 ;
        *c = temp2 ;
    }

    else if (*b > *c && *c > *a) {
        *b = *c ;
        *c = temp2 ;
    }

    else if (*c > *a && *a > *b) {
        *a = *b ;
        *b = temp1 ;
    }
}