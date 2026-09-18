#include <stdio.h>
int main (void) {
    int lower ,upper ;

    printf("Enter the lower and upper limits:") ;
    scanf("%d %d", &lower , &upper) ;
    printf ("number  square  cube\n");

    for (int i = lower ; i <= upper ; i++) {
        int number = i , square = i*i , cube = i*i*i;
        //printf ("number  square  cube\n");
        printf("%d  %d  %d\n" , number ,square ,cube);
    }
    return 0;
}

