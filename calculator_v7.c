#include <stdio.h>

int main() {
    int n, i; // n = evlo numbers, i = loop ku
    float sum = 0, average; // sum & average ku float use panrom

    printf("=== C King Calculator V7 - Arrays ===\n");
    printf("How many numbers you want to enter? ");
    scanf("%d", &n); // user kita evlo number nu kekrom

    float numbers[n]; // ARRAY CREATE PANROM - n size oda

    printf("Enter %d numbers:\n", n);
    // FOR LOOP use panni array la value store panrom
    for(i = 0; i < n; i++) { // array index 0 la irunthu start aagum da
        printf("Enter number %d: ", i + 1); // i+1 pota 1,2,3 nu user ku kaatum
        scanf("%f", &numbers[i]); // numbers[0], numbers[1] la store aagum
    }

    printf("\n--- You Entered ---\n");
    // FOR LOOP use panni array ah print panrom
    for(i = 0; i < n; i++) {
        printf("Number %d = %.2f\n", i + 1, numbers[i]);
        sum = sum + numbers[i]; // ellathayum kootu
    }

    // Average kandu pidikalam
    average = sum / n; // total sum / total numbers

    printf("\n--- Results ---\n");
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    // Max number kandu pidikalam
    float max = numbers[0]; // first number ah max nu vechikalam
    for(i = 1; i < n; i++) { // 1 la irunthu check pannu
        if(numbers[i] > max) { // idhu perusa iruntha
            max = numbers[i]; // max ah update pannu
        }
    }
    printf("Maximum = %.2f\n", max);

    printf("\nLevel 7 Done C King! Array kathukita 👑\n");
    return 0;
}