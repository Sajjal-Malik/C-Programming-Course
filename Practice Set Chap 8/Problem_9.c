// Write a program to check whether a given character is present in a string or not.

#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "a quick brown fox jumps over the lazy dog";
    char character = 'q';
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == character){
            printf("The character is found in the string!");
            break;   // program will stop after the first occurrence is found
        }
    }
    
    return 0;
}