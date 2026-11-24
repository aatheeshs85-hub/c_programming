#include<stdio.h>
int main(){
    unsigned int n;
    int count = 0;
    printf("enter the number:");
    scanf("%u",&n);

    while(n!=0)
    {
        n = n & (n-1);    //Brian Kernighan’s algorithm
        count++;
    }
    printf("the number of set bits is %d",count);
}
