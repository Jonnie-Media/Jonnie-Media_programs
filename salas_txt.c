#include <stdio.h>
#include <stdlib.h> // Required for the exit() function

int main() {
    // 1. Declare variables
    FILE *file_ptr;
    double transaction_amount;
    double total_sales = 0.0;
    const char *filename = "sales.txt";

    // 2. Open the file for reading ("r")
    // Note: The file 'sales.txt' must exist in the same directory as the program
    file_ptr = fopen(filename, "r");

    // 3. Error Check: Verify if the file was opened successfully
    if (file_ptr == NULL) {
        // Display an error message if the file could not be opened
        perror("Error opening file");
        printf("Could not open the file **%s**. Please make sure it exists.\n", filename);
        // Exit the program with a non-zero status code to indicate an error
        return 1;
    }

    // 4. Read transactions and calculate total sales
    printf("Reading transactions from **%s**...\n", filename);
    
    // The fscanf function reads formatted data from the file stream.
    // It returns the number of items successfully matched and assigned (which should be 1 for double).
    // The loop continues as long as a double value is successfully read.
    while (fscanf(file_ptr, "%lf", &transaction_amount) == 1) {
        // Display the transaction as it's being read (optional, but helpful for debugging)
        printf("  Read transaction: $%.2f\n", transaction_amount);
        
        // Add the current transaction amount to the total sales
        total_sales += transaction_amount;
    }
    
    // 5. Close the file (as required by part iii)
    if (fclose(file_ptr) == 0) {
        printf("\nFile **%s** successfully closed.\n", filename);
    } else {
        // This is a rare error, but good practice to check
        perror("Error closing file");
    }

    // 6. Display the final result (as required by part ii)
    printf("\n--- DAILY SALES SUMMARY ---\n");
    printf("The **Total Sales** for the day is: **$%.2f**\n", total_sales);
    printf("---------------------------\n");

    // Return 0 to indicate successful execution
    return 0;
}
