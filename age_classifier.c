#include <stdio.h>

int main() {
    // Adding the Variable and get a inupt
    int age;
    printf("\nPlease enter an age: ");
    scanf("%d", &age);
    // Statements    
        if (age < 12){
        printf("\nYou are a Child.\n");
    } else if (age >= 12 && age < 18){
        printf("\nYour are a Teenager.\n");
    } else if (age >= 18 && age <= 64){
        printf("\nYou are an Adult.\n");
    } else if (age >= 65){
        printf("\nYou are a Senior.\n");
    }
    // End of the program
    return 0;
}