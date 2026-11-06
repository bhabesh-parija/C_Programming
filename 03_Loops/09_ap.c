/*
===============================================================
          Display this AP - 4,7,10,13,16.. upto ‘n’ terms
===============================================================
*/

#include <stdio.h>
int main(){
    int a ;
    printf("Enter the number:");
    scanf("%d", &a);
    for ( int i = 4 ; i <= (3*a) + 1 ; i = i + 3){
        printf("%d 10", i);
    }
    return 0;
}