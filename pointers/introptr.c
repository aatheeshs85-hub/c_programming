#include<stdio.h>
int main(){
    int *p,a;
    a=5;
    p=&a;
    printf("%p\n",p);     //address at a pointing by the pointer p
    printf("%p\n",&a);    //address at a
    printf("%d\n",*p);    //value at the address a (dereferening)
    printf("%p",&p);      //address at pointer p
}
