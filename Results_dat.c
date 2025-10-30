#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Maximum lengths for string fields
#define NAME_LENGTH 50
#define REG_NUM_LENGTH 15

// i. Define a structure to hold the student information
typedef struct {
    char name[NAME_LENGTH];
    char reg_number[REG_NUM_LENGTH];
    int total_marks;
} Student;

// Function to create a sample results.dat file
void create_sample_file() {
    FILE *file;
    // Attempt to open the file in binary read mode to check if it exists
    file = fopen("results.dat", "rb");

    if (file != NULL) {
        // File already exists, close it and exit the function
        fclose(file);
        return;
    }

    // File does not exist, create it and write some sample data
    file = fopen("results.dat", "wb");
    if (file == NULL) {
        perror("Error creating results.dat");
        return;
    }

    Student sample_students[] = {
        {"Alice Smith", "R1001/2023", 85},
        {"Bob Johnson", "R1002/2023", 72},
        {"Charlie Brown", "R1003/2023", 91},
        {"Diana Prince", "R1004/2023", 68}
    };

    size_t num_students = sizeof(sample_students) / sizeof(Student);

    // Write all records to the file at once
    if (fwrite(sample_students, sizeof(Student), num_students, file) != num_students) {
        fprintf(stderr, "Error writing sample data to results.dat\n");
    } else {
        printf("Created a sample binary file 'results.dat' with %zu records.\n\n", num_students);
    }

    fclose(file);
}

int main() {
    // Ensure the data file exists before trying to read from it
    create_sample_file();

    FILE *file;
    Student student_record;
    size_t records_read = 0;

    // ii. Reads all student records from the binary file
    file = fopen("results.dat", "rb"); // Open in binary read mode

    if (file == NULL) {
        perror("Error opening results.dat");
        return 1;
    }

    printf("--- Student Examination Results ---\n");
    printf("%-30s %s\n", "Student Name", "Total Marks");
    printf("-----------------------------------\n");

    // Loop until fread fails (end of file or read error)
    while (fread(&student_record, sizeof(Student), 1, file) == 1) {
        // iii. Displays the name and marks of each student on the screen
        printf("%-30s %d\n", student_record.name, student_record.total_marks);
        records_read++;
    }

    printf("-----------------------------------\n");

    // Check if any records were read
    if (records_read == 0) {
        if (feof(file)) {
            printf("The file 'results.dat' was empty.\n");
        } else {
            // An error occurred during reading (not just EOF)
            perror("Error reading from results.dat");
        }
    } else {
        printf("Successfully read and displayed %zu records.\n", records_read);
    }

    fclose(file); // Close the file

    return 0;
}
