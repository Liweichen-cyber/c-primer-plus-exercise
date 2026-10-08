#include <stdio.h>
void design(char character , int num , int line) ;    //目前来看，函数如果返回内容，只能返回一个数字，符号等等，因此返回void，在main中调用函数
int main (void) {
    char character ;
    int num , line ;
    printf("Please input a character and two numbers:") ;
    scanf("%c %d %d" , &character , &num , &line) ;

    design(character, num, line) ;   //调用函数
    //printf("%c" , character) ;
    return 0 ;
}

void design(char character , int num , int line) {
    int i , j ;
    for (i = 1 ; i <= line ; i ++) {          //外层控制行数
        for (j = 1 ; j <= num ; j ++) {       //内层控制数量
            printf("%c" , character) ;
        }
        printf("\n") ;
    }
}



