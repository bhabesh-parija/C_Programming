/*
===============================================================
           Display this AP - 100,97,94,..upto 
           all terms which are positive.
===============================================================
*/

#include <stdio.h>
int main(){
    int n ;
    printf("Enter the number:");
    scanf("%d", &n);
    int a = 100 ;
    for ( int i = 1 ; i <= n ; i++){
        if (a>0){
            printf("%d ", a);
            a = a - 3 ;
        }
    }
    return 0;
}