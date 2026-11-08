/*
===============================================================
                Library Fine Calculator
Calculate the fine based on these conditions:
- 1–5 days late → ₹2 per day.
- 6–10 days late → ₹5 per day.
- 11–20 days late → ₹10 per day.
- More than 20 days → ₹15 per day.
Additional conditions:
1. If the number of days is negative, display "Invalid Input".
2. If the delay exceeds 30 days, display "Membership Suspended"
3. Otherwise, calculate and display the total fine.
===============================================================
*/

#include <stdio.h>
int main(){
    int days ;
    printf("Enter late days:");
    scanf("%d", &days);
    if ( days >= 0 ){
         if (days == 0) {
            printf("No Fine.");
        }
        else if (( days >= 1 ) && ( days <= 5 )){
                printf("Fine amount : %d" , ( days * 2 ) );
        }
        else if (( days >= 6 ) && ( days <= 10 )){
            printf("Fine amount : %d" , ( days * 5 ) );
        }
        else if (( days >= 11 ) && ( days <= 20 )){
            printf("Fine amount : %d" , ( days * 10 ) );
        }
        else if (( days >= 21 ) && ( days <= 30)){
            printf("Fine amount : %d", (days * 15 ) );
        }
        else{
            printf("Membership Suspended");
        }
    }
    
    else{
        printf("Invalid Input.");
    }
    return 0;

}