#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("test.txt", "r");
    int num;
    fscanf(ptr, "%d", &num); // fscanf is file counterpart of scanf
    printf("The value of num is %d \n", num);
    fscanf(ptr, "%d", &num); // fscanf is file counterpart of scanf
    printf("The value of num is %d \n", num);
    
    fclose(ptr);
    return 0;
}