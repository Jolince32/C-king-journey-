#include <stdio.h>

// Function 1: Add panna - 2 number vaangi kooti kudukum
float add(float a, float b) {  // float return type, a & b parameters
    return a + b;  // kooti return pannu
}

// Function 2: Subtract panna
float subtract(float a, float b) {
    return a - b;  // kalichi return pannu
}

// Function 3: Multiply panna
float multiply(float a, float b) {
    return a * b;  // perukki return pannu
}

// Function 4: Divide panna
float divide(float a, float b) {
    if (b != 0) {  // zero check mukkiyam da
        return a / b;
    } else {
        printf("Error: Cannot divide by zero!\n");
        return 0;  // error na 0 return pannidu
    }
}

// Function 5: Menu kaata - user ku option solla
void showMenu() {  // void = edhuvum return pannaadhu
    printf("\n=== C King Calculator V6 - Functions ===\n");
    printf("1. Add (+)\n");
    printf("2. Subtract (-)\n");
    printf("3. Multiply (*)\n");
    printf("4. Divide (/)\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
}

// Main function - program inga dhan start aagum
int main() {
    float num1, num2, result;
    int choice = 0;  // user enna option select panran
    
    // while loop - user 5 kudukum varaikum odum
    while(choice != 5) {  // 5 = Exit
        showMenu();  // menu function ah call pandrom
        scanf("%d", &choice);
        
        // Exit na numbers kekka koodathu
        if(choice == 5) {
            printf("Calculator closed. Level 6 Done C King! 👑\n");
            break;  // loop ah udane stop pannu
        }
        
        // Numbers vaangu
        printf("Enter num1: ");
        scanf("%f", &num1);
        printf("Enter num2: ");
        scanf("%f", &num2);
        
        // switch vachu function ah call pannu
        switch(choice) {
            case 1:  // Add
                result = add(num1, num2);  // add function ah call panni result la store pannu
                printf("Answer = %.2f\n", result);
                break;
            case 2:  // Subtract
                result = subtract(num1, num2);
                printf("Answer = %.2f\n", result);
                break;
            case 3:  // Multiply
                result = multiply(num1, num2);
                printf("Answer = %.2f\n", result);
                break;
            case 4:  // Divide
                result = divide(num1, num2);
                printf("Answer = %.2f\n", result);
                break;
            default:  // 1-5 illana
                printf("Invalid choice! 1-5 kulla kudu da\n");
        }
    }
    
    return 0;
}
