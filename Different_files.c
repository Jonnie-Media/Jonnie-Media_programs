#include <stdio.h>

void write_to_file() {
    FILE *file_ptr;
    int numbers[10];
    int i;

    file_ptr = fopen("input.txt", "w");
    if (file_ptr == NULL) {
        printf("Error: Could not open the file for writing.\n");
        return;
    }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        fprintf(file_ptr, "%d\n", numbers[i]);
    }

    fclose(file_ptr);
    printf("10 integers have been written to input.txt\n");
}