#include <stdio.h>
int main (void) {
    char alphabet [26];
    for (int i = 0 ; i <26 ; i++) {      //for 循环中间用分号隔开
        alphabet[i] = 'a'+ i  ;         //-97(更正：这里没有97）

    }

    for (int i = 0 ; i <26 ; i++) {
        printf("%c" , alphabet[i]) ;
    }

    return 0 ;
}

// 数组下标决定“存在哪里”，元素值决定“存什么”
// 下标从 0 到 25，但元素可以是 'a' 到 'z'
// 'a' + i：i=0 时为 'a'，i=1 时为 'b'，依次类推