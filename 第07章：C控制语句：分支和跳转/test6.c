#include <stdio.h>
int main (void) {
    char current , previous ;
    int count = 0 ;
    printf("Please input a code (# to stop):");
    current = getchar() ;   //给current赋一个初始值，不然while中没有初始化

    while ( current!= '#'){
        previous = current ;   //previous = 当前读取的current
        current = getchar() ;  //current 继续读取下一个字符


        if (previous == 'e' && current == 'i') {
            count ++ ;
        }
    }
    printf("The ei have appeared %d times" , count) ;
    return 0;
}
