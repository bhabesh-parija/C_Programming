/*
===============================================================
                Triangle Classification
Take three sides a, b, and c as input.
1. Check whether the triangle is valid.
2. If valid, classify it as:
   - Equilateral
   - Isosceles
   - Scalene
Remember:
- All sides must be positive.
- Sum of any two sides must be greater than the third side.
===============================================================
*/

#include<stdio.h>

int main(){
    int a, b, c;

    printf("Enter the first side value:");
    scanf("%d", &a);

    printf("Enter the second side value:");
    scanf("%d", &b);

    printf("Enter the third side value:");
    scanf("%d", &c);

    if ((a > 0) && (b > 0) && (c > 0)) {

        if ((a + b) > c && (b + c) > a && (c + a) > b) {

            if ((a == b) && (b == c) && (c == a)) {
                printf("The given Triangle is Equilateral.");
            }
            else if ((a != b) && (b != c) && (a != c)) {
                printf("The given Triangle is Scalene.");
            }
            else {
                printf("The given Triangle is Isosceles.");
            }

        }
        else {
            printf("Triangle doesn't form.");
        }

    }
    else if ((a < 0) || (b < 0) || (c < 0)) {
        printf("Invalid sides");
    }
    else if ((a == 0) || (b == 0) || (c == 0)) {
        printf("No triangle formation");
    }

    return 0;
}