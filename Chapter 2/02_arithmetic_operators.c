#include<stdio.h>

int main(){
    int a = 5,  b = 2, c = 3;
    int z; 
    z = a + b; //legal
    // int z; b*c = z;  //illegal (not allowed)

    // int i = ab; // invalid
    int i = a * b; //valid

    
    printf("The sum of %d and %d is: %d\n", a, b, z);
    printf("The remainder of %d modulus %d is: %d\n",a, b, a%b);

    return 0;
}