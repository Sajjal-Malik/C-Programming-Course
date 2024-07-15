#include <stdio.h>

// Function prototype
int sumFunc(int, int);

// Function definition
int sumFunc(int a, int b)
{
    int sum;
    sum = a + b;
    // printf("%d",sum);
    return sum;
}
// Function prototype
void display();

// Function definition
void display()
{
    printf("I am a void function which returns nothing. \n");
}

int main()
{

    // Function call
    int a = 5;
    int b = 10;
    sumFunc(a, b);

    int c = sumFunc(45, 45); // The return of sumFunc will be stored in the varaiable
    printf("%d\n", c);

    display();

    return 0;
}