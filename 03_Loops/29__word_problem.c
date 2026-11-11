/*
===============================================================
            Number Guessing Game
How the game works
1. Set a secret number (for example, 25).
2. Give the user 5 attempts.
3. Ask the user to guess the number.
4. If the guess is greater than the secret number, print 
"Too High".
5. If the guess is smaller, print "Too Low".
6. If the guess is correct, print "Correct Guess!".
===============================================================
*/


#include <stdio.h>

int main() {
    int secret_number = 106 ;
    int a = 0;
    int i;

    for (i = 1; i <= 5; i++) {
        int guess_number;

        printf("Guess the number: ");
        scanf("%d", &guess_number);

        if (guess_number == secret_number) {
            a = 1;
            break;
        }
        else {
            printf("Try again! You have %d attempts left.\n", 5 - i);
        }
    }

    if (a == 1) {
        printf("You Won in %d attempts!", i);
    }
    else {
        printf("Better luck next time!");
    }

    return 0;
}
