// Write a program to count the occurrence of a given character in a string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "hello bro how are you?";
    int count;
    char character = 'h';
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == character){
            count++;
        }
    }
    printf("%d", count);
    
    return 0;
}