#include <stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num<0){
        printf("The modulus of the number is %d", (-1)*num);
    }
    else{
        printf("The modulus of the number is %d", num);
    }
    return 0;
}