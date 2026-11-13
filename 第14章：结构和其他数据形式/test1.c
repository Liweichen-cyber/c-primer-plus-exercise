#include <stdio.h>
#include <string.h>

typedef struct {
    char name[10];
    char abbrev[4];
    int days;
    int monumb;
} Month;

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

int calculate_days(void);
int main(void) {

    printf("The sum days is %d", calculate_days());
    return 0;
}

int calculate_days(void) {
    char month_choice[10];
    printf("Input the name of the month you choose:");
    scanf("%9s", month_choice);

    int sum = 0;
    int i;

    for (i = 0; i < 12; i++) {
        if (strcmp(month_choice, months[i].name) == 0)
            break;

        if (i == 11) {
            printf("Invalid input\n");
            return 0;
        }
    }

    //数组下标从0开始，月份编号从1开始
    for (int j = 0; j < i+1; j++) {
        sum += months[j].days;
    }

    return sum;
}
