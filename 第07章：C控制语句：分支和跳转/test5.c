#include <stdio.h>
int main(void) {
    char ch ;
    int replace_count = 0;
    printf("Please input a code(# to stop):");

    while ((ch = getchar()) != '#') {
        switch (ch){
            case '.' :
            replace_count ++ ;
            putchar('!') ;
            break;

            case '!':
            replace_count++ ;
            putchar('!') ;
            putchar('!') ;
            break;

            default :
            putchar(ch) ;
            break;
        }
    }
    printf("\nThe text has been converted for %d times" , replace_count) ;

    return 0;
}
