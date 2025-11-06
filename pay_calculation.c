#include <stdio.h>

int main() {
    float hoursWorked, hourlyWage;
    float grossPay, taxes, netPay;
    
    printf("Enter hours worked in a week: ");
    scanf("%f", &hoursWorked);
    
    printf("Enter hourly wage: ");
    scanf("%f", &hourlyWage);
    
    // Calculate gross pay
    if (hoursWorked > 40) {
        grossPay = (40 * hourlyWage) + ((hoursWorked - 40) * hourlyWage * 1.5);
    } else {
        grossPay = hoursWorked * hourlyWage;
    }
    
    // Calculate taxes
    if (grossPay <= 600) {
        taxes = 0.15 * grossPay;
    } else {
        taxes = (0.15 * 600) + (0.20 * (grossPay - 600));
    }
    
    // Calculate net pay
    netPay = grossPay - taxes;
    
    // Display results
    printf("\nGross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netPay);
    
    return 0;
}