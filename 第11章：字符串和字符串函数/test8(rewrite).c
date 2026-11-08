#include <stdio.h>
char* my_strstr(char* str1, char* str2);
int main(void) {
    printf("Input first character string:");
    char character1[100];

    if (fgets(character1, 100, stdin) == NULL) {
        return 1;
    }

    for (int i = 0; i < 100; i++) {
        if (character1[i] == '\n') {
            character1[i] = '\0';
            break;
        }
    }

    printf("Input second character string:");
    char character2[100];

    if (fgets(character2, 100,stdin) ==NULL) {
        return 1;
    }

    for (int j = 0; j < 100; j++) {
        if (character2[j] == '\n') {
            character2[j] = '\0';
            break;
        }
    }

    printf("%p\n", (void*)my_strstr(character1, character2));
    return 0;
}

char* my_strstr(char* str1, char* str2) {
    if (*str2 == '\0') {                          // 空字符串视为匹配成功，返回原字符串的起始地址。
        return str1;
    }

    for (int i = 0; str1[i] != '\0'; i++) {

        int j = 0;

        while (str2[j] != '\0') {
            if (str1[i+j] == str2[j]) {
                j++;
            }

            else {
                break;
            }
        }

        if (str2[j] == '\0') {
            return str1 + i;
        }
    }
    return NULL;
}
