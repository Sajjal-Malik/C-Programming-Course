#include <stdio.h>
#include <string.h>

void show(struct employee e); // function prototype

void show(struct employee e)
{
    printf("Employee ID: %d\n", e.code);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
}
struct employee
{
    int code;
    float salary;
    char name[10];
}; // semi-colon is important

int main()
{
    struct employee emp1 = {101, 50000.0, "Malik"};

    show(emp1);

    return 0;
}