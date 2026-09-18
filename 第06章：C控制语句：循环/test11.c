#include <stdio.h>
int main (void) {
    int numbers[8] , i ;
    printf("Please input 8 integers:");

    for (i = 0 ;i <=7 ; i ++) {
        scanf ("%d" , &numbers[i]) ;
    }                                           // scanf需要地址
    // numbers[i]是变量，需要&
    // numbers数组名本身代表首元素地址
    for (i = 7 ; i >= 0 ; i--) {
        printf("%d ", numbers[i]) ;
    }
    return 0;
}


