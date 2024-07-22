// . Solve problem 9 for time using ‘typedef’ keyword.

#include<stdio.h>

typedef struct Date {
    int mm;
    int dd;
    int yyyy;
}D;

int compare(D d1, D d2){
    if((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd)){
        return 0;
    }
    if(d1.yyyy > d2.yyyy) {
        return 1;
    }
    else if(d1.yyyy < d2.yyyy) {
        return -1;
    }
    else if(d1.mm > d2.mm) {
        return 1;
    }
    else if(d1.mm < d2.mm) {
        return -1;
    }
    else if(d1.dd > d2.dd) {
        return 1;
    }
    else if(d1.dd < d2.dd) {
        return -1;
    }
}

int main(){

    D d1 = {11, 4, 2022};    
    D d2 = {12, 4, 2022};   
    printf("%d \n", compare(d1, d2));
    
    return 0;
}