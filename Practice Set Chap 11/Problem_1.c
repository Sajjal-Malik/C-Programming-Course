// Write a program to dynamically create an array of size 6 capable of storing 6
// integers.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n = 6;
    int *ptr;
    ptr = (int*)malloc(n*sizeof(int));   

    // now i can put elements into the array
    ptr[0] = 20;
    ptr[1] = 30;
    ptr[2] = 40;
    ptr[3] = 50;
    ptr[4] = 60;
    ptr[5] = 70;

    printf("%u \n", ptr[0]);
    printf("%u \n", ptr[1]);
    printf("%u \n", ptr[2]);
    printf("%u \n", ptr[3]);
    printf("%u \n", ptr[4]);
    printf("%u \n", ptr[5]);

    return 0;
}