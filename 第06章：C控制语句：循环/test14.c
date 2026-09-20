#include <stdio.h>
int main (void) {
    double container1 [8] ;
    double container2 [8] ;
    int i ;


    printf("Please input 8 numbers :") ;
    for (i = 0 ; i < 8 ; i ++) {
        scanf ("%lf" , &container1[i]) ;
    }

    container2[0] = container1 [0] ; //需要对0的值进行初始化
    for (i = 1 ; i < 8 ; i ++) {    //这里让i初始化为1，是方便后面i-1的计算，注意for循环中数组只有7个元素，第一个元素在上面
        container2[i] = container2[i - 1] + container1[i] ;
    }

    for (i = 0 ; i < 8 ; i ++) {  //这里的printf也可以放在第一个for下面，计算第二个数组上面去
    printf("%f  " , container1[i]);
    }

    printf("\n");

    for (i = 0 ; i < 8 ; i ++) {
        printf("%f  ", container2[i] ) ;
    }


    return 0;
}
