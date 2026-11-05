#include <stdio.h>
void put_char (char arr[], int number);
int main(void) {
    printf("Input character:");
    const int max_chars = 5;
    char store[6];
    put_char(store, max_chars);

    return 0;
}

void put_char (char arr[], int number) {
    int ch;
    for (int i = 0; i < number; i++) {
        ch = getchar();
        if (i == 0 &&(ch ==' ' || ch == '\t' || ch == '\n')) {
            i --;
            continue;
        }

        else if (i != 0 && (ch ==' ' || ch == '\t' || ch == '\n')) {
            arr[i] = '\0';

            break;
        }


        else{
            arr[i] = ch;
            printf("%c", arr[i]);
        }
    }

    //丢弃当前行剩余的字符，直到遇到换行符。
    //if确保当前读取的不是换行符，否则会直接换行读取字符
    if (ch != '\n') {
        while (getchar() != '\n')
            continue;
    }
    arr[number] = '\0';
}
