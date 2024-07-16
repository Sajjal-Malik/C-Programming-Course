// Write a program using function to find average of three numbers.

#include <stdio.h>

// Function prototype
int avgFunc(int, int, int);

// Function definition
int avgFunc(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}


int main()
{

    int a = 3, b = 6, c = 5;
    printf("The average of a, b and c is: %f\n", avgFunc(a, b, c));

    return 0;
}