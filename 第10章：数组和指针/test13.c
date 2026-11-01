#include <stdio.h>
void store_array(double arr[][5]);                        //存储二维数组
double caculate_avergae(double arr[5] , int num) ;        //计算平均值的函数
void array_average(double arr[][5]) ;                     //处理数组的元素
double total_average(double arr[][5]) ;                   //计算所有数据平均值
double maximal_number(double arr[][5]) ;                  //计算最大的数值
void result(double arr[][5]) ;                            //显示最终结果

int main(void) {
    double num[3][5] ;
    store_array(num) ;             //a
    result(num) ;

    return 0;
}

void store_array(double arr[][5]) {
    printf("Please input 15 numbers:") ;
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 5 ; j++) {
            scanf("%lf" , &arr[i][j]) ;
        }
    }
}

double caculate_avergae(double arr[5], int num) {
    double total = 0 ;
    double average = 0 ;
    for (int j = 0; j < num ; j++) {
        total = total + arr[j] ;
    }
    average = total/num ;
    return average ;
}

void array_average(double arr[][5]) {
    for (int i = 0; i < 3; i++) {
        printf("%.3lf\n" , caculate_avergae(arr[i] , 5) ) ;
    }
}

double total_average(double arr[][5]) {
    double total = 0;
    double subtotal;
    for (int i = 0; i < 3; i++) {
        subtotal = 0;
        for (int j = 0; j < 5; j++) {
            subtotal = subtotal + arr[i][j];
        }
        total = total + subtotal;
    }
    double result = total/15 ;
    return result ;
}

double maximal_number(double arr[][5]) {
    double max = arr[0][0] ;
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 5 ; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j] ;
            }
        }
    }
    return max ;
}

void result(double arr[][5]) {
    array_average(arr) ;           //b
    printf("The average of all the numbers is %.2lf\n", total_average(arr)) ;    //c
    printf("The maximal number of the array is %.2lf", maximal_number(arr)) ;    //d
}
