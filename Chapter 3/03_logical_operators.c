#include<stdio.h>

int main(){
    int a = 1, b = 1;

    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a and b is %d\n", a||b);
    printf("The value of a and b is %d\n", !(a==b));

    if (a&&b){
        printf("Both are true\n");

    }

    int x = 1;
    int y = 0;

    if(x){
        printf("This will be printed before checking y\n");
        if (y){
            printf("it will be printed if y is true\n");
        }
    }

    return 0;
}