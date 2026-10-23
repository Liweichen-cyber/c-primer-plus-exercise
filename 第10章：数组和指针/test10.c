#include <stdio.h>
void add_arrays(int arr1[] , int arr2[] , int arr3[]) ;   //1和2负责原数组，3负责保存相加后的数组
int main(void) {
    int orign1[5] = {13 , 42 , 12 , 46 , 83};
    int orign2[5] = {23 , 43 , 10 , 24 , 91};
    int result[5] ;
    add_arrays(orign1 , orign2 , result) ;   //在上一步中声明result为数组
    for (int i = 0 ;i < 5 ;i ++ ) {
        printf("%d " , result[i]) ; //result是数组名
    }
    return 0;
}

void add_arrays(int arr1[] , int arr2[] , int arr3[]) {
    for (int i = 0 ; i < 5 ;i ++) {
        arr3[i] = arr1[i] + arr2[i] ;
    }
}
