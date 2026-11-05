/*
===============================================================
    Given a point (x, y), write a program to find out
    if it lies on the x-axis, y-axis or at the 
    origin, viz. (0, 0).
===============================================================
*/

#include <stdio.h>
int main(){
    int x1 , y1 ;
    printf("Enter the x-coordinate:");
    scanf("%d", &x1);
    printf("Enter the y-coordinate:");
    scanf("%d", &y1);
    if (x1==0){
        if (y1==0){
            printf("The point lies at the origin.");
        }
        else{
            printf("The point lies at the y-axis.");
        }
    }
    else {
        if(x1==0){
            printf("The point lies at the origin.");
        }
        else{
            printf("The point lies at the x-axis.");
        }
    }
    return 0;
}