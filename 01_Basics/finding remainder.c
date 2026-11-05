#include <stdio.h>
int main(){
    int divident, divisor , remainder, quotient;// divident > divisor

    printf("Enter the divident:");
    scanf("%d", &divident);

    printf("Enter the divisor:");
    scanf("%d", &divisor);
    
    quotient = divident / divisor;
    
    remainder = divident - (quotient * divisor);
    
    printf("Remainder: %d\n", remainder);

    return 0;
}