//输出数组最大值
#include <stdio.h>

int main(void)
{
    int numbers[8] = {15, 42, 8, 67, 23, 91, 36, 54};
    int max = numbers[0] ;    //数组第一个数值赋值给Max
    for (int i = 0 ; i < 8 ; i ++){
        if (numbers[i] >= max){
            max = numbers[i] ;
        }
    }
    printf("%d" , max) ;

    return 0;
}
