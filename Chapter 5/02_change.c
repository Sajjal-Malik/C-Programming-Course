#include <stdio.h>

// Function prototype
int change(int);

// Function definition
int change(int a){    // Misnomer
    a = 77;
    return 0;
}

int main()
{   
    int b = 22;
    // Function call
    change(b);   // The value of b remains 22 
    printf("change is %d\n", b);

    return 0;
}