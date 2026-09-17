#include <stdio.h>
int main() {
    char name [100];
    float height;

    printf("please write your name：");
    scanf("%s",name);  //name为数组，不需要取地址符

    printf("please write your height\n");
    scanf("%f",&height);

    height = height/100 ;
    printf("%s , you are %.3f meter tall\n", name , height);

    return 0;

}
