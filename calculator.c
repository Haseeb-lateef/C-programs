/*
Description: This program is a simplified calculator

Author: Haseeb Lateef

date:26/09/24
*/



#include <stdio.h>

int main(){

    printf("\t-CALCULATOR-");

    float num1;
    float num2;
    char opp;

do{


    printf("\n-CHOOSE A OPERATION(+,-,*,/,q): "); //user inputs opp and its stored
    scanf("%c", &opp);

    printf("-ENTER A NUM: ");
    scanf("%f", &num1);

    printf("-ENTER ANOTHER NUM: ");
    scanf("%f", &num2);

    float result;


    switch(opp){
        case '+':
            result=num1+num2;
            printf("THE SUM IS %f", result);
            break;
        
        case '-':
            result = num1 - num2;
            printf("THE SUM IS %f", result);
            break;

        case '*':
            result = num1 * num2;
            printf("THE SUM IS %f", result);
            break;

        case '/':
    
            result = num1 / num2;
            printf("THE SUM IS %f", result);
            break; 
    
    default:

        if(opp == 'q'){
                
            printf("YOU HAVE EXITED");
        }
        else
            printf("INVALID");
    }

}while (opp!='q');


    return 0;
}