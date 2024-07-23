// Take name and salary of two employees as input from the user and write them to
// a text file in the following format:
// i. Name1, 3300
// ii. Name2, 7700

#include<stdio.h>

int main(){
    FILE *ptr;
    char name1[30], name2[30];
    int salary1, salary2;
    ptr = fopen("employee.txt", "w");
    printf("Enter the name of Employee1: \n");
    scanf("%s", name1);
    printf("Enter the salary of Employee1: \n");
    scanf("%d", &salary1);

    printf("Enter the name of Employee2: \n");
    scanf("%s", name2);
    printf("Enter the salary of Employee2: \n");
    scanf("%d", &salary2);
    
    fprintf(ptr, "%s", name1);
    fprintf(ptr, "%s", ", ");
    fprintf(ptr, "%d", salary1);

    fprintf(ptr, "\n");
    
    fprintf(ptr, "%s", name2);
    fprintf(ptr, "%s", ", ");
    fprintf(ptr, "%d", salary2);

    return 0;
}