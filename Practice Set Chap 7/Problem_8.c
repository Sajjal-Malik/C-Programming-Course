// Repeat problem 7 for a custom input given by the user.

#include<stdio.h>

int main(){

    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    int arr[3][10];
    int mul[] = {n1, n2, n3};

     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {   
        arr[i][j] = mul[i] * (j + 1);
        }
    }    

     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {   
        printf("The values for arr[%d][%d] are %d\n", i, j, arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}