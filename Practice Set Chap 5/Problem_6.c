#include<stdio.h>

int sumNatural(int);

int sumNatural(int n){
    if (n == 1){
        return 1;
    }
    return sumNatural(n-1) + n;
}

int main(){

    int val = 5;
    printf("Sum of first %d natural numbers is: %d\n", val, sumNatural(val));
    
    return 0;
}