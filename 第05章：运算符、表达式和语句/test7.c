#include <stdio.h>
double cube (double input ) ;    //声明一个函数

int main(void) {
    double input , output;       //在main函数中定义

    printf(" please input a double datum :");
    scanf ("%lf" , &input) ;

    output = cube(input) ;     //调用函数
    printf("%.3f\n" , output) ;

    return 0 ;
}

double cube (double input )
{
    return input * input *input ;    //接收传入的input，计算它的立方值，然后把计算结果返回给调用这个函数的地方
}


//说明：这种函数并不是严格从上到下来执行的，先计算input，再返回给main