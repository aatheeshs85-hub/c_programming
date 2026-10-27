#include<stdio.h>
int main(){
    unsigned int num,value;
    
    printf("enter the number:");
    scanf("%u",&num);

    value=num|(1u<<0)|(1u<<2)|(1u<<3);
    printf("the number after the bit is:%u",value);
}
