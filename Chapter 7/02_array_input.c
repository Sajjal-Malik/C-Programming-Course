#include <stdio.h>

int main()
{
    int marks[5]; // Reserves space to store 90 integers
    printf("Enter marks for 5 students:\n");

    // scanf("%d",&marks[0]);
    // scanf("%d",&marks[1]);
    // scanf("%d",&marks[2]);
    // scanf("%d",&marks[3]);
    // scanf("%d",&marks[4]);

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Marks at index %d is %d\n", i, marks[i]);
    }

    return 0;
}