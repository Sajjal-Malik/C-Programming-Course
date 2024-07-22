#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};   // semi-colon is important

int main(){
    struct employee e1;
    e1.code = 1234;
    e1.salary = 5000.00;
    strcpy(e1.name, "malik");

    printf("%d %.2f %s", e1.code, e1.salary, e1.name);

    return 0;
}