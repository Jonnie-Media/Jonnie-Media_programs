
/*
Name:John
Reg:26430
Date:3/9/2025
*/

#include <stdio.h>

int main() {
    int units;
    float bill;

    // Prompt user
    printf("Enter the number of water units consumed: ");
    scanf("%d", &units);

    // Calculate bill using if–else if–else
    if (units <= 30) {
        bill = units * 20;
    } else if (units <= 60) {
        bill = units * 25;
    } else {
        bill = units * 30;
    }

    // Display result
    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}