// Write a program to read a text file character by character and write its content
// twice in separate file.

#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("test.txt", "r");
    ptr2 = fopen("test2.txt", "a");
    while (1)
    {
        ch = fgetc(ptr); // when all the content of a file has been read break the loop
        
        if (ch == EOF)   // EOF mean End Of File
        {
            break;
        }
        else{
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
            
        }

    }
    return 0;
}