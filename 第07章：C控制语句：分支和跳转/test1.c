#include <stdio.h>
int main(void) {

    char ch ;
    printf ("Please enter a paragraph of text :") ;
    //ch = getchar() ;   whiile 里面有ch = getchar了，这里就不用再写了
    int space = 0 ;
    int newlines = 0 ;
    int others = 0 ;

    while ((ch = getchar()) != '#') {  //ch = getchar 要打括号，注意运算的优先级，同时#作为特殊字符需要打单引号
        if (ch == ' ') {
            space ++ ;
        }
        else if (ch == '\n') {
            newlines ++ ;
        }
        else {
            others ++ ;
        }

    }
    printf ("The number of the spaces , newlines , other charactars are %d , %d ,and %d \n" , space , newlines , others);
    return 0;

}
