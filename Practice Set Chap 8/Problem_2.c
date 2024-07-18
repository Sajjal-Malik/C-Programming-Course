// Write a program to take string as an input from the user using %c and %s confirm
// that the strings are equal

#include <stdio.h>

int main()
{
    char st1[6];
    char st2[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%c\n", &st1[i]);
        fflush(stdin);

    }
    st1[5] = '\0';

    printf("%s\n", st1);
    
    
    scanf("%s", st2);
    printf("%s\n", st2);

    return 0;
}