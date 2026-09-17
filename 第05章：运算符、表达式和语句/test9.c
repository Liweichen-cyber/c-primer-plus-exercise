#include <stdio.h>

void Temperature (double fahrenheit) ;


int main(void)
{
    double fahrenheit ;
    printf("Please input a fahrenheit temperatrue :");
    //scanf("%lf" , &fahrenheit);
    //Temperature(fahrenheit);
    // scanf写在while的条件中：先读取用户输入，scanf返回成功读取的数据数量，
    // 再判断返回值是否等于1；等于1说明成功读取一个double，进入循环


    while (scanf("%lf", &fahrenheit) == 1) {
        Temperature(fahrenheit);
        printf("Please input another fahrenheit temperatrue :");
        //scanf("%lf" , &fahrenheit);     这里不需要再scanf了，不然用户又要输入一次

    }
    return 0;


}

void Temperature (double fahrenheit) {
    double celsius , kelvin ;
    const double CELSIUS_FACTOR = 5.0 / 9.0;
    const double FAHRENHEIT_OFFSET = 32.0;
    const double KELVIN_OFFSET = 273.16;

    printf("The fahrenheit temperature is %.2f\n" , fahrenheit );
    printf("The celsius temperature is %.2f\n" , CELSIUS_FACTOR * (fahrenheit - FAHRENHEIT_OFFSET)) ;

    celsius = CELSIUS_FACTOR * (fahrenheit - FAHRENHEIT_OFFSET) ;
    kelvin =  celsius + KELVIN_OFFSET ;
    printf("The kelvin temperature is %.2f\n" , kelvin) ;

}
