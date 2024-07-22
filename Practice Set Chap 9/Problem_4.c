//  Write a program to illustrate the use of arrow operator → in C.

#include<stdio.h>

typedef struct employee
{
int code; // This declares a new user defined data type!
float salary;
char name[10];
}Employee; // semicolon is important

int main(){
    
    Employee e1;
    Employee *ptr1 = &e1;
    // (*ptr1)->salary = 100;
    ptr1->salary = 100;
    printf("The value of salary for e1 is %f and ptr1 is %f a\n", e1.salary, ptr1->salary);
    
    return 0;
}