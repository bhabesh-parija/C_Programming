/*
===============================================================
Write a program to print all Armstrong numbers 
===============================================================
*/

#include <stdio.h>

int main() {
    int num, originalNum, remainder, digits = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // 1. Count the number of digits using a for loop
    for (int temp = num; temp != 0; temp /= 10) {
        digits++;
    }

    // Edge case for 0
    if (num == 0) {
        digits = 1;
    }

    // 2. Calculate the sum of powers using nested for loops
    for (int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        
        int power = 1;
        // Inner for loop multiplies 'remainder' by itself 'digits' times
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }
        
        result += power;
    }

    // 3. Check if the sum matches the original number using conditionals
    if (result == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}