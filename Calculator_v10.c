#include <stdio.h>
#include <string.h>
#include <stdlib.h> // system("cls") ku use aagum - optional

// ===== FUNCTIONS =====

// Function 1: 2 number ah add panna - pointer use panni result tharum
void add(float *a, float *b, float *result) { // 3 pointer vaangudhu
    *result = *a + *b; // dereference panni add pannu
}

// Function 2: Array oda sum kandu pidikum
float arraySum(float arr[], int size) {
    float sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i]; // arr[i] ah kootu
    }
    return sum;
}

// Function 3: Menu kaata
void showMainMenu(char username[]) { // string parameter
    // system("cls"); // Windows la screen clear panna. Linux/Mac la "clear"
    printf("\n========================================\n");
    printf(" WELCOME %s TO C KING CALCULATOR V10\n", username);
    printf("========================================\n");
    printf("1. Basic Calculator - 2 Numbers\n");
    printf("2. Array Calculator - N Numbers Sum & Avg\n");
    printf("3. Swap Two Numbers - Pointers Demo\n");
    printf("4. String Info - Name Length\n");
    printf("5. Exit\n");
    printf("========================================\n");
    printf("Enter your choice: ");
}

// Function 4: Basic 2 number calculator
void basicCalculator() {
    float num1, num2, result;
    char op;
    printf("\n--- Basic Calculator ---\n");
    printf("Enter num1: ");
    scanf("%f", &num1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter num2: ");
    scanf("%f", &num2);

    switch(op) {
        case '+':
            add(&
