#include<stdio.h>
int main(){
    int a=1026;
    int *p=&a;
    printf("size of the integer is %d bytes\n",sizeof(int));
    printf("address = %d,value =%d\n",p,*p);
    printf("address = %d,value =%d\n",p+1,*(p+1));
    char *p0;
    p0=(char*)p; //typecasting
    printf("size of the character is %d bytes\n",sizeof(char));
    printf("address = %d,value =%d\n",p0,*p0);
    printf("address = %d,value =%d",p0+1,*(p0+1));
}
