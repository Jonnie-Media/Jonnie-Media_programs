#include <stdio.h>
#include <string.h>

#define MAX_TITLE_LENGTH 100 // Maximum length for a book title

int main() {
    // 1. Declare the file pointer and a buffer for the book title
    FILE *file_ptr;
    char book_title[MAX_TITLE_LENGTH];
    const char *filename = "borrowed_books.txt"; // The name of the file

    // 2. Prompt the user for the book title
    printf("📚 Welcome to the Library Book Title Logger 📚\n");
    printf("Please enter the title of the book borrowed (max %d characters):\n", MAX_TITLE_LENGTH - 1);

    // Use fgets to safely read a line of input, including spaces
    if (fgets(book_title, MAX_TITLE_LENGTH, stdin) == NULL) {
        // Handle case where input fails
        fprintf(stderr, "Error reading input.\n");
        return 1;
    }

    // 3. Remove the newline character ('\n') added by fgets, if present
    size_t len = strlen(book_title);
    if (len > 0 && book_title[len - 1] == '\n') {
        book_title[len - 1] = '\0';
    }

    // --- File Writing Process ---
    
    // 4. Open the file in 'append' mode ("a")
    // This is crucial. 'a' will create the file if it doesn't exist 
    // AND will add new data to the end without deleting old data.
    file_ptr = fopen(filename, "a");

    // 5. Check if the file was opened successfully
    if (file_ptr == NULL) {
        fprintf(stderr, "\n❌ ERROR: Could not open the file '%s'.\n", filename);
        // Using stderr for error messages is a good practice
        return 1; // Return an error code
    }

    // 6. Write the book title to the file
    // We write the title followed by a newline character so each entry is on a new line
    fprintf(file_ptr, "%s\n", book_title);

    // 7. Close the file to ensure the data is saved
    fclose(file_ptr);

    // 8. Display a confirmation message
    printf("\n✅ SUCCESS! The title '%s' has been successfully stored in '%s'.\n", book_title, filename);

    return 0; // Indicate successful execution
}
