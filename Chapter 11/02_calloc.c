#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int *ptr;
    scanf("%d",&n);   // this input will taken as the size of array using dynamic memory allocation technique
    ptr = (int*)calloc(n, sizeof(int));   

    // now i can put elements into the array
    ptr[0] = 3;
    ptr[1] = 6;
    ptr[2] = 9;

    printf("%u \n", ptr[0]);

    return 0;
}