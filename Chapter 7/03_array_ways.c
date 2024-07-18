#include<stdio.h>

int main(){
    int cgpa[3] = {9, 8, 8};   // arrays can be initialized while declaration
    // int cgpa[] = {9, 8, 8};   // This is also right (mean compiler will get the size automatically)

     for (int i = 0; i < 3; i++)
    {
        printf("Element in array at index %d is %d\n", i, cgpa[i]);
    }
    return 0;
}