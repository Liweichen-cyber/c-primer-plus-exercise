#include <stdio.h>
char* my_strchr(char *str, char stop_letter);
int main(void) {
    char character[100];         //用数组储存用户输入的内容

    while (1) {
        printf("Input the character you want to find:");
        char ch = getchar();
        while (getchar() != '\n')
            continue;

        printf("Input characters:");
        fgets(character, 100, stdin);

        printf("%p\n", (void *)my_strchr(character, ch));
    }
    return 0;

}

char* my_strchr(char *str, char stop_letter) {
    for (int i = 0; ;i++) {
        if (*(str + i)== stop_letter) {
            return str+i;
        }

        else if (*(str + i)=='\0') {
            return NULL;
        }
    }
}
