// Write a program to print multiplication table of 10 in reversed order.

#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number you want to print the table of: ");
    scanf("%d",number);

    for (int i = 10; i; i--)
    {
        printf("%d X %d = %d \n",number,i, number*i);
    }
    return 0;
}