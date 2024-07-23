#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("test.txt", "r");
    if (ptr == NULL)
    {
        printf("The file does not exist! \n");
    }
    else
    {

        int num;
        fscanf(ptr, "%d", &num); // fscanf is file counterpart of scanf
        printf("The value of num is %d \n", num);
        fscanf(ptr, "%d", &num); // fscanf is file counterpart of scanf
        printf("The value of num is %d \n", num);
    }

    fclose(ptr);
    return 0; 
}