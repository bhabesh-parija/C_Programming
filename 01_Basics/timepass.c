#include <stdio.h>
int main(){
    int a , b ;
    printf("Enter a number:\n");
    scanf("%d", &a);
    printf("Enter a number:\n");
    scanf("%d", &b);
    printf("%d + %d = %d" , a , b , (a+b));
    return 0 ;
}