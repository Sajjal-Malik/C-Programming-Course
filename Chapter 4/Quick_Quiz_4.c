#include <stdio.h>

int main()
{   

    int i = 10; int n;

    scanf("%d",&n);
    
    for (i; i >= n; i--)
    {
        printf("The value of i is %d\n", i);
    }
    return 0;
}