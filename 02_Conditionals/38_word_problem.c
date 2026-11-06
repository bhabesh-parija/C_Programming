/*
===============================================================
                Employee Salary & Bonus Management
- Employee ID
- Basic salary
- Years of experience
- Performance rating (1–5)
Calculate the bonus according to these rules:
Experience	Performance rating	Bonus
10+ years	4 or 5	20%
5–9 years	4 or 5	15%
2–4 years	4 or 5	10%
Any experience	3	5%
Any experience	1 or 2	0%
Additional conditions
1. Basic salary must be greater than zero.
2. Experience cannot be negative.
3. Performance rating must be between 1 and 5.
4. If any input is invalid, display an appropriate error.
5. Calculate and display:
   - Employee ID
   - Basic salary
   - Bonus percentage
   - Bonus amount
   - Final salary
===============================================================
*/

#include <stdio.h>
int main(){
    int employee_id  , years_of_experience , performance_rating ;
    float basic_salary ;
    printf("Enter Employee ID:");
    scanf("%d", &employee_id);
    printf("Enter Basic Salary:");
    scanf("%f", &basic_salary);
    printf("Enter Experience:");
    scanf("%d", &years_of_experience);
    printf("Enter Performance Rating:");
    scanf("%d", &performance_rating);
    if ( (basic_salary > 0) && (years_of_experience >= 0) && (performance_rating >= 1 && performance_rating <=5)  ){
        if((years_of_experience >= 10) && (performance_rating == 4 || performance_rating == 5)){
            printf("Employee ID : %d\n", employee_id);
            printf("Basic Salary : %f\n", basic_salary);
            printf("Bonus Percentage: 20%%  \n");
            printf("Bonus amount: %f\n", ( basic_salary * 0.2));
            printf("Final salary: %f\n", ((basic_salary * 0.2) + basic_salary) );
        }
        else if(((years_of_experience<=9) && (years_of_experience >= 5)) && (performance_rating == 4 || performance_rating == 5)){
            printf("Employee ID : %d\n", employee_id);
            printf("Basic Salary : %f\n", basic_salary);
            printf("Bonus Percentage: 15%% \n");
            printf("Bonus amount: %f\n", ( basic_salary * 0.15));
            printf("Final salary: %f\n", ((basic_salary * 0.15) + basic_salary) );
        }
        else if(((years_of_experience >= 2) && (years_of_experience <= 4)) && (performance_rating == 4 || performance_rating == 5)){
            printf("Employee ID : %d\n", employee_id);
            printf("Basic Salary : %f\n", basic_salary);
            printf("Bonus Percentage: 10%%  \n");
            printf("Bonus amount: %f\n", ( basic_salary * 0.1));
            printf("Final salary: %f\n", ((basic_salary * 0.1) + basic_salary) );
        }
        else if( performance_rating == 3 ){
            printf("Employee ID : %d\n", employee_id);
            printf("Basic Salary : %f\n", basic_salary);
            printf("Bonus Percentage: 5%% \n");
            printf("Bonus amount: %f\n", ( basic_salary * 0.05));
            printf("Final salary: %f\n", ((basic_salary * 0.05) + basic_salary) );
        }
        else if((performance_rating == 1 || performance_rating == 2)){
            printf("Employee ID : %d\n", employee_id);
            printf("Basic Salary : %f\n", basic_salary);
            printf("Bonus Percentage: 0%%  \n");
            printf("Bonus amount: %f\n", ( basic_salary * 0));
            printf("Final salary: %f\n", ((basic_salary * 0) + basic_salary) );
        }
    }
    else{
        printf("Invalid.");
    }
    return 0;
}