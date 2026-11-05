/*
===============================================================
        Take positive integer input and tell if 
        it is divisible by 5 and 3.
===============================================================
*/

#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num%5==0 && num%3==0){
        printf("The number is divisible by 5 and 3");
    }
    else if (num%5==0){
        printf("The number is divisible by 5 but not by 3");
    }
    else if (num%3==0){
        printf("The number is divisible by 3 but not by 5");
    }
    else{
        printf("The number is not divisible by 5 or by 3");
    }
    return 0;
}