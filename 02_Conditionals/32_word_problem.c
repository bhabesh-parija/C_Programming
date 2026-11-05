/*
===============================================================
                Admission Eligibility Checker
Write a C program to check whether a student is eligible for
admission based on their marks in Mathematics, Physics, and Chemistry.
Eligibility Criteria:
A student is eligible only if all the following conditions are satisfied:
1. Mathematics marks ≥ 60
2. Physics marks ≥ 50
3. Chemistry marks ≥ 40
4. Total marks ≥ 200
Requirements:
- Take marks in all three subjects as input.
- Calculate the total marks.
- Use if-else statements to determine eligibility.
- Print either Eligible for Admission or Not Eligible for Admission.
===============================================================
*/

#include<stdio.h>
int main(){
    int maths_marks , chemistry_marks , physics_marks , total_marks ;
    printf("Enter Maths marks:");
    scanf("%d", &maths_marks);
    printf("Enter Chemistry marks:");
    scanf("%d", &chemistry_marks);
    printf("Enter Physics marks:");
    scanf("%d", &physics_marks);
    if((maths_marks>=0) && (chemistry_marks>=0) && (physics_marks>=0)){
        if((maths_marks<=100 && maths_marks>=60) && (chemistry_marks<=100 && chemistry_marks>=40) && (physics_marks<=100 && physics_marks>=50)){
            total_marks = maths_marks + chemistry_marks + physics_marks ;
            if (total_marks>=200){
                printf("Eligible.");
            }
            else{
                printf("not eligible.");
            }
        }
        else{
            printf("not eligible.");
        }
    }
    else{
        printf("INVALID MARKS.");
    }
    return 0;
}