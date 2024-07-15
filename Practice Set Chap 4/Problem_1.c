// Write a program to print multiplication table of a given number n

#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number you want to print the table of: ");
    scanf("%d",number);

    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d \n",number,i, number*i);
    }
    return 0;
}