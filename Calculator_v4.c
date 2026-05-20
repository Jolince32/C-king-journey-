#include <stdio.h>
int main() {
    float num1, num2;
    char op;
    char choice = 'y';  // loop start panna
    
    printf("=== C King Calculator V4 - Loop Mode ===\n");
    
    while(choice == 'y' || choice == 'Y') {  // y illana loop nikkum
        printf("\nEnter num1: ");
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
                printf("Invalid operator!\n");
        }
        
        printf("\nContinue? Press y/n: ");  // y na loop continue, n na stop
        scanf(" %c", &choice);
    }
    
    printf("\nCalculator closed. Thanks C King! 👑\n");
    return 0;
}
