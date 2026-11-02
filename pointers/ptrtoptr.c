#include<stdio.h>
int main(){
    int x = 10;
    int *p = &x;
    *p = 7;
    printf("%d\n",*p);           //7 
    printf("%d\n",p);           //6422296
    int **q;
    q = &p;
    printf("%d\n",*(*q));       //7
    printf("%d\n",*q);         //6422296
    printf("%d\n",q);         //6422292
    int ***r;
    r = &q;
    printf("%d\n",*(*(*r)));  //7
    printf("%d\n",*(*r));     //6422296
    printf("%d\n",*r);        //6422292
    printf("%d\n",r);         //6422288
    ***r = 15;
    printf("%d\n",*p);        //15
    printf("%d\n",*p + 2);    //17
}
