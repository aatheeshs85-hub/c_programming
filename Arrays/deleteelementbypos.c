#include<stdio.h>
int main(){
    int i,pos,n,arr[10];
    printf("enter the number of elements in an array");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the position of the element to be deleted");
    scanf("%d",&pos);

    for(i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("updated array is");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
