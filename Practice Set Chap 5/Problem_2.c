// Write a function to convert Celsius temperature into Fahrenheit.

#include<stdio.h>

// Function prototype
float celsiusToFahrenheit(float celsius);

// Function definition to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return ((celsius * 9) / 5) + 32;
}

int main(){

    printf("%.2f", celsiusToFahrenheit(50));

    return 0;
}