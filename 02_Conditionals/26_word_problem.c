/*
===============================================================
                Last Digit Checker
    Take an integer as input and determine whether its last 
    digit is even or odd.
===============================================================
*/

#include<stdio.h>
int main(){
    int num1;
    printf("Enter the Number:");
    scanf("%d", &num1);
    num1%2==0 ? printf("Last digit is even.") : printf("Last digit is odd.");
    return 0;
}