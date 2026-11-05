/*
===============================================================
     Positive, Negative or Zero
    Take an integer as input and determine whether it
    is positive, negative or zero.
===============================================================
*/

#include <stdio.h>
int main(){
    int num1;
    printf("Enter a number:");
    scanf("%d", &num1);
    if (num1>0){
        printf("The number is positive.");
    }
    else if (num1==0){
        printf("The number is 0.");
    }
    else{
        printf("The number is negative.");
    }
    return 0;
}