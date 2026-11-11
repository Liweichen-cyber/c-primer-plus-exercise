#include <stdio.h>

int count(void);
int main(void) {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", count());
    }
    return 0;
}

int count(void) {
    static int a = 0;
    a++;
    return a;
}
