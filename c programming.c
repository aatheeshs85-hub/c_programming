/*#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",a+b);
}*/

/*swapping of two numbers
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping %d %d",a,b);
}*/
/*#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("the given number is even");
    }
    else{
        printf("the given number is odd");
    }
}*/
/*#include<stdio.h>
int main(){
    int a,b;
    char op;
    printf("enter the sign:");
    scanf("%c",&op);
    printf("enter the two numbers:");
    scanf("%d %d",&a,&b);

    switch(op){
        case'+':
            printf("%d",a+b);
            break;
        case'-':
            printf("%d",a-b);
            break;
        case'*':
            printf("%d",a*b);
            break;
        case'/':
            printf("%d",a/b);
            break;
        default:
            printf("invalid oprator");
    }
    return 0;
}*/
/*#include<stdio.h>
int main(){
    char a='a';
    printf("%d",a);
}*/
/*#include<stdio.h>
int main(){
    float cp,sp;
    printf("enter the cost price");
    scanf("%f",&cp);
    printf("enter the selling price");
    scanf("%f",&sp);

    if(cp>sp){
        printf("you have the loss of %2f",cp-sp);
    }
    else if(sp>cp){
        printf("you have the profit of %2f",sp-cp); 
    }
    else{
        printf("no profit and no loss12");
    }
}*/
/*#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2!=0){
        sum = sum+i;
        }
    }
    printf("%d",sum);
}*/
/*#include<stdio.h>
int main(){
    int n,i;
    printf("enter the multiplication table");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
}*/
/*#include<stdio.h>
int main(){
    int i,j,count,a,b,prime;
    printf("enter the range of the values:");
    scanf("%d %d",&a,&b);

    for(i=a;i<=b;i++){
        if(i<=1){
            continue;
        }
        prime = 1;
        for(j=2;j<i;j++){
            if(i%j == 0){
                prime = 0;
                break;
            }
        }
    if(prime == 1){
        printf("%d ",i);
    }
}
}*/
/*#include<stdio.h>
#include<math.h>
int main(){
    int n,sum = 0,digit=0,temp,rem;

    printf("enter the number");
    scanf("%d",&n);
    temp = n;
    while(temp>0){
       temp/=10;
       digit++;
    }
    temp = n;
    while(temp>0){
        rem = temp%10;
        sum+=round(pow(rem,digit));
        temp/=10;
    }
    printf("sum = %d\n",sum);
    printf("n = %d\n",n);
    if(sum == n){
        printf("the given number is armstrong number");
    }
    else{
        printf("the given number is not armstrong number");
    }
}*/
/*#include<stdio.h>
int main(){
    int a=12,b=9;
    int *p , *q;
    p = &a;
    q = &b;
    printf("value of a = %d\n",*p);
    printf("value of b = %d\n",*q);
    printf("address of a = %x\n",p);
    printf("address of b = %x\n",q);
    printf("address of p = %x\n",&p);
}*/
/*#include<stdio.h>
int main(){
    int a=1,b=2;
    int *p,*q;
    p = &a;
    q = &b;
    //q = p;
    //*q = *p;
    printf("a = %d %d %d",a,*p,*q);
}*/
/*#include<stdio.h>
int main(){
    int a=10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;
    printf("a = %d %d %d %d",a,*p,*(*q),*(*(*r)));
    printf("\naddress of a = %x",p);
}*/
/*{
    int a[5]={2,3,5,3,2,};
    int *p=&a[0];

    printf("value of a:%d\n",*p);
    printf("address of a: %u\n",p);
    p=p+2;
    printf("value of a:%d\n",*p);
    printf("address of a:%u\n",p);
}*/
/*#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int *p=a;
    int *q=&a[4];
    printf("p-q=%d\n",p-q);
    printf("q-p=%d\n",q-p);
    q=q-3;
    p=p+2;
    printf("value at q after updation = %d\n",*q);
    printf("value at p after updation = %d\n",*p);
    printf("q-p=%d\n",q-p);
}*/
#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6};
    int *p=&a[1];
    printf("%d\n",*p++);
    printf("%d\n",*++p);
    printf("%d %d\n",*--p,*--p);
    printf("%d",*p--);
}