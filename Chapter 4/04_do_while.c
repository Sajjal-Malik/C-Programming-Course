#include <stdio.h>
 
int main(){

   // local variable definition
   int a = 1;

   // while loop execution
   do{
      printf("%d\n",a);
      a++;
   } while(a <= 5);
   
   printf("End of loop"); 
   
   return 0;
}