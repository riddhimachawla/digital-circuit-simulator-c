#include <stdio.h>
#include <string.h>

int main() {

    char exp[10];
    int A, B;

    printf("Enter the expression: ");
    fgets(exp, sizeof(exp), stdin);


    printf("Truth Table \n");
    printf("A B | Output\n");
    printf("-------------\n");

    for (int i = 0; i < 4; i++) {

        A = (i >> 1) & 1;  // Extract first bit
        B = i & 1;         // Extract second bit

        int result;

        if (strchr(exp, '&')){
            result = A && B;
        }
        else if (strchr(exp,'|')) {
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