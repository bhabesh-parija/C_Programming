#include <stdio.h>

int main(void) {
    float number;
    int wholePart;
    float fractionalPart;

    printf("Enter a number: ");

    if (scanf("%f", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    wholePart = (int)number;
    fractionalPart = number - wholePart;

    printf("Fractional part: %f\n", fractionalPart);

    return 0;
}
