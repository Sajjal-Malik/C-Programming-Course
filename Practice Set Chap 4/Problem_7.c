// Write a program to sum first ten natural numbers using for loop.

#include<stdio.h>

int main(){
    int i;
    int sum = 0;
    for (i = 1; i <= 10; i++) {
        sum += i;
    }
    printf("The sum of first 10 natural numbers is: %d\n",sum);

    return 0;

}