#include<stdio.h>

int factorial(int);

int factorial(int n){
    if (n == 0 || n == 1)   // Base Condition
        return 1;
    return n * factorial(n - 1);
}

int main(){

    int a = 5;

    printf("factorial of %d is %d\n", a, factorial(a));

    return 0;
}