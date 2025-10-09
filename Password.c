#include <stdio.h>

int main() {
    int password;
    int attempts = 0;

    do {
        printf("Enter password: ");
        scanf("%d", &password);
        attempts++;

        if (password != 1234) {
            printf("Incorrect password. Try again!\n");
        }
    } while (password != 1234);

    printf("Access Granted!\n");
    printf("You took %d attempts to enter the correct password.\n", attempts);

    return 0;
}