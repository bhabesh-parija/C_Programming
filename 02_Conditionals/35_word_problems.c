/*
===============================================================
                    Employee Bonus Calculator
Write a C program to calculate an employee's bonus
based on their salary and years of service.
Bonus rules:
If years of service are 10 or more → 10% bonus.
If years of service are 5 to 9 → 5% bonus.
If years of service are less than 5 → 2% bonus.
If salary or years of service is negative or zero → Invalid input.
Input:
Employee's basic salary.
Years of service.
Output:
Bonus percentage.
Bonus amount.
Final salary (basic salary + bonus).
===============================================================
*/

#include <stdio.h>

int main() {
    int year, salary, bonus_amount, final_salary;

    printf("Enter the year of service:");
    scanf("%d", &year);

    printf("Enter your salary:");
    scanf("%d", &salary);

    if (year > 0 && salary > 0) {

        if (year >= 10) {
            printf("Bonus Percentage: 10%%");
            bonus_amount = salary * 0.1;
            printf("\nBonus Amount: %d", bonus_amount);

            final_salary = salary + bonus_amount;
            printf("\nFinal Salary: %d", final_salary);
        }
        else if (year >= 5 && year <= 9) {
            printf("Bonus Percentage: 5%%");
            bonus_amount = salary * 0.05;
            printf("\nBonus Amount: %d", bonus_amount);

            final_salary = salary + bonus_amount;
            printf("\nFinal Salary: %d", final_salary);
        }
        else {
            printf("Bonus Percentage: 2%%");
            bonus_amount = salary * 0.02;
            printf("\nBonus Amount: %d", bonus_amount);

            final_salary = salary + bonus_amount;
            printf("\nFinal Salary: %d", final_salary);
        }
    }
    else {
        printf("Invalid input");
    }

    return 0;
}
