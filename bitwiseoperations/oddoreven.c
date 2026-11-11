#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    if ((num & 1) == 0)  
    {
        printf("the given number %d is even",num);
    }
    else
    {
        printf("the given number %d is odd",num);
    }
}
