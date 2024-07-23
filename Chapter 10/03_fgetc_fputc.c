#include <stdio.h>

int main()
{
    FILE *ptr;
    // ptr = fopen("test.txt", "r");
    // ptr = fopen("test.txt", "w");
    ptr = fopen("test.txt", "a");
    // char c = fgetc(ptr);      // used to read a character from file
    // printf("%c\n", c);
    // char d = fgetc(ptr);      // used to read a character from file
    // printf("%c\n", d);
    

    fputc('c', ptr); // used to write character 'c' to the file according to mode
    return 0;
}