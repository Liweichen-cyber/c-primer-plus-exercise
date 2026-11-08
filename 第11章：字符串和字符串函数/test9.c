#include <stdio.h>
void reverse_string(char *str);
int main(void) {
    char arr[100];
    printf("Input your array and I can reverse it!\n");

    //处理读取失败的情况
    if (fgets(arr, 100, stdin) == NULL)
        return 1;

    //处理换行符
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == '\n') {
            arr[i] = '\0';
            break;
        }
    }

    reverse_string(arr);
    printf("%s\n", arr);
    return 0;
}

void reverse_string(char *str) {
    int i = 0;
    int j = 0;
    int count = 0;

    while (*(str+i) != '\0') {
        count += 1;
        i++;
    }

    while (j < count/2) {
        char temp = *(str+j);
        *(str+j) = *(str+count-j-1);
        *(str+count-j-1) = temp;
        j++;
    }
}
