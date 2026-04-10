#include <stdio.h>

int main() {

    int a, b, choice;

    // Input A
    printf("Enter A (0 or 1): ");
    scanf("%d", &a);

    if (a != 0 && a != 1) {
        printf("Invalid value of A\n");
        return 0;
    }

    // Input B
    printf("Enter B (0 or 1): ");
    scanf("%d", &b);

    if (b != 0 && b != 1) {
        printf("Invalid value of B\n");
        return 0;
    }

    // Menu
    printf("\nMENU\n");
    printf("1. AND Gate\n");
    printf("2. OR Gate\n");
    printf("3. NOT Gate (on A)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Logic operations
    switch (choice) {

        case 1:
            printf("A AND B = %d\n", a && b);
            break;

        case 2:
            printf("A OR B = %d\n", a || b);
            break;

        case 3:
            printf("NOT A = %d\n", !a);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}