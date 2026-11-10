// 本题只需逐字符统计，不必保存字符串，用getchar循环读到EOF后统一输出。
// fgets通常一次读一行（保留换行符）；最多读入数组容量减1个字符，末尾补'\0'。
// 一行太长时，剩余内容留给下次读取；循环使用fgets也能统计多行，只需保留累计数量和单词状态。
#include <stdio.h>
#include <ctype.h>

void calculate(void);

int main(void) {
    calculate();

    return 0;
}

void calculate(void) {
    int ch;
    int in_word = 0;                     // 状态标记：0表示在单词外，1表示在单词内

    int calculate_words = 0;             //判断是否为单词
    int calculate_capital_letter = 0;    //判断是否为大写字母
    int calculate_small_letter = 0;      //判断是否为小写字母
    int calculate_punctuation = 0;       //判断是否为标点
    int calculate_number = 0;            //判断是否为数字

    while ((ch = getchar()) != EOF) {

        if (isupper(ch)) {
            calculate_capital_letter++;
        }

        if (islower(ch)) {
            calculate_small_letter++;
        }

        if (ispunct(ch)) {
            calculate_punctuation++;
        }

        if (isdigit(ch)) {
            calculate_number++;
        }

        // 统计单词
        if (isspace(ch)) {
            in_word = 0;
        }

        if (!isspace(ch) && in_word == 0) {
            calculate_words++;
            in_word = 1;
        }
    }

    printf("Number of words: %d\n", calculate_words);
    printf("Number of uppercase letters: %d\n", calculate_capital_letter);
    printf("Number of lowercase letters: %d\n", calculate_small_letter);
    printf("Number of punctuation marks: %d\n", calculate_punctuation);
    printf("Number of digits: %d\n", calculate_number);
}
