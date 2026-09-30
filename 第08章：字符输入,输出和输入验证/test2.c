#include <stdio.h>

int main(void)
{
    //setbuf(stdout, NULL);
    int ch ;
    int count = 0 ;

    while((ch = getchar())!= EOF){
        count++ ;

        if (ch == '\n'){          //   \n代表真的换行符
             printf("\\n  10") ;  //   \\n代表让屏幕显示显示\n
        }

        else if (ch == '\t'){
            printf("\\t  9") ;
        }

        else if (ch < 32){
            printf("^%c  %d", ch + 64, ch);
        }

        else {
            printf("%c  %d" , ch , ch) ;
        }

        if (count % 10 == 0){
            printf("\n") ;
        }

    }
    return 0 ;
}
