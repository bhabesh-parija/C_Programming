/*
==============================================================
                    Number Classifier
Print numbers from 1 to 50.
If a number is divisible by both 3 and 5, print "FizzBuzz".
If a number is divisible by 3, print "Fizz".
If a number is divisible by 5, print "Buzz".
Otherwise, print the number itself.
===============================================================
*/

#include<stdio.h>
int main(){
    for ( int i = 1 ; i <= 50 ; i++ ){
        if ( i % 3 == 0 ){
            if ( i % 5 == 0 ){
                printf("FizzBuzz \n");
            }
            else{
                printf("Fizz \n");
            }
        }
        else if ( i % 5 == 0 ){
            printf("Buzz \n");
        }
        else{
            printf("%d \n", i);
        }
    }
    return 0;
}