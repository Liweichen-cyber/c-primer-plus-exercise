#include <stdio.h>
int main (void) {
    int numbers[5] = {10, 20, 30, 40, 50};

    for (int i = 4 ; i >= 0 ; i -- ) {
        printf("%d " , numbers[i]) ;
    }
    return 0;
}
