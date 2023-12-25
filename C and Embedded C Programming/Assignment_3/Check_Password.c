#include <stdio.h>
#include <string.h>

#define MAX_PASSWORD_LENGTH 20

int main() {
    char password[MAX_PASSWORD_LENGTH];
    const char correctPassword[] = "1234";

    do {
        // Input password from the user
        printf("Enter the password: ");
        scanf("%s", password);

        // Check if the entered password is correct
        if (strcmp(password, correctPassword) == 0) {
            printf("Correct Password\n");
            break; // Exit the loop if the password is correct
        } else {
            printf("Incorrect Password\n");
        }

    } while (1); // Infinite loop until a correct password is entered

    return 0;
}
