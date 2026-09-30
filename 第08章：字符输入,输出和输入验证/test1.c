#include <stdio.h>

int main(void)
{

    //setbuf(stdout, NULL);   // Code App：关闭 stdout 缓冲，保证交互提示及时显示
    int ch ;
    int count = 0 ;
    while ((ch = getchar()!= EOF)){
        count++ ;
    }
    printf("%d" , count) ;

    return 0;
}