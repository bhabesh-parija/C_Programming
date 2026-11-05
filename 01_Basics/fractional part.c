#include <stdio.h>
int main(){
    float a , c ;
    printf("Enter a number:");
    scanf("%f",&a);
    int b;
    b=a;
    c=a-b;
    printf("The fractional part is: %f", c);
    return 0;
}