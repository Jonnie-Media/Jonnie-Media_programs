#include <stdio.h>

// Function prototype
float calculateFare(float distance);

int main() {
    float distance, fare;

    // Prompt the user to enter the distance
    printf("Enter the distance traveled (in km): ");
    scanf("%f", &distance);

    // Call the function
    fare = calculateFare(distance);

    // Display the result
    printf("Total fare: KSh. %.2f\n", fare);

    return 0;
}

// Function definition
float calculateFare(float distance) {
    float rate = 50.0;  // Fare rate per km
    return distance * rate;
}