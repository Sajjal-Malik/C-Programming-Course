// Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
// The vectors must be two–dimensional.

#include<stdio.h>

typedef struct Vector
{
    int i;
    int j;
}Vector;

Vector sumVector(Vector v1, Vector v2)
{
    Vector v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}


int main(){

    Vector v1 = {1, 2};
    Vector v2 = {8, 9};
    Vector v3 = sumVector(v1, v2);

    printf("The value of vector is %di and %dj \n", v3.i, v3.j);

    return 0;
}