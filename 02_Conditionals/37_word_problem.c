/*
===============================================================
                    Mini Calculator
Perform the corresponding mathematical operation.
Conditions:
1. Accept two integers.
2. Accept an operator.
3. Display the calculated result.
4. If the operator is invalid, display Invalid Operator.
5. If the user tries to divide or perform modulo by zero,
 display an appropriate error.
===============================================================
*/

#include<stdio.h>
int main(){
    int num1 , num2 , c;
    char a ;
    printf("\nEnter first integer:");
    scanf("%d", &num1);
    printf("\nEnter operator:");
    scanf(" %c", &a);
    printf("\nEnter second integer:");
    scanf("%d", &num2);
    if (a == '+'){
        c = num1 + num2 ;
        printf("%d", c);
    }
    else if(a == '-'){
        c = num1 - num2 ;
        printf("%d", c);
    }
    else if(a == '/'){
        if(num2==0){
            printf("Invalid.");
        }
        else{
            float d , e ;
            d = num1 ;
            e  = d / num2 ;
            printf("%f", e);
        }
    }
    else if(a == '*'){
        c = num1 * num2 ;
        printf("%d", c);
    }
    else if(a == '%'){
        if(num2==0){
            printf("Invalid.");
        }
        else{
            c = num1 % num2 ;
            printf("%d", c);
        }
    }
    else{
        printf("give the correct operations.");
    }
    return 0;
}
