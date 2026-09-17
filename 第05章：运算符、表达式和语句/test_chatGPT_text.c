#include <stdio.h>

int Compare(int guess, int target) ;

int main (void) {
    const  int target = 37 ;
    int  guess ,output;

    while (1) {
        printf("Please input an integer :") ;
        scanf ("%d" , &guess);
        output = Compare(guess , target) ;

        if (output == 0) {
            break ;
        }
        else if (output == -1) {
            printf("Too small! Try another one :");
        }
        else {
            printf("Too big! Try another one :");
        }

    }
    printf("Congratulate!") ;
    return 0;
}


    int Compare(int guess , int target)  {
        if (guess == target) {
            return 0 ;
        }else if (guess < target) {
            return -1;
        }else {
            return 1;
        }
}


