#include<stdio.h>
int main(){
   unsigned int n;
   printf("enter the number:");
   scanf("%d",&n);
 
   if(n>0 && (n & (n-1))==0){          
       printf("the %d powers of 2",n);
   }
   else{
       printf("the %d is not powers of 2",n);
   }
 }
