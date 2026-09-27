#include <stdio.h>
int main (void) {
    int integer , i  , j ;
    int is_primer ;

    printf("Please input an integer:") ;
    scanf("%d" , &integer) ;

    for (i = 2 ; i <= integer ; i++) {   //外层循环控制遍历的数字
        is_primer = 1 ;                  //需要一个检查器进行判断，这是本题的关键
        for (j = 2 ; j < i  ; j++) {     //内层循环控制被i整除的数字
            if (i % j == 0) {
                is_primer = 0 ;
                break;                   //当发现可以整除的时候就停止后面的步骤（不删除也可以，但是后面的检测无意义）
            }
        }
    if (is_primer == 1) {
        printf("%d\n" , i) ;
    }

    }

    return 0;
}
