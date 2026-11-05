/*
===============================================================
    Take positive integer input and tell if 
    it is divisible by 5 and 3.
    (using nested conditionals)
===============================================================
*/

#include <stdio.h>
int main(){
    int num1;
    printf("Enter the number:");
    scanf("%d", &num1);
    if (num1%3==0){
        if (num1%5==0){
            printf("The number is divisible by 5 and 3.");
        }
        else{
            printf("The number is divisible by 3 but not by 5.");
        }
    }
    else if(num1%5==0){
        if (num1%3!=0){
            printf("The number is divisible by 5 but not by 3.");
        }
    }
    else{
        printf("The number is not divisible by 3 and 5");
    }
    return 0;
}