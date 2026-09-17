#include <stdio.h>
int main(void) {
    int integer;
    int number ;
    printf("please input an integer:");
    scanf("%d" , &integer);

    number = integer ;
    while (number <= integer +10 && number >= integer) {
        printf("%d\n" , number);
        number ++ ; //不能写number++i
    }
    return 0 ;
}






