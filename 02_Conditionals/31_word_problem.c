/*
===============================================================
                Second Greatest Number
Write a C program to find the second greatest number 
among three different integers entered by the user.
Requirements:
1. Take three integers as input: a, b, and c.
2. Assume all three numbers are different.
3. Use if-else statements to find the second greatest number.
4. Do not use arrays or sorting.
===============================================================
*/

#include <stdio.h>
int main(){
    int a , b , c ;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter first number:");
    scanf("%d", &b);
    printf("Enter first number:");
    scanf("%d", &c);
    if((a!=b) && (b!=c) && (c!=a)){
        if(a>b){
            if(a>c){
                if(b>c){
                    printf("%d", b);
                }
                else{
                    printf("%d", c);
                }
            }
            else{
                printf("%d", a);
            }
        }
        else{
            if(b>c){
                if(a>c){
                    printf("%d", a);
                }
                else{
                    printf("%d", c);
                }
            }
            else{
                printf("%d", b);
            }
        }
    }
    else{
        printf("All the integers should be different.");
    }
    return 0;
}