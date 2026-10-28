#include<stdio.h>
int main(){
    int n,i,pos,arr[10],value;

    printf("enter the number of elements in an array");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the position the element to be inserted");
    scanf("%d",&pos);

    printf("enter the element to be inserted");
    scanf("%d",&value);

    for(i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    n++;

    printf("updated array is");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
