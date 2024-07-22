#include<stdio.h>
#include <string.h>

typedef struct employee
{
    /* data */
    int code;
    float salary;
    char name[10];
}Emp; // semi-colon is important

int main(){
    // We can use the ‘typedef’ keyword to create an alias name for data types in C.
    typedef int malik;
    malik num1 = 79;
    // printf("%d\n",num1);

    // typedef struct employee Emp; 
    Emp e1;
    Emp *ptr1 = &e1;
    e1.code = 1234;
    e1.salary = 5000.00;
    strcpy(e1.name, "malik");

    printf("%d %.2f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %.2f %s\n", ptr1->code, ptr1->code, ptr1->code);

    return 0;
}