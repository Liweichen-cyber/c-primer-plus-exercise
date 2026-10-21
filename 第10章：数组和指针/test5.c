#include <stdio.h>

double different_value (double arr[] , int number) ;
int main(void) {
    double num [5] = {12, 35, 8, 46, 20};
    double result = different_value(num , 5) ;
    printf("%f" , result) ;
    return 0;
}

double different_value (double arr[] , int number) {
    double mini = arr[0] ;
    double max = arr[0] ;
    for (int i = 0 ;i < number ; i ++) {
        if (arr[i] < mini) {
            mini = arr[i] ;
        }

        if (arr[i] > max) {
            max = arr[i] ;
        }
    }
    double differ = max - mini ;
    return differ ;
}