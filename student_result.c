#include <stdio.h>

// i. Define a structure to hold student information
struct Student {
    char name[50];
    char reg_no[20];
    int total_marks;
};

int main() {
    struct Student st;
    FILE *fp;

    // ii. Open the binary file for reading
    fp = fopen("results.dat", "rb");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("Student Examination Results:\n");
    printf("-----------------------------\n");

    // iii. Read and display student records
    while (fread(&st, sizeof(st), 1, fp) == 1) {
        printf("Name: %s\n", st.name);
        printf("Total Marks: %d\n", st.total_marks);
        printf("-----------------------------\n");
    }

    fclose(fp);
    return 0;
}