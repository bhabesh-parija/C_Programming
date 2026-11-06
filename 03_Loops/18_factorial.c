/*
==============================================================================================================
                    Find the factorial of a given number
================================================================================================================
*/

#include <stdio.h>
int main(){
    int n ;
    printf("Enter the given number:");
    scanf("%d", &n);
    int a = 1 ;
    for ( int i = 1 ; i <= n ; i++){
        if ( n == 1 || n == 0){
            a = 1 ;
        }
        else{
            a = a * i ;
        }
    }
    printf("The factorial of a given number %d is : %d", n , a );
    return 0 ;
}