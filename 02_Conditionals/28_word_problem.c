/*
===============================================================
                    Profit or Loss
Take the cost price (CP) and selling price (SP) of a product.
Determine whether the seller makes:
- Profit
- Loss
- No profit, no loss
Also print the profit or loss amount.
===============================================================
*/

#include<stdio.h>
int main(){
    int cost_price , selling_price , profit , loss ;
    printf("\nEnter cost price:");
    scanf("%d", &cost_price);
    printf("\nEnter selling price:");
    scanf("%d", &selling_price);
    if(cost_price>selling_price){
        loss = cost_price - selling_price ;
        printf("\nLoss:%d", loss);
    }
    else if(cost_price<selling_price){
        profit = selling_price - cost_price ;
        printf("\nProfit:%d", profit);
    }
    else{
        printf("\nNo Profit and loss");
    }
    return 0;
}