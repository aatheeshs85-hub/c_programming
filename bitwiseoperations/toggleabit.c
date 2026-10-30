#include<stdio.h>
int main(){
    unsigned int num,value;
    int pos;
    printf("enter the number:");
    scanf("%u",&num);
    printf("enter the position:");
    scanf("%d",&pos);

    if(pos>=sizeof(num) * 8){
        printf("invalid position");
        return 0;
    }
    value=num ^ (1u<<pos);  // toggle a bit (1 to 0 or 0 to 1)
  
    printf("the number after toggling a bit: %u",value);
}
