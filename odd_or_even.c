#include <stdio.h>
#include <stdbool.h>

/*
Description: this program checks if a number is odd or even

Author: Haseeb lateef

Date: 24/09/24
*/

#include <stdio.h>
#include <stdbool.h>

int main(){

    int num;
    int div= 2;


    printf("WELCOME TO THE ODD OR EVEN CALCULATOR");

    printf("\n\n\tENTER A NUMBER:");
    scanf("%d", &num);

     int result=num%div; //finds the mod of the users input

    (result>0) ? printf("Your number is odd") : printf("Your number is even");


    return 0;
}