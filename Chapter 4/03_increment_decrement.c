#include <stdio.h>

int main()
{
    int a = 5, b = 5, c = 5, d = 5;

    a++; // postfix increment   prints first increases value later
    ++b; // prefix increment    increases value first prints later
    c--; // postfix decrement   prints first decreases value later
    --d; // prefix decrement    decreases value first prints later

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);

    return 0;
}