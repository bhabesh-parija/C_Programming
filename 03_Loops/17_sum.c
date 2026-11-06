/*
==============================================================================================================
                        Find the sum of numbers from 1 to N.
================================================================================================================
*/

#include <stdio.h>
int main(){
    int N ;
    printf("Enter the number:");
    scanf("%d", &N);
    int a = 0 ;
    for ( int i = 1 ; i <= N ; i++){
        a = a + i ;
    }
    printf(" Sum of %d numbers is : %d", N , a );
    return 0;
}