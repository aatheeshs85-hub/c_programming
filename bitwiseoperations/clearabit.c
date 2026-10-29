#include<stdio.h>
int main(){
    unsigned int num;
    int pos,value;

    printf("enter the element");
    scanf("%u",&num);

    printf("enter the position to clear a bit");
    scanf("%d",&pos);

    if(pos>=sizeof(num)*8){
       printf("invalid position");
       return 0;
   }
    value=num & ~(1u << pos);    //clear a bit 

    printf("the element after clearing the bit %d",value);
}
