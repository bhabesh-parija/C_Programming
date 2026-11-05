/*
===============================================================
Electricity Bill Calculator, your task is to 
calculate the total electricity bill based on 
how many units a person has consumed.
The important concept is slab-wise calculation.
Electricity rates
Electricity units	Rate
First 100 units	₹2 per unit
Next 100 units (101–200)	₹3 per unit
Above 200 units
===============================================================
*/
#include<stdio.h>
int main(){
    int units;
    printf("Tell me how much unit it have consumed:");
    scanf("%d", &units);
    if (units<=100 && units>=0){
        printf("%d", (units)*2);
    }
    else if (units>100 && units<=200){
        units = units - 100 ;
        printf("%d", (200+(units*3)));
    }
    else if(units<0){
        printf("Invalid Units.");
    }
    else{
        units = units - 200 ;
        printf("%d", (500+(units*5)));
    }
    return 0;
}