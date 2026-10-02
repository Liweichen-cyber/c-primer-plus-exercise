#include <stdio.h>
#include <ctype.h>

int main(void) {
    int ch ;
    int capital_letter = 0 ;
    int lowercase = 0 ;
    printf("Please enter some characters:") ;

    while ((ch = getchar()) != EOF) {
        if (isupper(ch)) {          //判断是不是大写字母
            capital_letter ++ ;
        }

        else if (islower(ch)) {       //判断是不是小写字母
            lowercase ++ ;
        }

    }
    printf("The number of the capital letter is %d\n" , capital_letter ) ;
    printf("The number of lowercase is %d " , lowercase) ;


    return 0;
}
