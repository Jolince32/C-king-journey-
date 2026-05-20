#include <stdio.h>

// Function 1: Call by Reference - original value ah maathum
void swap(float *a, float *b) { // float *a = pointer. address ah vaangum
    float temp; // temporary variable
    temp = *a;  // *a = a oda address la irukura value
    *a = *b;    // b oda value ah a oda address la podu
    *b = temp;  // temp la irukuradha b oda address la podu
    printf("Inside swap: a = %.2f, b = %.2f\n", *a, *b);
}

int main() {
    float num1, num2; // normal variables
    float *ptr1, *ptr2; // pointer variables - address ah store pannum

    printf("=== C King Calculator V9 - Pointers Mode ===\n");
    printf("Enter num1: ");
    scanf("%f", &num1); // &num1 = num1 oda address
    printf("Enter num2: ");
    scanf("%f", &num2);

    ptr1 = &num1; // ptr1 la num1 oda address ah store pannu
    ptr2 = &num2; // ptr2 la num2 oda address ah store pannu

    printf("\n--- Before Swap ---\n");
    printf("num1 = %.2f, Address = %p\n", num1, ptr1); // %p = pointer/address print panna
    printf("num2 = %.2f, Address = %p\n", num2, ptr2);
    printf("ptr1 pointing to value = %.2f\n", *ptr1); // *ptr1 = dereference. address la irukura value

    // Swap function ah call pannu - address ah anuprom
    swap(&num1, &num2); // &num1 = num1 oda address ah function ku anuprom

    printf("\n--- After Swap in Main ---\n");
    printf("num1 = %.2f\n", num1); // original value maari irukum da
    printf("num2 = %.2f\n", num2);

    printf("\nLevel 9 Done C King! Pointer kathukita 👑\n");
    return 0;
}
