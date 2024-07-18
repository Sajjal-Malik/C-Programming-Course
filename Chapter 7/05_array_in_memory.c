#include <stdio.h>

int main()
{
    int marks[5]; // Reserves space to store 90 integers
    printf("Enter marks for 5 students:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Address of Marks at index %d is %d\n", i, &marks[i]);
    }

    return 0;
}