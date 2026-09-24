#include <stdio.h>
int main(void) {
    char ch ;
    int count = 0 ;
    printf("Please enter characters (# to stop):") ;

    while ((ch = getchar()) != '#') {
        count ++ ;
        if (count %8 != 0) {
            printf ("%c-%d  " , ch , ch) ;
        }

        else {
            printf ("%c-%d\n" , ch , ch) ;
        }
        }
    return 0;
    }

