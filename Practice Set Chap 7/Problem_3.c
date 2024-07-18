// Write a program to create an array of 10 integers and store multiplication table of
// 5 in it.

#include<stdio.h>

int main(){
    int table[10];

    for (int i = 0; i <= 10; i++)
    {
        table[i] = 5 * (i + 1);
        printf("%d\n", table[i]);
    }    
    
    printf("\n");

    printf("%d\n",table[1]);
    printf("%d\n",table[2]);
    printf("%d\n",table[7]);
    printf("%d\n",table[8]);

    return 0;
}