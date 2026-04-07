#include <stdio.h>

int main (){

    int a, b;

    printf("Enter A (0 or 1): ");
    scanf("%d",&a);

    printf("Enter B(0 or 1): ");
    scanf("%d",&b);

    if( a!=0 && a!=1){
        printf("Inavlid Value of A");
    }
    if ( b!=0 && b!=1){
        printf("Invalid Value of B");
    }
    return 0;
}