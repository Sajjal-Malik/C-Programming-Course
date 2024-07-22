// Write problem 5’s structure using ‘typedef’ keywords.

#include<stdio.h>

typedef struct Complex
{
    int real;
    int imaginary;
}C;


int main(){

    C c = {1, 2};
    printf("The value of vector is %d and %di \n", c.real, c.imaginary);

    return 0;
}