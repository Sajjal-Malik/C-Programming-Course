#include <stdio.h>

int main()
{
    int a = 3.5;                                       // In this case 3.5 (float) will be demoted to 3 (int)
                                                       // because a is not able to store floats.
    float b = 8; // a will store 8.0 | 8 -> 8.0 (promotion to float)

    float c = a / b;

    printf("This Division answer will be a float value \n");
    printf("%f", c);
    printf("\n");

    int k = 3.0 /9; 
    printf("%d", k);

    return 0;
}