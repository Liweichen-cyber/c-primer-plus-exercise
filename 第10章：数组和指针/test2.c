#include <stdio.h>
void copy_arr(double target1[], double source[], int number);        // copy_arr：使用数组下标表示法复制数组
void copy_ptr(double target2[], double source[], int number);        // copy_ptr：使用指针表示法和指针递增复制数组（按元素个数）
void copy_ptrs(double target3[], double source[], double *end);       // copy_ptrs：使用指针表示法，通过起始地址和结束地址确定复制范围（按结束地址）

int main (void) {
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    copy_arr(target1 , source , 5) ;
    copy_ptr(target2 , source , 5) ;
    copy_ptrs(target3 , source , source + 5) ;

    return 0;

}

void copy_arr(double target1[], double source[], int number) {
    for (int i = 0 ; i < number ; i++) {
        target1[i] = source[i] ;
        printf("%.1f " , target1[i]) ;
    }
    printf("\n") ;
}

//第二个函数中，target，source都是指针变量，target2++等同于指针右边动一格
void copy_ptr(double target2[], double source[], int number) {
    for (int i = 0 ; i < number ; i ++) {
        *target2 = *source ;
        source ++ ;
        printf("%.1f " , *target2) ; //target2要同步移动，而不是target2[i]保持原地
        target2++ ;                  //target随source移动，注意要放到printf的后面
    }
    printf("\n") ;
}

void copy_ptrs(double target3[], double source[], double *end){
    for ( ;source < end ; ) {     //1，3两个位置均可以留空，注意这里第三个位置不要写source++，不然会移动两次
        *target3 = *source ;
        source ++ ;
        printf("%.1f " , *target3) ;
        target3++ ;
    }
}
