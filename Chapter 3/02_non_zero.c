#include<stdio.h>

int main(){
    if (1){
        printf("This if will be executed!\n");
    }
    if (12323){
        printf("This if will also be executed!\n");
    }   
    if ('h'){
        printf("This character inside if will be executed as well!\n");
    }
    if (0){
        printf("This if will not be executed because if condition is zero! \n");
    }
    return 0;
}