// Write a C program to calculate area of a rectangle:
// a. Using hard coded inputs.
// b. Using inputs supplied by the user

#include<stdio.h>

int main(){
    int length, width, area;

    printf("Enter the value of length:");
    scanf("%d",&length);
    printf("Enter the value of width:");
    scanf("%d",&width);
    printf("\n");
    area = length*width;
    printf("The area of rectangle in float equals to: %d", area);

    return 0;
}