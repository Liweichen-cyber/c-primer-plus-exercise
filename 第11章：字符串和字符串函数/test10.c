#include <stdio.h>
void remove_space(char *arr);
int main(void) {
    char arr[100];
    while (1){
        printf("Input a character string and I can delete the space inside!\n");
        fgets(arr,100,stdin);

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
    for (int i = 0; *(arr+i) != '\0'; i++) {
        if (*(arr+i) == ' ') {
            for (int j = 0; *(arr+i+j) !='\0'; j++) {
                *(arr+i+j) = *(arr+i+j+1);
            }
            i--;   // 重新检查当前位置，防止漏掉连续空格
        }
    }
}