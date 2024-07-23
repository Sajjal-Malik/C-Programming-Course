// Solve problem 1 using calloc().

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n = 6;
    int *ptr;
    ptr = (int*)calloc(n, sizeof(int));   

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