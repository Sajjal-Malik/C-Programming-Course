#include <stdio.h>

int main()
{

    for (int i = 0; i < 10; i++)
    {
        if (i == 5){
            // break;  // exit the loop now!
            continue;  // skip thie iteration now!
        }

        printf("The value of i is %d\n", i);
    }
    printf("Foor loop is done!");

    return 0;
}


