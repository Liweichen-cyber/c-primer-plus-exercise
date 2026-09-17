#include <stdio.h>
int main() {
    int age;
    printf("please write your age:\n");
    scanf("%d",&age);

    double time = age *3.156e7;
    printf("your age is %f seconds\n", time);

    return 0;
}
