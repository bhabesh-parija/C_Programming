/*
===============================================================
    Take a single character as input and 
    determine whether it is:
    1. Uppercase alphabet
    2. Lowercase alphabet
    3. Digit
    4. Special character
===============================================================
*/

#include <stdio.h>
int main(){
    char character ;
    printf("Enter the character u want:");
    scanf("%c", &character);
    if (character>=65 && character<=90){
        printf("Uppercase alphabet");
    }
    else if (character>=97 && character<=122){
        printf("Lowercase alphabet");
    }
    else if (character>=48 && character<=57){
        printf("Digit");
    }
    else{
        printf("Special character");
    }
    return 0;
}
