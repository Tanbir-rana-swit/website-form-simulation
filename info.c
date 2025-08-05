#include <stdio.h>

int main() {
    char name[50];
    char email[50];
    int age;

    printf("=== Welcome to My Website Simulation ===\n\n");

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your email: ");
    fgets(email, sizeof(email), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\n--- Your Submitted Info ---\n");
    printf("Name : %s", name);
    printf("Email: %s", email);
    printf("Age  : %d\n", age);

    printf("\nThank you for visiting!\n");

    return 0;
}
