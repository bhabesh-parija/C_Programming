/*
===============================================================
            Three-Number Relationship
Determine their relationship using conditional statements.
Conditions:
1. If all three numbers are equal, print All numbers are equal.
2. If exactly two numbers are equal, print which two are equal.
3. If all three numbers are different, print All numbers are 
    different.
===============================================================
*/

#include<stdio.h>
int main(){
    int a , b , c ;
    printf("Enter the first number:");
    scanf("%d", &a);    
    printf("Enter the second number:");
    scanf("%d", &b);
    printf("Enter the third number:");
    scanf("%d", &c);
    if (a==b){
        if(a==c){
            printf("All Number are equal.");
        }
        else{
            printf("First and Second number are equal");
        }
    }
    else if(a==c){
        if (a==b){
            printf("All numbers are equal.");
        }
        else{
            printf("First and Third number are equal");
        }
    }
    else if(b==c){
        printf("Second and Third number are equal");
    }
    else{
        printf("All numbers are different.");
    }
    return 0;
}