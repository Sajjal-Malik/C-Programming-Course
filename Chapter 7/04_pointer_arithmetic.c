#include <stdio.h>

int main()
{
    // Pointer arithmetic using integer
    int i = 32;
    int *ptr = &i;
    // Address is not fixed it can change later automatically
    printf("The address of i is: %u\n", &i);  
    printf("The address of ptr(i) is: %u\n", ptr);   
    ptr++;
    printf("The address of ptr is: %u\n", ptr);


    printf("\n");
    
    // Pointer arithmetic using character
    char c = 32;
    char *ptr1 = &c;
    // Address is not fixed it can change later automatically
    printf("The address of c is: %u\n", &c);  
    printf("The address of ptr(c) is: %u\n", ptr1);   
    ptr1++;
    printf("The address of ptr1 is: %u\n", ptr1);



    return 0;
}