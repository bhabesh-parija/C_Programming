/*
===============================================================
    Given three points (x1, y1), (x2, y2) and (x3, y3), 
    write a program to check if all the three points
    fall on one straight line.
===============================================================
*/

#include <stdio.h>
int main(){
    float x1 , y1 , x2 , y2 , x3 , y3 , slope_1 , slope_2 ;
    printf("Write the below coordinates in (x,y) format.\n");
    printf("The first coordinates in x-y plane are:");
    scanf("%f", &x1);
    scanf("%f", &y1);
    printf("The second coordinates in x-y plane are:");
    scanf("%f", &x2);
    scanf("%f", &y2);
    printf("The Third coordinates in x-y plane are:");
    scanf("%f", &x3);
    scanf("%f", &y3);
    slope_1 = (x2-x1)/(y2-y1);
    slope_2 = (x3-x1)/(y3-y1);
    if (slope_1==slope_2){
        printf("All the three coordinates lie on the same line.");
    }
    else{
        printf("All the three coordinates lie on different line.");
    }
    return 0;
}