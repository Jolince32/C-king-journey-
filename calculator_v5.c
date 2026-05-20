#include <stdio.h>

int main() {
    int num, limit, i; // num = edhu table, limit = evlo varaikum, i = loop counter
    
    printf("=== C King Calculator V5 - For Loop ===\n");
    printf("Enter a number for multiplication table: ");
    scanf("%d", &num); // table podanum nu nenacha number ah vaangu
    printf("Enter limit: "); // 10 nu kudutha 10 varaikum table varum
    scanf("%d", &limit);

    printf("\n--- %d Table ---\n", num);
    
    // FOR LOOP START - i=1 la irunthu limit varaikum odum
    for(i = 1; i <= limit; i++) { // i++ = i = i + 1
        printf("%d x %d = %d\n", num, i, num * i); // 5 x 1 = 5 maari print aagum
    }
    // FOR LOOP END

    printf("\n--- Sum of first %d natural numbers ---\n", limit);
    int sum = 0; // sum ah 0 la start pannu
    for(i = 1; i <= limit; i++) { // 1 la irunthu limit varaikum
        sum = sum + i; // i ah sum kooda kootu
    }
    printf("Sum = %d\n", sum);

    printf("\nLevel 5 Done C King! For loop kathukita 👑\n");
    return 0;
}