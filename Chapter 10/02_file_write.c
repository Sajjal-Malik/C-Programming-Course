#include <stdio.h>

int main()
{
    FILE *fptr;
    // fptr = fopen("test.txt", "w");   // write mode will clear the previous data and write new on every execution
    fptr = fopen("test.txt", "a");   // to add data into the existing data in the file we will use append mode
    int num = 432;
    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
}