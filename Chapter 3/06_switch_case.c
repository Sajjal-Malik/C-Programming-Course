#include<stdio.h>

int main(){
    int a;
    printf("Enter value of a:\n");
    scanf("%d",&a);

    switch(a){
        case 1:
            printf("Value of a: %d\n",a);
            break;
        case 2:
            printf("Value of a: %d\n",a);
            break;
        case 3:
            printf("Value of a: %d\n",a);
            break;
        case 4:
            printf("Value of a: %d\n",a);
            break;
        default:
            printf("Nothing matched");
    }       
    return 0;
}