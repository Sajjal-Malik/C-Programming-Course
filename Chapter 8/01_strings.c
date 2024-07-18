#include <stdio.h>

int main()
{
    // char st[] = {'h','e','l','l','o', '\0'};
    char st[] = "hello"; // same as // char st[] = {'h','e','l','l','o', '\0'};

    for (int i = 0; i < 5; i++)
    {
        // printf("character is %c \n", st[i]);
        printf("%c", st[i]);
    }

    printf("\n");

    printf("%s", st);
    return 0;
}