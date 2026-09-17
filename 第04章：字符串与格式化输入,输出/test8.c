#include <stdio.h>;
#define gallon_to_litre 3.785
#define mile_to_km 1.609

int main(void) {
    float distance;
    float gas;

    printf("please input your travel distance (unit:miles):");
    scanf("%f", &distance);

    printf("please input your gas level (unit:gallon):");
    scanf("%f",&gas);

    float volume = (gas * gallon_to_litre) / (distance * mile_to_km) *100 ;
    distance = distance / gas ;

    printf("In America , your car can run %.1f miles per gallon\n", distance);
    printf("In Europe , your car consume %.1f litre  per 100 kilometers\n" , volume);


    return 0;
}
