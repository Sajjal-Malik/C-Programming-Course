// Write a function and pass the value by reference.

#include<stdio.h>

int change_to_ten_times(int*);

int change_to_ten_times(int* a){
    return *a;
}

int main(){

    int x = 45;
    printf("The value of a is %u", change_to_ten_times(&x));
    
    return 0;
}