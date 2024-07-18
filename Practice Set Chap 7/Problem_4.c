// Repeat problem 3 for a general input provided by the user using scanf

#include<stdio.h>

int main(){
    int table[10];
    int n;

    scanf("%d", &n);
    printf("printing the table of : %d \n", n);

    for (int i = 0; i <= 10; i++)
    {
        table[i] = n * (i + 1);
        printf("%d\n", table[i]);
    }    
    
    printf("\n");

    printf("%d\n",table[1]);
    printf("%d\n",table[2]);
    printf("%d\n",table[7]);
    printf("%d\n",table[8]);

    return 0;
}