#include <stdio.h>

int main()

{   int i;
    for (i = 5; i; i--)   // here condition i means i > 0 
        printf("%d\n", i);

        printf("\n");

    for (i = 10; i >= 5; i--)   // here condition i means i > 0 
        printf("%d\n", i);

    return 0;
}