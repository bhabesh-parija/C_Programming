/*
===============================================================
                Point Position Checker
Write a C program to determine the position of a point (x, y)
in a Cartesian coordinate system.
Requirements:
1. Take two integer inputs: x and y.
2. Use nested if-else statements to identify the point's position.
3. Display one of the following results:
- Origin
- X-axis
- Y-axis
- Quadrant I
- Quadrant II
- Quadrant III
- Quadrant IV
===============================================================
*/

#include <stdio.h>
int main(){
    int x , y ;
    printf("Enter the x-coordinate:");
    scanf("%d", &x);
    printf("Enter the y-coordinate:");
    scanf("%d", &y);
    if (x==0){
        if(y==0){
            printf("Origin.");
        }
        else if(y>0){
            printf("on positive y-axis.");
        }
        else{
            printf("on negative y-axis.");
        }
    }
    else if(y==0){
        if(x==0){
            printf("Origin.");
        }
        else if(x>0){
            printf("on positive x-axis.");
        }
        else{
            printf("on negative x-axis.");
        }
    }
    else if (x>0){
        if (y>0){
            printf("1 quadrant.");
        }
        else if (y<0){
            printf("4 quadrant.");
        }
        else{
            printf("positive x-axis.");
        }
    }
    else if (y>0){
        if(x>0){
            printf("1 quadrant.");
        }
        else if (x<0){
            printf(" 2 quadrant.");
        }
        else{
            printf("positive y-axis.");
        }
    }
    else if (x<0){
        if (y>0){
            printf("2 quadrant.");
        }
        else if (y<0){
            printf("3 quadrant.");
        }
        else{
            printf("negative x-axis.");
        }
    }
    else{
        if (x>0){
            printf("4 quadrant.");
        }
        else if (x<0){
            printf("3 quadrant.");
        }
        else{
            printf("negative y-axis.");
        }
    }
    return 0;
}