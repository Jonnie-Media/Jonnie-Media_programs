#include <stdio.h>

int main() {
    FILE *file;
    float amount, totalSales = 0.0;

    // Open the file for reading
    file = fopen("sales.txt", "r");

    // Check if the file exists or opened successfully
    if (file == NULL) {
        printf("Error: Could not open sales.txt\n");
        return 1; // Exit the program with an error code
    }

    // Read each transaction amount from the file and add to total
    while (fscanf(file, "%f", &amount) != EOF) {
        totalSales += amount;
    }

    // Display total sales
    printf("Total Sales for the Day: %.2f\n", totalSales);

    // Close the file
    fclose(file);

    return 0;
}