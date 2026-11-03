#include <stdio.h>
void store(char arr[],int n);
int main(void) {
    int const n = 20;
    printf("Input character:");
    char charactor[n];
    store(charactor,n);
    return 0;
}

void store(char arr[],int n) {
    //char ch = getchar();    不需要这一行，for循环内部已经用getchar读取了字符

    for (int i = 0; i < n; i++) {
        arr[i] = getchar();
        printf("%c", arr[i]);
    }
}