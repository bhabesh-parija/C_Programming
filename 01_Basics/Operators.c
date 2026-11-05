/*
=======================================
              OPERATORS IN C
=======================================

An operator is a symbol that performs an operation
on one or more operands.

Main types of operators:
1. Arithmetic
2. Relational
3. Logical
4. Bitwise
5. Assignment
6. Conditional (ternary)
7. Other operators, such as sizeof()
*/

/*
ARITHMETIC OPERATORS
+   Addition
-   Subtraction
*   Multiplication
/   Division
%   Remainder (integers)

LOGICAL OPERATORS
&&  AND: true when both conditions are true.
||  OR : true when at least one condition is true.
!   NOT: reverses the truth value.

BITWISE OPERATORS
&   Bitwise AND
|   Bitwise OR
^   Bitwise XOR
~   Bitwise NOT
<<  Left shift
>>  Right shift
*/

// Bitwise operators example
#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter two integers: ");

    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("\n%d AND %d = %d", a, b, a & b);
    printf("\n%d OR %d = %d", a, b, a | b);
    printf("\n%d XOR %d = %d\n", a, b, a ^ b);

    return 0;
}

/*
============================================================
              C OPERATOR PRECEDENCE
============================================================

Precedence decides which operator is grouped first.
Associativity decides grouping when operators have the
same precedence. It does NOT necessarily decide the
actual order in which every expression is evaluated.

HIGHER PRECEDENCE
------------------------------------------------------------
Level  Operators                 Description
------------------------------------------------------------
1      () [] -> .                Postfix: call, index, member
       x++ x--                   Postfix increment/decrement

2      ++x --x                   Prefix increment/decrement
       + - ! ~                   Unary operators
       * &                       Dereference / address-of
       sizeof                    Size operator
       (type)                    Type cast

3      * / %                     Multiplication, division,
                                  remainder

4      + -                       Addition, subtraction

5      << >>                     Bitwise shifts

6      < <= > >=                 Relational operators

7      == !=                     Equality operators

8      &                         Bitwise AND

9      ^                         Bitwise XOR

10     |                         Bitwise OR

11     &&                        Logical AND

12     ||                        Logical OR

13     ?:                        Conditional operator

14     = += -= *= /= %=           Assignment operators
       <<= >>= &= ^= |=

15     ,                         Comma operator
------------------------------------------------------------
LOWER PRECEDENCE

ASSOCIATIVITY
------------------------------------------------------------
Left to right:
Most binary operators, for example +, -, *, /, %, <,
==, &, ^, |, && and ||.

Right to left:
Unary operators, conditional operator (?:), and
assignment operators.

Postfix operators group left to right.

IMPORTANT EXAMPLES
------------------------------------------------------------

Example 1:
int result = 10 + 5 * 2;

5 * 2 is grouped first.
Result = 10 + 10 = 20.

Example 2:
int result = (10 + 5) * 2;

Parentheses group 10 + 5 first.
Result = 15 * 2 = 30.

Example 3:
int a = 10, b = 20, c;
c = a + b;

c becomes 30.

IMPORTANT POINTS
------------------------------------------------------------
1. Parentheses can make expressions clearer.
2. Multiplication, division and remainder have higher
   precedence than addition and subtraction.
3. Relational operators have higher precedence than
   logical AND and logical OR.
4. Logical AND (&&) has higher precedence than OR (||).
5. Assignment operators have low precedence.
6. The comma operator has the lowest precedence here.
7. Use parentheses when an expression is complicated.
*/
