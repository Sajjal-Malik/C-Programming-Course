#include <stdio.h>

int main()
{

    // address of symbol -->   (&)
    // value at address of symbol --> (*)

    int i = 10;
    int* j = &i;   // j is a pointer, pointing to i  (means storing it's address or pointing towards it's address)
    int k = 50;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %u\n", &i);
    printf("The address of i is %p\n", j);
    printf("The address of i is %u\n", &k);   // %u show the integer value of the address (for pointers)

    printf("The value at address j is %d\n", *(&j));

    char m = 'A';
    char* n = &m;

    printf("The address of charater 'A' at m is is %p\n", n);
    printf("The address of charater 'A' at m is is %u\n", n);

    float y = 5.4234;
    float* z = &y;

    printf("The address of float value %.4f at m is is %p\n",y, z);
    printf("The address of float value %.4f at m is is %u\n",*z, z);


    return 0;
}