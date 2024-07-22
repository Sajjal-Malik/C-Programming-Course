// Create an array of 5 complex numbers created in Problem 5 and display them
// with the help of a display function. The values must be taken as an input from
// the user.

#include <stdio.h>

typedef struct Complex
{
    int real;
    int imaginary;
} C;

void display(C c)
{
    printf("The value of vector is %d and %di \n", c.real, c.imaginary);
}

int main()
{

    C cArr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part \n");
        scanf("%d", &cArr[i].real);
        printf("Enter imaginary part \n");
        scanf("%d", &cArr[i].imaginary);
        display(cArr[i]);
    }

    return 0;
}