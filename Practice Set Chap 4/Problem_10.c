// Write a program to calculate the factorial of a given number using while loop.

#include<stdio.h>

int main(){
    int i = 1, fact = 1, count;

    printf("Enter the number you want to get the factorial of:\n");
    scanf("%d", &count);

    while (i < count+1)
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
        i++;
    }
    printf("%d", fact);

    return 0;
}