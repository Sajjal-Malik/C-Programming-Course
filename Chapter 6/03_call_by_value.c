#include<stdio.h>

int sum(int *, int *);

int sum(int* a, int* b){
    *a = 6;
    return *a + *b;
}

int main(){
    
    int x = 1, y = 6;
    printf("sum of %d and %d is %d\n",x, y, sum(&x, &y));
    printf("value of x is %d ",x);

    return 0;
}