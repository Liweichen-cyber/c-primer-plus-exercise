/*
 * 第07章 练习3 优化版（test3_optimized.c）
 * ------------------------------------------------------------------
 * 与 test3.c（第一版）的关系：
 *   - 功能完全相同：统计输入的奇/偶数个数与总和，输出各自平均值；
 *   - 区别：
 *     1) 奇/偶平均是两件独立的事 → 用两个独立 if 代替原来的三分支嵌套，
 *        逻辑只出现一次，删掉了重复代码；
 *     2) 修复边界：第一个输入就是 0 时（一个数都没统计），
 *        旧版会 0/0 输出 nan，本版两个 if 各查各的，天然覆盖；
 *   - 原版 test3.c 保留，本文件作为优化示例。
 */

#include <stdio.h>

int main(void) {
    int number;
    int odd_count = 0, even_count = 0;
    int odd_sum = 0, even_sum = 0;

    printf("Please enter numbers (0 to stop): ");
    scanf("%d", &number);

    while (number != 0) {
        if (number % 2 != 0) {      /* 奇数 */
            odd_sum += number;
            odd_count++;
        } else {                    /* 偶数 */
            even_sum += number;
            even_count++;
        }
        printf("Put another number (0 to stop): ");
        scanf("%d", &number);
    }

    if (odd_count == 0)
        printf("You have input 0 odd numbers, the average of them is 0\n");
    else
        printf("You have input %d odd numbers, the average of them is %f\n",
               odd_count, (double)odd_sum / odd_count);

    if (even_count == 0)
        printf("You have input 0 even numbers, the average of them is 0\n");
    else
        printf("You have input %d even numbers, the average of them is %f\n",
               even_count, (double)even_sum / even_count);

    return 0;
}