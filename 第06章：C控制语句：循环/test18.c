#include <stdio.h>
int main(void)
{
    int number = 5 ;
    int weak ;
    //printf("Weak 1 , you have 5 friends\n");   注意第一周就是8个朋友了，不要搞错

    for (weak = 1 ; ;weak ++) {   //当需要无限循环的时候，for中间第二个部分留空
        number = (number - weak) * 2;
        printf("Week %d , you have %d friends\n" , weak , number);
        if (number >= 150) {
            break;
        }
    }
    return 0 ;
}

