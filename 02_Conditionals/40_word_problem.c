/*
===============================================================
             Cinema Ticket Booking System 
Conditions:
1. If age is below 5 → Free ticket.
2. If age is between 5 and 12 → ₹100.
3. If age is between 13 and 59 → ₹200.
4. If age is 60 or above → ₹150.
Additional conditions:
- If the customer selects a 3D movie, add ₹50.
- If the customer selects a regular movie, no extra charge.
- If age is negative, display Invalid Age.
- If movie type is neither 1 nor 2, display Invalid Movie Type.
===============================================================
*/

#include<stdio.h>
int main(){
    int age , choice ;
    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("Select movie type:\n");
    printf("1.Regular.\n");
    printf("2.3D.\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
    if ( choice == 1 ){
        if ( age <= 0 ){
            printf("Invalid Age.");
        }
        else if ( ( age > 0 ) && ( age <= 5 )){
            printf("Ticket Price: ₹0");
        }
        else if ( ( age > 5 ) && ( age <= 12 )){
            printf("Ticket Price: ₹100 ");
        }
        else if ( ( age >= 13 ) && ( age <= 59 )){
            printf("Ticket Price: ₹200 ");
        }
        else if ( ( age >= 60 )){
            printf("Ticket Price: ₹150 ");
        }
    }
    else if ( choice == 2 ){
        if ( age <= 0 ){
            printf("Invalid Age.");
        }
        else if ( ( age > 0 ) && ( age <= 5 )){
            printf("Ticket Price: ₹50");
        }
        else if ( ( age > 5 ) && ( age <= 12 )){
            printf("Ticket Price: ₹150 ");
        }
        else if ( ( age >= 13 ) && ( age <= 59 )){
            printf("Ticket Price: ₹250 ");
        }
        else if ( ( age >= 60 )){
            printf("Ticket Price: ₹200 ");
        }
    }
    else{
        printf("Invalid Movie Type.");
    }
    return 0;
}
