#include <stdio.h>
char* my_strstr (char* str1, char* str2);
int main(void) {

    printf("Input the first character string:");
    char character1[100];

    if (fgets(character1, 100, stdin) == NULL)
        return 1;

    // 去掉 fgets 保留的换行符，避免把换行符也当作查找内容。
    for (int i = 0; character1[i] != '\0'; i++) {
        if (character1[i] == '\n') {
            character1[i] = '\0';
            break;
        }
    }

    printf("Input the second character string:");
    char character2[100];

    if (fgets(character2, 100, stdin) == NULL)
        return 1;

    for (int j = 0; character2[j] != '\0'; j++) {
        if (character2[j] == '\n') {
            character2[j] = '\0';
            break;
        }
    }

    printf("%p\n", (void*)my_strstr(character1, character2));

    return 0;
}

char* my_strstr (char* str1, char* str2) {
    if (*str2 == '\0') {                          // 空字符串视为匹配成功，返回原字符串的起始地址。
        return str1;
    }

        for (int i = 0; str1[i] != '\0' ;i++) {   // 依次尝试以 str1 的每个字符作为匹配起点。
            int j = 0;

                while (*(str2+j)!='\0') {

                    // 从 str1 的位置 i 开始，与 str2 逐个比较；j 表示已匹配的字符数。
                    if (str1[i + j] == str2[j]) {
                        j++;

                        if (*(str2+j) == '\0') {    // str2 已全部匹配，返回本次匹配的起始地址。
                            return str1+i;
                        }
                    }

                    else {
                        break;                    // 匹配失败，退出内层循环；外层将起点后移一格，j 重新从0开始。
                    }
                }
        }
    return NULL;
}



