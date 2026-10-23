#include<stdio.h>
int main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    printf("left shift of a:%d\n",a<<2);
    printf("right shift of a:%d\n",a>>3);
    printf("bitwise NOT of a:%d",~a);    //a=-(a+1)
}
