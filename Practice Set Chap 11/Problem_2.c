// Use the array in problem 1 to store 6 integers entered by the user.

// Write a program to dynamically create an array of size 6 capable of storing 6
// integers.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n = 6;
    int *ptr;
    ptr = (int*)malloc(n*sizeof(int));   

    // now i can put elements into the array
    
    for (int i = 0; i < n; i++)
    {
        scanf("%u \n", &ptr[i]);
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%u \n", ptr[i]);
        
    }


    return 0;
}