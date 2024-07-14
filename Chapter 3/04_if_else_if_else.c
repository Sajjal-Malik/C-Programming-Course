#include<stdio.h>

int main(){
    int age = 61;
        
    if (age < 18){
        printf("You are too young to drive around\n");
    }
    else if(age > 18 && age < 45) {
        
        printf("you can drive \n");
    }
    else if(age >= 45) {
        printf("You are a senior citizen\n");
        printf("you can drive \n");
        printf("drive safely \n");
    }
    else {
        printf("you can not drive \n");
    }
    return 0;
}