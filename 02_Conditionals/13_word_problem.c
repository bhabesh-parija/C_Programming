/*
===============================================================
    Take positive integer input and tell if it is
     divisible by 5 or 3 but not divisible by 15.
===============================================================
*/

#include <stdio.h>
int main(){
    int num1 ; //num1>0
    printf("Enter the number:");
    scanf("%d", &num1);
    if (num1%15!=0){
        if (num1%3==0){
            if(num1%5==0){
                printf("The number is divisible by 3 and 5 but not by 15.");
            }
            else{
                printf("The number is divisible by 3 but not by 5 and 15");
            }
        }
        else if(num1%5==0){
            if (num1%3==0){
                printf("The number is divisible by 3 and 5 but not by 15.");
            }
            else{
                printf("The number is divisible by 5 but not by 3 and 15.");
            }
        }
        else{
            printf("The number is not divisble by 3 , 5 and 15");
        }
    }
    else if(num1%15==0){
        if(num1%3==0){
            if(num1%5==0){
                printf("The number is divisible by 3 , 5 and 15.");
            }
            else{
                printf("The number is divisible by 3 and 15 but not; by 5.");
            }
        }
        else if(num1%5==0){
            if(num1%3==0){
                printf("The number is divisible by 3 , 5 and 15.");
            }
            else{
                printf("The number is divisible by 5 and 15 but not by 3.");
            }
        } 
    }
    
    return 0;
}