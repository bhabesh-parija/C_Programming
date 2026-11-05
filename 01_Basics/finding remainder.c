#include <stdio.h>

int main(void) {
    int dividend, divisor, remainder;

    printf("Enter the dividend: ");

    if (scanf("%d", &dividend) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the divisor: ");

    if (scanf("%d", &divisor) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (divisor == 0) {
        printf("A divisor cannot be zero.\n");
        return 1;
    }

    remainder = dividend % divisor;

    printf("Remainder: %d\n", remainder);

    return 0;
}
