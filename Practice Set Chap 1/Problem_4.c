// Write a program to calculate simple interest for a set of values representing
// principal, number of years and rate of interest.

#include<stdio.h>

int main(){
    int p = 40;
    int r = 8;
    int t = 5;
    float simpleInterst = (p*r*t)/100;
    printf("The value of Simple Interest for given values is: %.2f", simpleInterst);
    return 0;
}