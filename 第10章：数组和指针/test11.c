#include <stdio.h>
//写二维数组的时候，第二个中括号内必须有数值
void print_array(int arr_orign [][5] ,int rows) ;       //打印原数组
void double_array(int arr_double [][5] , int rows) ;    //打印翻倍后的数组
int main(void) {
    int num[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
    printf("The original array is:\n");   //由于函数返回void，因此函数不能直接放在printf的后面
    print_array(num , 3);

    printf("The double change array is:\n") ;
    double_array(num , 3) ;
    return 0;
}

void print_array(int arr_orign [][5] , int rows) {
    int i , j ;
    for (i = 0 ; i < rows ; i++) {
        for (j = 0 ; j < 5 ; j++) {
            printf("%d " , arr_orign[i][j]) ;
        }
        printf("\n") ;
    }
}

void double_array(int arr_double [][5] , int rows) {
    int i , j ;
    for (i = 0 ; i < rows ; i++) {
        for (j = 0 ; j < 5 ; j++) {
            arr_double[i][j] = arr_double[i][j] * 2 ;
            printf("%d " , arr_double[i][j]) ;
        }
        printf("\n") ;
    }
}
