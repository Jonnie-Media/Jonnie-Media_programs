
/*
Name:John
Reg:26430
Date:3/9/2025
*/
#include <stdio.h>

int main() {
    float attendance,averageMarks;
    
    //prompt user to enter attendance and marks
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);
    
    printf("Enter average marks: ");
    scanf("%f", &averageMarks);
    
    //check eligibility
    if (attendance >= 75 && averageMarks >= 40) {
        printf("ELLIGIBLE FOR FINAL EXAMS.\n");
   } else {
     printf("NOT ELLIGIBLE.\n");
 }
     return 0;
 }        