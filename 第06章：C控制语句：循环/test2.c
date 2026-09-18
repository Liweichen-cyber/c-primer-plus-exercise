#include <stdio.h>
int main(void) {
    int row , number ;
    //char symbol = $;

    for (row = 0 ; row <= 4 ; row ++) {
        for (number = 1 ; number <= row + 1 ; number++ ) {   //这里number <= row + 1非常重要，不是number <= 5
            printf("$") ;
        }
        printf("\n");
    }
    return 0;
}
