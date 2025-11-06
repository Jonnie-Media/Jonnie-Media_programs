#include <stdio.h>

int main() {
    FILE *file;
    char title[200];

    // Open file in append mode so old records are not erased
    file = fopen("borrowed_books.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the book title: ");
    fgets(title, sizeof(title), stdin);  // Reads the whole line including spaces

    // Write to the file
    fputs(title, file);

    // Close the file
    fclose(file);

    printf("Book title stored successfully!\n");

    return 0;
}