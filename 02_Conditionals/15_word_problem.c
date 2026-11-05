/*
===============================================================
    Take input percentage of a student and 
    print the Grade according to marks:
===============================================================
*/

#include <stdio.h>
int main(){
    int percentage;
    printf("Enter your percentage:");
    scanf("%d", &percentage);
    if (percentage<=100 && percentage>=90){
        printf("Excellent.");
    }
    else if (percentage<90 && percentage>=80){
        printf("Very Good.");
    }
    else if (percentage<80 && percentage>=70){
        printf("Good.");
    }
    else if (percentage<70 && percentage>=60){
        printf("Can do better.");
    }
    else if (percentage<60 && percentage>=50){
        printf("Average.");
    }
    else if (percentage<50 && percentage>=40){
        printf("Below Average.");
    }
    else{
        printf("Fail.");
    }
}