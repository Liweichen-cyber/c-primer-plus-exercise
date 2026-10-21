#include <stdio.h>

int max_subscrip (double arr[] , int number) ;
int main(void) {
    //int number ;
    double num [5] = {12, 35, 8, 46, 20};
    int subscrip = max_subscrip(num , 5) ;
    printf("%d" , subscrip) ;
    return 0;
}

int max_subscrip (double arr[] , int number) {
    double max = arr[0] ;
    int subscrip = 0 ;
    for (int i = 0 ;i < number ; i ++) {
        if (arr[i] > max) {
            max = arr[i] ;
            subscrip = i ;
        }
    }
    return subscrip ;
}

