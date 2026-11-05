/*
===============================================================
       If the ages of Ram, Shyam and Ajay are
       input through the keyboard, write a program
       to determine the youngest of the three.
===============================================================
*/

#include <stdio.h>
int main(){
    int a , b , c ;
    printf("Enter Ram's age:");
    scanf("%d", &a);
    printf("\nEnter Shyam's age:");
    scanf("%d", &b);
    printf("\nEnter Ajay's age:");
    scanf("%d", &c);
    if(a<b && a<c){
        printf("Ram is the youngest child.");
    }
    else if(a==b && a<c){
        printf("Ram and Shyam are the youngest.");
    }
    else if(a==c && a<b){
        printf("Ram and Ajay are the youngest.");
    }
    else if(c==b && b<a){
        printf("Shyam and Ajay are the youngest");
    }
    else if(b<a && b<c){
        printf("Shyam is the youngest child.");
    }
    else if(c<a && c<b){
        printf("Ajay is the youngest child.");
    }
    else{
        printf("All are of same age.");
    }
    return 0;
}