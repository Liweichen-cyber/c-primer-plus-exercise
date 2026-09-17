#include <stdio.h>
int main(void) {

    int second;
    printf("please input a number you like:");
    scanf("%d", &second);

    while (second >0)
    {
        int hours = second/60;
        int seconds = second - (hours *60);

        printf("the time is %d hours %d seconds\n" , hours ,seconds );
        printf("please input a number you like:");
        scanf("%d",&second) ;

    }
    return 0 ;
}

