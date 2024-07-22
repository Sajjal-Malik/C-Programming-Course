// Write a program with a structure representing a complex number.

#include<stdio.h>

typedef struct Complex
{
    int real;
    int imaginary;
};


int main(){

    struct Complex c = {1, 2};
    printf("The value of vector is %d and %di \n", c.real, c.imaginary);

    return 0;
}