#include<stdio.h>

int main(){
    int marks[90];   // Reserves space to store 90 integers

    marks[0] = 79;
    marks[1] = 94;
    marks[2] = 99;
    // we can go all the way from marks[0] to makrs[89] == marks[90] complete
    printf("Marks 0 and Marks 1 are %d and %d respestively\n", marks[0], marks[1]);

    return 0;
}