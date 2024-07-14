// Write a program to determine whether a character entered by the user is
// lowercase or not.

#include<stdio.h>

int main(){
    char c = 'a';
    printf("The character is %c\n", c);
    printf("The ASCII value of character %c is %d\n", c,c);

    if (c >= 97 && c <= 122){
        printf("The character is lowercase.\n");
    }
    else {
        printf("The character is not lowercase.\n");
    }
    return 0;
}