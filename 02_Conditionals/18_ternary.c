#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    //ternary operator
    //expression1 ? expression2 : expression3
    n%2==0 ? printf("Even Number") : printf("Odd Number");
    return 0;
}