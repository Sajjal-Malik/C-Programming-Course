#include<stdio.h>
#include<stdlib.h>

int main(){
    float n = 5;
    float *ptr;
    ptr = (float*)malloc(n*sizeof(float));   

    // now i can put elements into the array
    ptr[0] = 2.22;
    ptr[1] = 3.343;
    ptr[2] = 4.4534;
    ptr[3] = 5.234;
    ptr[4] = 6.1312;

    for (int i = 0; i < n; i++)
    {
        printf("%f \n", ptr[i]);
        
    }
    
 
    return 0;
}