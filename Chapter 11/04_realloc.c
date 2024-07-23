#include<stdio.h>
#include<stdlib.h>

int main(){
    int n = 2;
    int *ptr;
    ptr = (int*)malloc(n*sizeof(int));   

    // now i can put elements into the array
    ptr[0] = 2;
    ptr[1] = 3;

    printf("%u \n", ptr[0]);
    printf("%u \n", ptr[1]);

    ptr = (int*)realloc(ptr, 10 * sizeof(int));   

    return 0;
}