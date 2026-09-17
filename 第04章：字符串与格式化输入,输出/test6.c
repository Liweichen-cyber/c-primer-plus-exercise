#include <stdio.h>
#include <string.h>
int main() {
    char first_name [100] ;
    char family_name [100] ;

    printf("please write your first name:");
    scanf("%s" , first_name);

    printf("please write your family name:");
    scanf("%s" , family_name);

    int width1 = strlen(first_name);
    int width2 = strlen(family_name);

    printf("%s %s\n %*d %*d\n ",first_name , family_name , width1-1 , width1 , width2, width2);

    printf("%s %s\n %-*d %-*d\n ",first_name , family_name , width1 , width1 , width2, width2);



    return 0 ;
}
