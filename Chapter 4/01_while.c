#include <stdio.h>

int main()
{
    int i = 0;
    while (i <= 4)
    {
        printf("Hello World\n");
        i = i + 1;
    }

    printf("\n");

    int j = 0;
    while (j < 10)
    {
        printf("the value of i is %d\n", j);
        j++;
    }
        return 0;
}