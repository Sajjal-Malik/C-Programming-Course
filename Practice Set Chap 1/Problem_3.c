// Write a program to convert Celsius (Centigrade degrees temperature to
// Fahrenheit).

#include<stdio.h>

int main(){
    int c = 35;
    float f;
    f = ((9.0/5.0) * c) + 32;
    printf("The temperature given %d Centigrade in fahrenheit it is equal to %.2f", c, f);
    return 0;
} 