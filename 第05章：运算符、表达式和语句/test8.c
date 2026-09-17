#include <stdio.h>
int main (void) {

    int integer , operand ;
    printf("Enter an integer to serve as the second operand :") ;
    scanf ("%d" , &integer) ;

    printf("Now enter the first operand :") ;
    scanf ("%d" , &operand) ;

    while (operand > 0 ) {
        int result = operand % integer ;

        printf("%d %% %d is %d\n" , operand , integer , result) ;
        printf("Enter the next number for first operand(<=0 to quit ): ");
        scanf ("%d" , &operand) ;
    }
    return 0;
}
