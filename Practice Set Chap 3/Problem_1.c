#include <stdio.h>

int main()
{
    // What will be the output of this program
    int a = 10;
    // if there is only one line statement in if and else block we can skip curly brackets

    if (a = 11)   // condition evaluates to true because a is a non zero assignment value here so
        printf("I am 11");  // This line will be executed
    else
        printf("I am not 11");

    return 0;
}