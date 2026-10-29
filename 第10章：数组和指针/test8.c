#include <stdio.h>
void copy_arr(double target[], double source[], int number);

int main (void) {
    double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double target[3] ;
    copy_arr(target, source+2, 3);   //source 在函数调用时会转换为指针
    return 0;
}

void copy_arr(double target[], double source[], int number) {
    for (int i = 0 ; i < number ; i ++) {
        *target = *source ;
        source ++ ;
        printf("%.1f " , *target) ;
        target++ ;
    }
    printf("\n") ;
}
