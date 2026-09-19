#include <stdio.h>
int main(void) {
    int row ;
    char ch ;
    //int i = 0 ;

    for (row = 0 ; row <= 5 ; row ++) {
        for (ch = 'A' + row * (row + 1) / 2;  ch <= 'A' + row * (row + 1) / 2 + row;  ch ++ ) {
            printf("%c" , ch) ;
        }
        printf("\n") ;
    }
    return 0;
}
