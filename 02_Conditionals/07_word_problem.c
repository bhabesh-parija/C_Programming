/*
===============================================================
        Take positive integer input and tell if it is a three
         digit number or not.
===============================================================
*/
#include <stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num>99 && num<1000){
        printf("The number is three digit number");
    }
    else{
        printf("The number is not a three digit number");
    }
    return 0;
}