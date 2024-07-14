// Write a program to find greatest of four numbers entered by the user.

#include<stdio.h>

int main(){
    int num1 = 23, num2 = 34, num3 =45, num4 = 56;
    if (num1 > num2 && num1 > num3 && num1 > num4){
        printf("num1 is greater than all");
    }
    else if (num2 > num1 && num2 > num3 && num2 > num4){
        printf("num2 is greater than all");
    }
    else if (num3 > num1 && num3 > num2 && num3 > num4){
        printf("num3 is greater than all");
    }
    else if (num4 > num1 && num4 > num2 && num4 > num3){
        printf("num4 is greater than all");
    }
    else{
        printf("All are equal");
    }
    return 0;
}
