/*
=======================================
        Variables and Data Types
=======================================
*/

/*
A variable is a named memory location used to store a value.

Rules for naming variables:
1. A name can contain letters, digits and underscores (_).
2. It must start with a letter or underscore, not a digit.
3. Spaces are not allowed.
4. C keywords cannot be used as variable names.
5. Variable names are case-sensitive.
*/

/*
1. WHAT ARE DATA TYPES?

   Data types specify what kind of value a variable can
   store. They also determine the memory representation
   and range of values.

2. BASIC DATA TYPES

   Data Type       Typical Size       Example
   ------------------------------------------------
   char            1 byte             'A'
   int             often 4 bytes      100
   float           often 4 bytes      10.5f
   double          often 8 bytes      25.678
   void            no value           -
   ------------------------------------------------

   NOTE: Sizes other than char can vary by compiler
   and platform. Use sizeof() to check them.

3. INTEGER DATA TYPES

   short int, int, long int and long long int store
   whole numbers. Their sizes and ranges depend on
   the implementation, subject to C's minimum limits.

4. UNSIGNED DATA TYPES

   Unsigned integer types store zero and positive values.
   Examples:
   unsigned char
   unsigned int
   unsigned long int
   unsigned long long int

5. FLOATING-POINT DATA TYPES

   float       - usually about 6-7 significant digits
   double      - usually about 15-16 significant digits
   long double - precision depends on the system

6. CHARACTER DATA TYPE

   char stores one character.

   Examples:
   char grade = 'A';
   char letter = 'B';
   char symbol = '#';

   A char occupies exactly 1 byte in C.

7. MEMORY CONVERSION

   1 Byte = 8 Bits
   1 KB   = 1024 Bytes (in the common binary convention)
   1 MB   = 1024 KB
   1 GB   = 1024 MB

8. sizeof() OPERATOR

   sizeof() gives the size, in bytes, of a type or object.
   Its result has type size_t, so use %zu with printf().

9. IMPORTANT POINTS

   1. char always occupies exactly 1 byte.
   2. Other type sizes can vary by system.
   3. sizeof() checks the actual size on your system.
   4. Use the correct printf format specifier.
*/

#include <stdio.h>

int main(void) {
    printf("Size of char: %zu byte(s)\n", sizeof(char));
    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of float: %zu byte(s)\n", sizeof(float));
    printf("Size of double: %zu byte(s)\n", sizeof(double));

    return 0;
}
