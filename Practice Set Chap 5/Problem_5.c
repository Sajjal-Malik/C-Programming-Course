#include<stdio.h>

int main(){
    int a = 4;

    printf("%d %d %d \n", a, ++a, a++);  // here evaluation order will be right to left

    return 0;
}