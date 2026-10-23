#include<stdio.h>
int main(){
    int n,i,arr[10],value;
    printf("enter the number of elements in an array:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be added at end:");
    scanf("%d",&value);

    n++;
    arr[n-1]=value;
    printf("updated array is:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
