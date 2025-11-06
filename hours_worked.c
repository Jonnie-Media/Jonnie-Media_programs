#include <stdio.h>

int main() {
    float hours, wage;
    float grossPay, tax, netPay;
    
    // Input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &wage);

    // Calculate gross pay with overtime
    if (hours > 40) {
        grossPay = (40 * wage) + ((hours - 40) * wage * 1.5);
    } else {
        grossPay = hours * wage;
    }

    // Calculate taxes
    if (grossPay <= 600) {
        tax = grossPay * 0.15;
    } else {
        tax = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }

    // Calculate net pay
    netPay = grossPay - tax;

    // Output results
    printf("\nGross Pay = $%.2f\n", grossPay);
    printf("Taxes     = $%.2f\n", tax);
    printf("Net Pay   = $%.2f\n", netPay);

    return 0;
}