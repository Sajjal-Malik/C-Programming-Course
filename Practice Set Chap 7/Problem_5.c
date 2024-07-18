#include<stdio.h>

void printArr(int a[], int n);

void printArr(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void reverseArr(int a[], int n);

void reverseArr(int a[], int n){
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    
}

int main(){
    int arr[] =  {1,2,3,4,5,6,7};
    printArr(arr, 7);
    reverseArr(arr, 7);
    printArr(arr, 7);

    return 0;   
}