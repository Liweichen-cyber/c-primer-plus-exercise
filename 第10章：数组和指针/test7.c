#include <stdio.h>
void copy_arr(double target[], double source[], int number);
int main(void) {
    double arr[2][3] ={
        {1.1, 2.2, 3.3},
        {4.4, 5.5, 6.6}
    };
    double target[2][3] ;
    copy_arr(target[0], arr[0], 3 );   //target[0]表示指针，而target[0][0]则表示一个数
    copy_arr(target[1], arr[1], 3);
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
