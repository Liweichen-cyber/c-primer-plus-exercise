#include <stdio.h>
void store(char arr[],int n);
int main(void) {
    int const n = 20;
    printf("Input character:");
    char charactor[n+1];
    store(charactor,n);
    return 0;
}

void store(char arr[],int n) {

    for (int i = 0; i < n; i++) {
        char ch = getchar();

        if (ch == ' ' || ch == '\t' || ch == '\n')
        {
            arr[i] = '\0';
            break;
        }

        else{
            arr[i] = ch;
            printf("%c", arr[i]);
        }

    }
}
