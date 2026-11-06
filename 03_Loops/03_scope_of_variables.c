#include<stdio.h>
int main(){
    // scope of vaiables
    int i;
    for ( i = 1 ; i <= 10 ; i = i + 2){
        printf("Hello World\n");
    }
    printf("%d", i);
    return 0;
}