#include <stdio.h>
int my_strlen(const char *str);  //这里的 * 是声明指针变量，表示 str 是一个指向 char 的指针。
int main(void) {
    char character[100];         //用数组储存用户输入的内容

    printf("Input characters:");
    scanf("%99s", character);

    printf("%d", my_strlen(character));

    return 0;
}

int my_strlen(const char *str) {
    int count = 0;
    for (int i = 0;; i++) {
        if (*(str + i)!= '\0') {
            count++;
        }
        else {
            break;
        }
    }
    return count;
}
