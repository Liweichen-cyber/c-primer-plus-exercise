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
    int Fib_previous1 = 1 ;       //靠前的一项（小）
    int Fib_previous2 = 1 ;       //靠后的一项（大）
    int Fib_current ;             //保存当前计算结果
    int i ;

    if (Fibonacci_number == 1) {
        return 1 ;
    }

    else if (Fibonacci_number == 2) {
        return 1 ;
    }

    else {
        for (i = 3 ; i <= Fibonacci_number ; i ++) {
            Fib_current = Fib_previous1 + Fib_previous2 ;
            Fib_previous1 = Fib_previous2 ;
            Fib_previous2 = Fib_current ;
        }
        return Fib_current ;


    }
}