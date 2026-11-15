/*
===============================================================
Write a program to find the sum of all odd numbers
 between 1 and N.
===============================================================
*/

#include<stdio.h>
int main(){
    int N ;
    printf("enter the positive number:");
    scanf("%d",&N);
    int a = 0 ;
    for ( int i = 1 ; i <= N ; i++ ){
        if ( i % 2 != 0 ){
            a = a + i;        
        }
    }
    printf("The sum of N odd number is %d", a);
    return 0 ;
}
