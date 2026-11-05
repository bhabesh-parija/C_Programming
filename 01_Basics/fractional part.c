#include <stdio.h>
int main(){
    float a ;
    printf("Enter a number:");
    scanf("%f", &a);
    int b;
    b=a;
    float c;
    c=a-b;
    printf("the fractional part of the number is: %f", c);
    return 0;
}