#include <stdio.h>
int Fibonacci (int Fibonacci_number) ;
int main(void) {
    int Fibonacci_number ;

    printf("Please input a number and I can caculate its Fibonacci number:") ;
    scanf("%d" , &Fibonacci_number) ;
    printf("%d" , Fibonacci(Fibonacci_number)) ;
    return 0;
}

int Fibonacci (int Fibonacci_number) {
    if (Fibonacci_number == 1) {
        return 1 ;
    }

    else if (Fibonacci_number == 2) {
        return 1 ;
    }

    else {
        return Fibonacci((Fibonacci_number - 1)) + Fibonacci((Fibonacci_number - 2));
    }
}
