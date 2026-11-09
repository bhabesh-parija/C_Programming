/*
===============================================================
1. Takes an integer n from the user.
2. Prints numbers from 1 to n using a for loop.
3. Prints "Even" for even numbers.
4. Prints "Odd" for odd numbers.
5. Counts how many even and odd numbers are present.
6. Prints the total even and odd counts at the end.
===============================================================
*/

#include <stdio.h>
int main(){
    int n ;
    printf("Enter the number:");
    scanf("%d", &n);
    int a = 0 ;
    int b = 0;
    for ( int i = 1 ; i <= n ; i++ ){
        if ( i % 2 == 0 ){
            printf(" Even \n");
            a = a + 1 ;
        }
        else {
            printf(" Odd \n");
            b = b + 1 ;
        }
    }
    printf("%d\n", a);
    printf("%d\n", b);
    return 0 ;
}