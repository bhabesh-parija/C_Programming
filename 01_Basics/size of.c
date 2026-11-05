/*
    Demonstrating integer values and their memory sizes.
*/

#include <stdio.h>
#include <limits.h>

int main(void) {
    int a = 32783;

    /*
       A typical 16-bit signed short can store values
       from -32768 to 32767. 32000 is within that range.
       The exact limits are available through limits.h.
    */
    short b = 32000;

    printf("Integer value: %d\n", a);
    printf("Short integer value: %hd\n", b);

    printf("\nSize of int: %zu byte(s)\n", sizeof(a));
    printf("Size of short: %zu byte(s)\n", sizeof(b));

    printf("\nMaximum value of short: %hd\n", SHRT_MAX);

    return 0;
}
