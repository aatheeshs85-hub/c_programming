#include<stdio.h>
int main(){
    unsigned int num;
    int pos,value;
    printf("enter the number:");
    scanf("%u",&num);

    printf("enter the position the bit is to be set:");
    scanf("%d",&pos);

    value=num|(1u<<pos);

    printf("the number after the bit is set at %d position:%d",pos,value);
}
