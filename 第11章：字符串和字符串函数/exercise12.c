#include <stdio.h>
char* my_find (char *str);
int main(void) {
    char character[100];         //用数组储存用户输入的内容

    printf("Input characters:");
    fgets(character, 100, stdin);   //使用fgets可以处理空格

    printf("%p", (void *)my_find(character));

    return 0;
}

char* my_find (char *str) {
    for (int i = 0; ; i++) {
        if (*(str + i) ==' ') {
            return str+i;
        }
        else if (*(str + i) == '\0'){
            return NULL;
        }

    }
}
