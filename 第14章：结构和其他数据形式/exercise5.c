#include <stdio.h>

// 第3题：定义月份结构体
typedef struct {
    char name[10];
    char abbrev[4];
    int days;
    int monumb;
} Month;

// 第4题：定义并初始化12个月份
Month months[12] = {
    {"January", "jan", 31, 1},
    {"February", "feb", 28, 2},
    {"March", "mar", 31, 3},
    {"April", "apr", 30, 4},
    {"May", "may", 31, 5},
    {"June", "jun", 30, 6},
    {"July", "jul", 31, 7},
    {"August", "aug", 31, 8},
    {"September", "sep", 30, 9},
    {"October", "oct", 31, 10},
    {"November", "nov", 30, 11},
    {"December", "dec", 31, 12}
};

// 第5题：在这里编写计算累计天数的函数
int calculate_days(void);
int main(void) {

    printf("The sum days is %d", calculate_days());
    return 0;
}

int calculate_days(void) {
    int month_option;
    int sum = 0;
    printf("Input the monumb of a month:");
    scanf("%d", &month_option);

    for (int i = 0; i < month_option; i++) {
        sum += months[i].days;
    }
    return sum;
}