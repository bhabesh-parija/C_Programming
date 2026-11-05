#include <stdio.h>
int main(){
    int divident , divisor , quotinent , remainder ;// divident > divisor and divisor != 0
    printf("Enter the divident :");
    scanf("%d", &divident);
    printf("Enter the Divisor:");
    scanf("%d", &divisor);
    quotinent=divident/divisor;
    remainder = divident - (divisor*quotinent) ;
    printf("The remainder is : %d", remainder);
    return 0;
}