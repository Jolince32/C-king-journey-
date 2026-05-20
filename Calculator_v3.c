#include <stdio.h>
int main() {
    float num1, num2;
    char op;
    printf("=== C King Calculator V3 ===\n");
    printf("Enter num1: ");
    scanf("%f", &num1);
    printf("Enter num2: ");
    scanf("%f", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    
    switch(op) {
        case '+':
            printf("Answer = %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Answer = %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Answer = %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Answer = %.2f\n", num1 / num2);
            } else {
                printf("Error: Cannot divide by zero!\n");
            }
            break;
        default:
            printf("Invalid operator! Use +, -, *, /\n");
    }
    return 0;
}
