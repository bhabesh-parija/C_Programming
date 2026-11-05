/*
===============================================================
        Take 4 positive integers input and
        print the greatest of them.
===============================================================
*/

#include <stdio.h>
int main(){
    int num1 , num2 , num3 , num4 ;
    printf("Enter the First number:");
    scanf("%d", &num1);
    printf("Enter the Second number:");
    scanf("%d", &num2);
    printf("Enter the Third number:");
    scanf("%d", &num3);
    printf("Enter the Fourth number:");
    scanf("%d", &num4);
    if(num1>num2 && num1>num3 && num1>num4){
        printf("%d", num1);
    }
    else if(num2>num1 && num2>num3 && num2>num4){
        printf("%d", num2);
    }
    else if(num3>num1 && num3>num2 && num3>num4){
        printf("%d", num3);
    }
    else{
        printf("%d", num4);
    }
    return 0;

}