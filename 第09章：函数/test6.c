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
    double temp ;
    if (*a >= *b) {
        temp = *b ;
        *b = *a ;
        *a = temp ;
    }

    if (*a >= *c) {
        temp = *c ;
        *c = *a ;
        *a = temp ;
    }

    if (*b >= *c) {
        temp = *b ;
        *b = *c ;
        *c = temp ;
    }

}