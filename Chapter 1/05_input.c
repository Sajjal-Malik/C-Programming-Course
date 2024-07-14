#include <stdio.h>

int main()
{

    int a;
    char b;
    scanf("%d", &a);
    scanf("%c", &b);

    printf("%d", a);
    printf("%c", b);

    // Create an integer variable that will store the number we get from the user
    int myNum;

    // Ask the user to type a number
    printf("Type a number: \n");

    // Get and save the number the user types
    scanf("%d", &myNum);

    // Output the number the user typed
    printf("Your number is: %d", myNum);

    // for more about input can see here: https://www.w3schools.com/c/c_user_input.php

    return 0;
}
