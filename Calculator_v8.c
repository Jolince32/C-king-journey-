#include <stdio.h>
#include <string.h> // string functions ku idhu mukkiyam da - strlen, strcpy, strcat

int main() {
    char name[50]; // 50 character store panna mudiyura string array
    char greeting[100]; // result ah store panna periya array
    int nameLength; // name la evlo letter iruku nu paaka

    printf("=== C King Calculator V8 - Strings Mode ===\n");
    printf("Enter your name C King: ");
    scanf("%s", name); // %s = string vaanga. Space illama dhan vaangum ⚠️

    // String functions use panrom
    nameLength = strlen(name); // strlen = string length kandu pidikum

    strcpy(greeting, "Vanakkam "); // strcpy = "Vanakkam " ah greeting kulla copy pannu
    strcat(greeting, name); // strcat = name ah greeting kooda serthu
    strcat(greeting, " C King! 👑"); // innum konjam serthu

    printf("\n--- String Results ---\n");
    printf("Full Greeting: %s\n", greeting);
    printf("Your name length: %d letters\n", nameLength);

    // String compare panni paakalam
    if(strcmp(name, "CKing") == 0) { // strcmp = 2 string ah compare pannum. 0 na same
        printf("Dei nee dhan da real C King! 🔥\n");
    } else {
        printf("Welcome %s! Neeyum C King aagalam 💯\n", name);
    }

    printf("\nLevel 8 Done C King! Strings kathukita 👑\n");
    return 0;
}
