// 3.0 + 1 will be:
// a. Integer.
// b. Floating point number.
// c. Character

#include<stdio.h>

int main(){
    int num1 = 1;
    float val1 = 3.0;
    float ans = val1 + num1;   // operation between float and int result into float 
    printf("%.2f", ans);
    
    return 0;
}