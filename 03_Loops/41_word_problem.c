/*
===============================================================
                Online Shopping Discount Calculator
Discount rules:
- Amount below ₹1,000 → No discount.
- Amount from ₹1,000 to ₹2,999 → 5% discount.
- Amount from ₹3,000 to ₹4,999 → 10% discount.
- Amount from ₹5,000 to ₹9,999 → 15% discount.
- Amount ₹10,000 or above → 20% discount.
Additional conditions:
1. If the customer has a membership card, give an additional 
5% discount.
2. If the shopping amount is negative, print "Invalid Amount".
3. The total discount must not exceed 25%.
===============================================================
*/

#include <stdio.h>
int main(){
    float shopping_amount ;
    int membership ;
    printf("Enter the shopping amount:");
    scanf("%f", &shopping_amount);
    printf("Do you have membership?");
    scanf("%d", &membership);
    if ( shopping_amount < 0 ){
        printf("Invalid Amount");
    }
    else{
        if ( membership == 0 ) {
            if ( shopping_amount < 1000 ){
                printf("Discount : 0\n");
                printf("Final Amount: %f", shopping_amount );
            }
            else if ( (shopping_amount >= 1000) && (shopping_amount <= 2999)){
                printf("Discount: 5");
                printf("Final Amount: %f", (shopping_amount- (shopping_amount * 0.05)) );                
            }
            else if ( (shopping_amount >= 3000) && (shopping_amount <= 4999)){
                printf("Discount: 10");
                printf("Final Amount: %f", (shopping_amount- (shopping_amount * 0.1)) );                
            }
            else if ( (shopping_amount >= 5000) && (shopping_amount <= 9999)){
                printf("Discount: 15");
                printf("Final Amount: %f", (shopping_amount- (shopping_amount * 0.15)) );                
            }
            else{
                printf("Discount: 20");
                printf("Final Amount: %f", (shopping_amount- (shopping_amount * 0.2)) ); 
            }
        }
        else if ( membership == 1 ){
            if ( shopping_amount < 1000 ){
                printf("Discount : 5\n");
                printf("Final Amount: %f", (shopping_amount- (shopping_amount*0.05)) );
            }
            else if ( (shopping_amount >= 1000) && (shopping_amount <= 2999)){
                printf("Discount: 10");
                printf("Final Amount: %f", (shopping_amount- (shopping_amount * 0.1)));                
            }
            else if ( (shopping_amount >= 3000) && (shopping_amount <= 4999)){
                printf("Discount: 15");
                printf("Final Amount: %f", (shopping_amount- (shopping_amount * 0.15)) );                
            }
            else if ( (shopping_amount >= 5000) && (shopping_amount <= 9999)){
                printf("Discount: 20");
                printf("Final Amount: %f", (shopping_amount- (shopping_amount * 0.2)) );                
            }
            else{
                printf("Discount: 25");
                printf("Final Amount: %f", (shopping_amount- (shopping_amount * 0.25)) ); 
            }
        }
        else{
            printf("Invalid Memebership");
        }
    return 0 ;
}