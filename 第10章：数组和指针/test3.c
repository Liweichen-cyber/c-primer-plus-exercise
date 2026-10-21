#include <stdio.h>

int max_value (int arr[] , int number) ;       //arr是数组，声明的时候带[]此外，int arr[]和int *arr在函数声明的时候完全等价
int main (void) {
    int numbers [5] = {12, 35, 8, 46, 20};
    int max = max_value(numbers, 5);
    printf("%d" , max ) ;
    return 0;
}

int max_value (int arr[] , int number) {
    int max = arr[0] ;
    for (int i = 0 ; i < number ;i++ ) {
        if (arr[i] >= max) {
            max = arr[i] ;
        }
    }
    return max ;
}


