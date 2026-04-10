#include <stdio.h>

int main() {

    int A, B;

    printf("Truth Table for AND and OR Gates\n");
    printf("A B | AND | OR\n");
    printf("-------------\n");

    for (int i = 0; i < 4; i++) {

        A = (i >> 1) & 1;  // Extract first bit
        B = i & 1;         // Extract second bit

        int and_result = A && B;
        int or_result = A || B;


        printf("%d %d |   %d  |  %d\n", A, B, and_result, or_result);
    }

    return 0;
}