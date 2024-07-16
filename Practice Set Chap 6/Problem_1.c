// Write a program to print the address of a variable. Use this address to get the
// value of the variable

#include<stdio.h>

int main(){
    int i = 2;
    int* ptr = &i;
    printf("The address of i %p\n", &i);   // memory address    (address of)   (&)
    printf("The address of i %u\n", &i);   // memory address in integer format     
    printf("The address of i %d\n", *ptr);   // value at address (*)
    return 0;
}