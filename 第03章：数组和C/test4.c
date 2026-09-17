#include<stdio.h>
int main() {
    double value;   //小数用double不用int
    printf("enter a floating-point value:");
    scanf("%lf",&value);

    printf("fixed point notation:%f\n",value);  //print用f，scanf才用lf
    printf("exponential notation:%e\n",value);
    printf("p notation:%a\n",value);

    return 0;
}
