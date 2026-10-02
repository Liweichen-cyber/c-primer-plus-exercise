#include <stdio.h>
#include <ctype.h>
int main (void) {
    int ch ;
    int sum = 0 ;
    int vocabulary = 0 ;
    int previous = ' ' ;
    double average ;

    printf("Please enter some characters:") ;

    while ((ch = getchar()) != EOF) {
        if (isalpha(ch)) {
            sum ++ ;
        }


        if (ch == ' ' && previous != ' ') {
            vocabulary ++ ;
        }

        previous = ch;   // 每轮最后记住当前字符
        average = (double)sum / (vocabulary + 1);
    }
    printf("The average letter of your code is %.2lf " , average) ;
    return 0;
}
