/*
===============================================================
Write a C program to print all the numbers from 1 to 50 
that are divisible by both 3 and 5 using a for loop and and 
if condition.
Requirements:
1. Use a for loop to iterate from 1 to 50.
2. Use an if condition to check whether a number is divisible 
by both 3 and 5.
3. Print only the numbers that satisfy the condition.
===============================================================
*/


#include<stdio.h>
int main(){
    for ( int i = 1 ; i <= 50 ; i++ ){
        if ( i % 3 == 0 ){
            if ( i % 5 == 0 ){
                printf("%d\n", i);
            }
        }
    }
    return 0 ;
}