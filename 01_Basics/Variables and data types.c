/*
=======================================
        Variable and Data Types
=======================================
*/

/* 
A name which is given to a memory loaction.
It can contain alphabet , digits and underscore(_).
A varible can start with an aplhabet and underscore only.
Can't start with a digit.
No whitespace is allowed
No use of reserved keywords and special characters
*/


/*
1. WHAT ARE DATA TYPES?

   Data types specify what type of value a variable
   can store and how much memory it occupies.


2. BASIC DATA TYPES

   ------------------------------------------------
   Data Type       Memory Size       Example
   ------------------------------------------------
   char            1 byte            'A'
   int             4 bytes           100
   float           4 bytes           10.5f
   double          8 bytes           25.678
   void            No storage        No value
   ------------------------------------------------

   NOTE: These are typical sizes on modern systems.
   Actual sizes can depend on the compiler and platform.


3. INTEGER DATA TYPES

   Integer data types store whole numbers.

   ------------------------------------------------
   Data Type              Typical Size
   ------------------------------------------------
   short int              2 bytes
   int                    4 bytes
   long int               4 or 8 bytes
   long long int          8 bytes
   ------------------------------------------------


4. UNSIGNED DATA TYPES

   Unsigned data types store only zero and positive
   numbers.

   ------------------------------------------------
   Data Type              Typical Size
   ------------------------------------------------
   unsigned char          1 byte
   unsigned short int     2 bytes
   unsigned int           4 bytes
   unsigned long int      4 or 8 bytes
   unsigned long long     8 bytes
   ------------------------------------------------


5. FLOATING-POINT DATA TYPES

   These data types store decimal numbers.

   ------------------------------------------------
   Data Type              Typical Size
   ------------------------------------------------
   float                  4 bytes
   double                 8 bytes
   long double            8 to 16 bytes
   ------------------------------------------------

   float:
   Stores approximately 6-7 significant decimal digits.

   double:
   Stores approximately 15-16 significant decimal digits.

   long double:
   Provides extended precision, depending on the system.


6. CHARACTER DATA TYPE

   The char data type stores a single character.

   Examples:

   char grade = 'A';
   char letter = 'B';
   char symbol = '#';

   Memory occupied by char = 1 byte.

   A char can be signed or unsigned depending on
   the compiler.


7. MEMORY CONVERSION

   1 Byte = 8 Bits
   1 KB   = 1024 Bytes
   1 MB   = 1024 KB
   1 GB   = 1024 MB

   Example:

   An integer generally occupies 4 bytes.

   4 x 8 = 32 bits


8. IMPORTANT C OPERATOR - sizeof()

   The sizeof() operator is used to find the memory
   occupied by a data type or variable.

   Example:

   sizeof(char)   = 1 byte
   sizeof(int)    = 4 bytes
   sizeof(float)  = 4 bytes
   sizeof(double) = 8 bytes

   NOTE:
   sizeof() returns the size in bytes.
   Use %zu to print its result.


9. IMPORTANT POINTS TO REMEMBER

   1. char always occupies exactly 1 byte.
   2. int generally occupies 4 bytes.
   3. float generally occupies 4 bytes.
   4. double generally occupies 8 bytes.
   5. sizeof() checks memory size.
   6. Actual sizes may vary by compiler and platform.

*/

#include <stdio.h>
int main(){
    printf("%lu",sizeof(int));
    printf("\n%lu",sizeof(float));
    return 0;
}


