#include <stdio.h>

int main() {

    char exp[10];
    int A, B;

    printf("Enter the expression: ");
    scanf("%s", &exp);

    printf("Truth Table \n");
    printf("A B | Output\n");
    printf("-------------\n");

    for (int i = 0; i < 4; i++) {

        A = (i >> 1) & 1;  // Extract first bit
        B = i & 1;         // Extract second bit

        int result;

        if ( exp[1] == '&'){
            result = A && B;
        }
        else if (exp[1] == '|') {
            result = A || B;
        }
        else {
            printf("Invalid expression\n");
            return 0;
        }


        printf("%d %d |   %d\n", A, B, result);
    }

    return 0;
}