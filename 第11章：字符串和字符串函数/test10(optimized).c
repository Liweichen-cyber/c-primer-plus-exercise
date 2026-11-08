#include <stdio.h>
void remove_space(char *arr);
int main(void) {
    char arr[100];
    while (1){
        printf("Input a character string and I can delete the space inside!\n");
        if (fgets(arr, sizeof arr, stdin) == NULL)
            break;

        if (arr[0] == '\n') {
            break;
        }

        else {
            remove_space(arr);
            printf("%s", arr);
        }
    }
    return 0;
}

void remove_space(char *arr) {
    char *read = arr;     //read： 每个字符都往后走
    char *write = arr;    //write：只有遇到“需要保留的字符”才往后走

    for (; *read != '\0'; read++) {
        // 判断 *read 是不是空格
        if (*read == ' ') {
            continue;
        }

        // 决定 write 要不要写、要不要移动
        else {
            *write = *read;
            write++;
        }
    }
    *write = '\0';   // 在保留内容的末尾补上字符串结束符
}