/*
===============================================================
                        Date Validator
Write a C program to check whether a 
given date is valid or invalid.
Requirements:
Take three integer inputs:
day
month
year
Check whether the month is between 1 and 12.
Check the number of days allowed in that month.
Handle leap years correctly.
Leap Year Rule:
A year is a leap year if:
It is divisible by 400, OR
It is divisible by 4 but not divisible by 100.
===============================================================
*/


#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter the day:");
    scanf("%d", &day);

    printf("Enter the month:");
    scanf("%d", &month);

    printf("Enter the year:");
    scanf("%d", &year);

    if (year > 0) {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {

            if (month > 0 && month < 13) {

                if (month == 1 || month == 3 || month == 5 ||
                    month == 7 || month == 8 || month == 10 || month == 12) {

                    if (day > 0 && day <= 31) {
                        printf("Valid");
                    }
                    else {
                        printf("Invalid.");
                    }
                }
                else if (month == 2) {
                    if (day > 0 && day <= 29) {
                        printf("Valid");
                    }
                    else {
                        printf("Invalid.");
                    }
                }
                else {
                    if (day > 0 && day <= 30) {
                        printf("Valid");
                    }
                    else {
                        printf("Invalid.");
                    }
                }
            }
            else {
                printf("Invalid.");
            }
        }
        else {
            if (month > 0 && month < 13) {

                if (month == 1 || month == 3 || month == 5 ||
                    month == 7 || month == 8 || month == 10 || month == 12) {

                    if (day > 0 && day <= 31) {
                        printf("Valid");
                    }
                    else {
                        printf("Invalid.");
                    }
                }
                else if (month == 2) {
                    if (day > 0 && day <= 28) {
                        printf("Valid");
                    }
                    else {
                        printf("Invalid.");
                    }
                }
                else {
                    if (day > 0 && day <= 30) {
                        printf("Valid");
                    }
                    else {
                        printf("Invalid.");
                    }
                }
            }
            else {
                printf("Invalid.");
            }
        }
    }
    else {
        printf("Invalid year.");
    }

    return 0;
}
