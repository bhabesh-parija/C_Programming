/*
===============================================================
     Divisibility Checker
    Take an integer and check whether it is:
    1. Divisible by both 2 and 3.
    2. Divisible by only 2.
    3. Divisible by only 3.
    4. Divisible by neither.
===============================================================
*/

#include<stdio.h>
int main(){
    int num1;
    printf("Enter a number:");
    scanf("%d", &num1);
    if(num1%2==0){
        if(num1%3==0){
            printf("Divisible by both 2 and 3.");
        }
        else{
            printf("Divisible by only 2.");
        }
    }
    else if(num1%3==0){
        printf("Divisible by only 3.");
    }
    else{
        printf(" Divisible by neither.");
    }
    return 0;
}