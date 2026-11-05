/*
=======================================
        Operators
=======================================
*/

/*
An operator is a symbol that performs an operations on one or more operands.
types of operators :
1.) Arithemetic Operators
2.) Relational Operators
3.)Logical Operators
4.)Bitwise Operators
5.)Assignment Operators
6.)Miscellaneous Operators
*/


// calculator program using arithmetic operators

/*
#include <stdio.h>
int main(){
    float a,b;
    printf("Enter two numbers:");
    scanf(" %f %f", &a , &b );
    printf("\nSum of %f and %f is %f", a , b , a+b );
    printf("\nDifference of %f and %f is %f", a , b , a-b );
    printf("\nMultiplication of %f and %f is %f", a , b , a*b );
    printf("\nDivision of %f and %f is %f", a , b , a/b );
}
*/


/*
Logical Operators
A && B (AND): Returns true when both A and B are TRUE.
A || B (OR): Returns True when eiter A or B is True.
!A (NOT): Returns True when A is False and vice versa.
*/

/*
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf(" %d %d", &a , &b );
    printf("\n %d And %d is %d", a , b , a&&b );
    printf("\n %d || %d is %d", a , b , a||b );
    printf("\nNOT %d is %d", a , !a );
    return 0;
}
*/

// Bitwise Operators

#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf(" %d %d", &a , &b );
    printf("\n %d And %d is %d", a , b , a&b );
    printf("\n %d OR %d is %d", a , b , a|b );
    printf("\n %d XOR %d is %d", a , b , a^b );//a^b means a xor b means 
    return 0;
}

/*
============================================================
              C PROGRAMMING - OPERATOR PRECEDENCE
============================================================

DEFINITION:
Operator precedence determines the order in which operators
are evaluated in an expression.

Associativity determines the direction of evaluation when
operators have the same precedence.

------------------------------------------------------------
PRIORITY | OPERATORS       | DESCRIPTION
------------------------------------------------------------

1.       | () [] -> .      | Function call, Array, Structure
         |                 | access

2.       | ++ --           | Increment / Decrement
         | ! ~             | Logical NOT / Bitwise NOT
         | + -             | Unary Plus / Unary Minus
         | * &             | Dereference / Address of
         | sizeof          | Size of operator
         | (type)          | Type Casting

3.       | * / %           | Multiplication, Division,
         |                 | Modulus

4.       | + -             | Addition, Subtraction

5.       | << >>           | Left Shift, Right Shift

6.       | < <= > >=       | Relational Operators

7.       | == !=           | Equality Operators

8.       | &               | Bitwise AND

9.       | ^               | Bitwise XOR

10.      | |               | Bitwise OR

11.      | &&              | Logical AND

12.      | ||              | Logical OR

13.      | ?:              | Conditional / Ternary Operator

14.      | = += -= *=      | Assignment Operators
         | /= %= <<=       |
         | >>= &= ^= |=    |

15.      | ,               | Comma Operator

------------------------------------------------------------
             OPERATOR ASSOCIATIVITY
------------------------------------------------------------

LEFT TO RIGHT:
Most binary operators, including:
+, -, *, /, %, <, >, ==, !=, &&, ||

RIGHT TO LEFT:
Unary operators, assignment operators and conditional
operator (?:).

------------------------------------------------------------
                 IMPORTANT EXAMPLES
------------------------------------------------------------

EXAMPLE 1:

int result = 10 + 5 * 2;

Step 1: 5 * 2 = 10
Step 2: 10 + 10 = 20

Answer = 20

EXAMPLE 2:

int result = (10 + 5) * 2;

Step 1: 10 + 5 = 15
Step 2: 15 * 2 = 30

Answer = 30

EXAMPLE 3:

int a = 10, b = 20, c;

c = a + b;

Answer = 30

------------------------------------------------------------
IMPORTANT POINTS TO REMEMBER
------------------------------------------------------------

1. Parentheses have the highest precedence among these
   operators.

2. Multiplication and division have higher precedence
   than addition and subtraction.

3. Relational operators have higher precedence than
   logical AND and logical OR.

4. Logical AND (&&) has higher precedence than
   Logical OR (||).

5. Assignment operators have low precedence.

6. Comma operator has the lowest precedence.

7. Use parentheses to make complex expressions easier
   to understand.

*/

