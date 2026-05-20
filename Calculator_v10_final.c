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
            add(&num1, &num2, &result); // address anupi result vaangrom - call by reference
            printf("Answer = %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Answer = %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Answer = %.2f\n", result);
            break;
        case '/':
            if(num2!= 0) {
                result = num1 / num2;
                printf("Answer = %.2f\n", result);
            } else {
                printf("Error: Divide by zero!\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }
}

// Function 5: Array calculator
void arrayCalculator() {
    int n;
    printf("\n--- Array Calculator ---\n");
    printf("How many numbers? ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Invalid size!\n");
        return; // function ah veliya po
    }

    float numbers[n]; // Variable Length Array - VLA
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]); // array la store pannu
    }

    float sum = arraySum(numbers, n); // sum function ah call pannu
    float avg = sum / n;

    printf("\nSum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);
}

// Function 6: Pointer swap demo
void swapDemo() {
    float x, y;
    printf("\n--- Pointer Swap Demo ---\n");
    printf("Enter first number: ");
    scanf("%f", &x);
    printf("Enter second number: ");
    scanf("%f", &y);

    printf("Before Swap: x = %.2f, y = %.2f\n", x, y);

    // Pointer use panni swap pannu
    float *ptrX = &x, *ptrY = &y, temp;
    temp = *ptrX;
    *ptrX = *ptrY;
    *ptrY = temp;

    printf("After Swap: x = %.2f, y = %.2f\n", x, y);
}

// ===== MAIN FUNCTION =====
int main() {
    char username[50]; // user name store panna string
    int choice = 0; // menu choice

    printf("Enter your name: ");
    scanf("%s", username); // string vaangu. Space illama type pannu

    // While loop - user 5 kudukum varaikum odum
    while(choice!= 5) {
        showMainMenu(username); // menu function ah call pannu
        scanf("%d", &choice);

        // Switch case vachu function ah call pannu
        switch(choice) {
            case 1:
                basicCalculator(); // basic calc function
                break;
            case 2:
                arrayCalculator(); // array calc function
                break;
            case 3:
                swapDemo(); // pointer swap function
                break;
            case 4:
                printf("\n--- String Info ---\n");
                printf("Your name: %s\n", username);
                printf("Name length: %lu letters\n", strlen(username)); // strlen use pannu
                break;
            case 5:
                printf("\nThanks %s! You are C KING now 👑\n", username);
                printf("Level 1 to 10 Completed. 40 LPA Ready! 🔥\n");
                break;
            default:
                printf("Invalid choice! 1-5 kulla kudu da\n");
        }

        if(choice!= 5) {
            printf("\nPress Enter to continue...");
            getchar(); // buffer clear panna
            getchar(); // user enter amuka wait pannum
        }
    }

    return 0;
}
