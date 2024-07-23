#include<stdio.h>
#include<stdlib.h>

int main(){
    // int n;
    // scanf("%d",&n);
    // int arr[n]; // not allowed in c
    int n;
    int *ptr;
    scanf("%d",&n);   // this input will taken as the size of array using dynamic memory allocation technique
    ptr = (int*)malloc(n*sizeof(int));   

    // now i can put elements into the array
    ptr[0] = 2;
    ptr[1] = 3;
    ptr[2] = 4;
    ptr[3] = 5;
    ptr[4] = 6;

    for (int i = 0; i < n; i++)
    {
        printf("%u \n", ptr[i]);    
    }

    free(ptr);
    return 0;
}