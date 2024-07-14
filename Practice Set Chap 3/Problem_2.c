// Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user.

#include<stdio.h>

int main(){
    int marks1, marks2, marks3;
    printf("Enter your marks1:\n");
    scanf("%d",&marks1);
    printf("Enter your marks2:\n");
    scanf("%d",&marks2);
    printf("Enter your marks3:\n");
    scanf("%d",&marks3);
    printf("The marks are %d, %d and %d\n",marks1,marks2,marks3);

    if(marks1<33 || marks2<33 || marks3<33)
        printf("You are failed due to less marks in individual subjects!\n");
    else if((marks1+marks2+marks3)/3 < 40)
        printf("You are failed due to less percentage!\n");
    else
        printf("You are pass and your percentage is greater than 40!");
        
    return 0;
}