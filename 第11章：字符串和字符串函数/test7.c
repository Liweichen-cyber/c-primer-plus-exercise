#include <stdio.h>
char* my_strncpy(char* result, char* source, int count);
int main(void) {
    char result[100];      //复制结果
    char source[100];      //复制来源
    int count;

    while (1) {
        printf("Input the number you want to copy('q' to quit):\n");

        //输入不是数字的情况
        if (scanf("%d", &count) != 1)
            break;

        //输入负数的情况
        if (count < 0)
            break;

        //清除最后的换行符
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF)
            ;


        printf("Input a character string you want to copy(Enter to quit):\n");

        if (fgets(source, 100, stdin) == NULL)
            break;

        if (source[0] == '\n')
            break;

        for (int j = 0; source[j] != '\0'; j++) {
            if (source[j] == '\n') {
                source[j] = '\0';
                break;
            }
        }

        my_strncpy(result, source, count);
        result[count] = '\0';  // 在复制范围之后补结束符，方便按字符串输出
        printf("%s\n", result);
    }
    return 0;
}

char* my_strncpy(char* result, char* source, int count) {
    char* read = source;     //read负责读取来源数组的内容
    char* dest = result;    //dest用于复制内容到结果数组
    int sum = 0;           //统计数组总数

    for ( ; *read != '\0'; read++) {
        sum +=1;
    }
    read = source;  // 统计完长度后，回到源字符串开头

    //实际需要复制的字符比指定数量少的时候
    if (sum <= count) {
        for (int i = 0; i < sum; i++) {
            *dest = *read;
            read++;
            dest++;
        }

        for (int j = sum; j < count; j++) {
            *dest = '\0';
            dest++;
        }
        return result;
    }

    //实际需要复制的字符比指定数量多的时候
    if (sum > count) {
        for (int i = 0; i < count; i++) {
            *dest = *read;
            read++;
            dest++;
        }
        return  result;
    }
}