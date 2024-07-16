#include<stdio.h>

int swap (int*, int*);

int swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 5, b = 6;
    printf("Before swapping the values are\n");
    printf("The value of a %d\n", a);
    printf("The value of b %d\n", b);
    swap(&a, &b);
    printf("After swapping the values are\n");
    printf("The value of a %d\n", a);
    printf("The value of b %d\n", b);

    return 0;
}