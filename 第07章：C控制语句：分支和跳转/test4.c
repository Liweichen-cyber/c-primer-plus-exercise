#include <stdio.h>
int main(void) {

    char ch ;
    int replace_count = 0;
    printf("Please input a code(# to stop):");

    while ((ch = getchar()) != '#') {

        if (ch == '.' ) {
            replace_count ++ ;
            putchar('!') ;
        }

        else if (ch == '!') {
            replace_count++;
            putchar('!');     //putchar一次只能读取一个字符
            putchar('!');
        }

        else {
            putchar(ch) ;
        }

    }
    //printf("%c\n" , ch) ;  注意正文中已经有putchar了，因此最后的输出并不需要printf来实现
    printf("The text has been converted for %d times" , replace_count) ;

    return 0;
}
