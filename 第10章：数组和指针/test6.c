#include <stdio.h>
void reverse (double arr[] , int number) ;
int main (void) {
    double num [5] = {12, 35, 8, 46, 20};
    reverse(num , 5) ;
    for (int i = 0; i < 5; i++) {      //输出数组，需要用到for循环
        printf("%f\n", num[i]);
    }
    return 0;
}

void reverse (double arr[] , int number) {
    for (int i = 0 ; i < number/2 ; i ++){       //由于后面的值会使用前面已经更新的数值，且只有后面一半出现（比如这里46，20出现），因此以number/2为边界
        double temp = arr[i] ;
        arr [i] = arr [number - i - 1];         //注意对应，这里要多减去一个1
        arr[number - 1 - i] = temp ;            //这两列中number - 1 - i 都代表后半部分的元素
    }
}
