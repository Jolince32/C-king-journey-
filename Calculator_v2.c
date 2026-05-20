#include <stdio.h>
int main() {
    float num1, num2;
    char op;
    printf("Enter num1: ");
    scanf("%f", &num1);
    printf("Enter num2: ");
    scanf("%f", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    
    if (op == '+') {
        printf("Answer = %.2f\n", num1 + num2);
    } else if (op == '-') {
        printf("Answer = %.2f\n", num1 - num2);
    } else if (op == '*') {
        printf("Answer = %.2f\n", num1 * num2);
    } else if (op == '/') {
        if (num2 != 0) {
            printf("Answer = %.2f\n", num1 / num2);
        } else {
            printf("Error: Cannot divide by zero!\n");
        }
    } else {
        printf("Invalid operator!\n");
    }
    return 0;
}
