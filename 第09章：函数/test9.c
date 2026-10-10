#include <stdio.h>
double power (double n , int p);   //n为底数，p为指数
int main (void) {
    double n ;
    int p ;

    printf("Please input two numbers , the first is the base and the second is the exponent:") ;
    scanf("%lf %d" , &n , &p) ;
    //power( n , p) ;
    printf("%f" , power(n , p)) ;
    return 0 ;
}

double power(double n ,int p) {

    if (p == 0 && n != 0) {
        return 1 ;        //p = 0时，任何数的0次方=1，因此返回1
    }

    if (p == 0 && n == 0) {
        printf("This calculation is undefined.") ;
        return 1 ;
    }

    if (p != 0 && n == 0) {
        return 0 ;
    }

    if (p > 0) {
        return  n * power (n , p-1) ;  // 递归计算幂，并逐层返回结果
    }
    else {
        return power(n, p + 1) / n;    //处理负数的情况
    }

}


