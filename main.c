#include <stdio.h>

int main() {

    int A, B;

    printf("Truth Table for AND Gate\n");
    printf("A B | Output\n");
    printf("-------------\n");

    for (int i = 0; i < 4; i++) {

        A = (i >> 1) & 1;  // Extract first bit
        B = i & 1;         // Extract second bit

        int result = A && B;

        printf("%d %d |   %d\n", A, B, result);
    }

    return 0;
}