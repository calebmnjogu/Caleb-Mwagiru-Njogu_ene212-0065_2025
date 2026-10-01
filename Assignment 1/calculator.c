#include <stdio.h>

int main() {
    float num1, num2;
    char operation;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (operation) {
        case '+':
            printf("Answer = %.2f", num1 + num2);
            break;

        case '-':
            printf("Answer = %.2f", num1 - num2);
            break;

        case '*':
            printf("Answer = %.2f", num1 * num2);
            break;

        case '/':
            printf("Answer = %.2f", num1 / num2);
            break;

        default:
            printf("Invalid operation");
    }

    return 0;
}
