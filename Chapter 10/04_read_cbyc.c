#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("test.txt", "r");
    while (1)
    {
        ch = fgetc(ptr); // when all the content of a file has been read break the loop
        printf("%c", ch);
        
        if (ch == EOF)   // EOF mean End Of File
        {
            break;
        }
        // code
    }
    return 0;
}