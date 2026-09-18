#include  <stdio.h>
int main(void) {
    int row ;
    char ch ;  //和test 2不同，test2中输出一直是$，而这里输出字母发生了变化，这么做是为了初始化（for循环会看到）

    for (row = 0 ;row <= 5 ; row ++) {
        for (ch = 'F' ; ch >= 'F'-row ; ch --) {
            printf("row=%d ch=%c\n", row, ch);
        }
        printf("\n") ;
    }
    return 0;
}
