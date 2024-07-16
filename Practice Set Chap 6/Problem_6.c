// Write a program to print the value of a variable i by using “pointer to pointer” type
// of variable.

#include<stdio.h>

int main(){
    int i = 8;
    int* j = &i;
    int** k = &j;

    printf("The value of i is %u\n", &i);
    printf("The value of i is %u\n", j);

    printf("The value of i is %d\n", *(&i));
    printf("The value of i is %d\n", **(&j));


    int a = 4;
    int* ptr = &a;
    int** ptr2 = &ptr;

    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *ptr);
    printf("The value of a is %d\n", **ptr2);
    return 0;
}