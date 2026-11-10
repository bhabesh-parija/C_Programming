/*
===============================================================
                Number Classification
1. Takes two integers n and m from the user.
2. Uses a for loop to print all numbers from 1 to n.
3. For every number:
   - If it's divisible by 2:
     - Check if it's divisible by 4.
       - If yes, print "Divisible by 2 and 4".
       - Otherwise, print "Divisible by 2 only".
   - Otherwise:
     - Check if it's divisible by 3.
       - If yes, print "Odd and divisible by 3".
       - Otherwise, print "Odd and not divisible by 3".
4. If the number is equal to m, print "Special Number" as well.
===============================================================
*/


#include <stdio.h>
int main() {
    int n, m;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Enter the special number: ");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++) {

        if (i % 2 == 0) {

            if (i % 4 == 0) {
                printf("%d - Divisible by 2 and 4.\n", i);
            }
            else {
                printf("%d - Divisible by 2 only.\n", i);
            }

            if (m == i) {
                printf("Special Number.\n");
            }
        }

        else {
            if (i % 3 == 0) {
                printf("%d - Odd and divisible by 3.\n", i);
            }
            else {
                printf("%d - Odd and not divisible by 3.\n", i);
            }

            if (m == i) {
                printf("Special Number.\n");
            }
        }
    }

    return 0;
}
