#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Malik";
    printf("string is %s and it's length is %d \n", st, strlen(st));

    char source[] = "malik";
    char target[30];
    strcpy(target, source); // target now contains "harry"
    printf("%s %s \n", source, target);

    char s1[12] = "hello ";
    char s2[] = "malik";
    printf("%s \n", strcat(s1, s2)); // s1 now contains "helloharry" <no space in between>

    printf("%d\n",strcmp("far", "joke")); // Negative value
    printf("%d\n",strcmp("joke", "far")); // Positive value
    
    return 0;
}