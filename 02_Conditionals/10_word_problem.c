/*
===============================================================
       Take 3 numbers input and tell if they can be 
       the sides of a triangle.
===============================================================
*/

#include <stdio.h>
int main(){
    int num1 , num2 , num3 ;
    printf("Enter the first side of the triangle:");
    scanf("%d", &num1);
    printf("Enter the second side of the triangle:");
    scanf("%d", &num2);
    printf("Enter the third side of the triangle:");
    scanf("%d", &num3);
    if(num1+num2>num3 && num1+num3>num2 && num2+num3>num1){
        printf("The given sides are the sides of a triangle.");
    }
    else{
        printf("The given sides are not the sides of a triangle.");
    }
    return 0;
}