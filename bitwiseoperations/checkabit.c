#include<stdio.h>
int main(){
    unsigned int num;
    int pos;
    printf("enter the number: ");
    scanf("%u",&num);
    printf("enter the position to check the bit:");
    scanf("%d",&pos);
    if( pos < 0 || pos>=sizeof(num) * 8){
        printf("invalid position");
        return 0;
    }
    if((num & (1u<<pos)) != 0u){
        printf("bit is ON");
    }
    else{
        printf("bit is OFF");
    }
}
