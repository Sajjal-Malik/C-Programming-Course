// Write a program to calculate the factorial of a given number using a for loop.

#include<stdio.h>

int main(){
    int fact = 1, count;

    printf("Enter the number you want to get the factorial of:\n");
    scanf("%d", &count);

    for (int i = 1; i < count+1 ; i++)
    {
        if (count < 0)
        {
            printf("There is no factorial of negative numbers");
        }
        else if (count == 1)
        {
            printf("Factorial of 1 is 1");
        }
        else 
        {
            fact = fact * i;
        }   

    }
    printf("%d", fact);

    return 0;
}