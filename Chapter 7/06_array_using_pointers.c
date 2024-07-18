#include<stdio.h>

int main(){
    int marks[] = {78, 90, 89, 98};

    int *ptr = &marks[0];   
    // int *ptr = marks;   // same as int *ptr = &marks[0];

    for (int i = 0; i < 4; i++)
    {
        printf("The marks at index %d is %d\n", i, marks[i]);
    }
    
    printf("\n");

    int num;
    while (num < 4)
    {
     printf("The marks at index %d is %d\n", num, *ptr);
     ptr++;
     num++;
    }
    

    return 0;
}