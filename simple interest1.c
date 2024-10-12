#include <stdio.h>

int main() {
    float principal, time, rate, simple_interest;

    // Prompt the user to enter the values
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    // Calculate simple interest
    simple_interest = (principal * time * rate) / 100;

    // Display the result
    printf("The Simple Interest is: %.2f\n", simple_interest);

    return 0;
}