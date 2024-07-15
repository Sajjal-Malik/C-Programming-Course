// Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>

int main()
{
    int n = 11;
    int i = 2;
    int not_prime = 0;

    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {

        while (i < n)
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
            i++;
        }
    }

    if (not_prime)
    {
        printf("%d is not a prime number!\n", n);
    }
    else
    {
        printf("%d is a prime number!\n", n);
    }

    return 0;
}