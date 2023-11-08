#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {

    printf("Name: OJASWEE UDGATA\n");
    printf("Regd No.: 2141021001\n");
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Call the user-defined function to convert Celsius to Fahrenheit
    fahrenheit = celsiusToFahrenheit(celsius);
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Call the user-defined function to convert Fahrenheit to Celsius
    celsius = fahrenheitToCelsius(fahrenheit);
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}
