#include <stdio.h>
int main() {
    float num1, num2;  // user kudura 2 number ku variable
    char op;           // +, -, *, / store panna
    int i, limit;      // i = counter, limit = evlo thadava calculate pannanum
    
    printf("=== C King Calculator V5 - For Loop Mode ===\n");
    printf("How many calculations you want? ");
    scanf("%d", &limit);  // user eh limit solluvan - 3 na 3 thadava odum
    
    // for loop: i=1 la start aagi, i<=limit varaikum odum, ovvoru thadavayum i++
    for(i = 1; i <= limit; i++) {  
        printf("\n--- Calculation %d ---\n", i);  // ippo enna calculation nu kaatum
        printf("Enter num1: ");
        scanf("%f", &num1);
        printf("Enter num2: ");
        scanf("%f", &num2);
        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &op);  // %c munnadi space mukkiyam da, buffer problem varama iruka
        
        // switch-case vachu operator enna nu paakrom
        switch(op) {
            case '+':  // + na add pannu
                printf("Answer = %.2f\n", num1 + num2);
                break;  // break illana keela irukura case um odidum
            case '-':  // - na subtract pannu
                printf("Answer = %.
