#include<stdio.h>
int main(){
    int n,i,arr[10],insert;
    printf("enter the number of elements in an array:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be insert at the beginning:");
    scanf("%d",&insert);

    for(i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=insert;
    n++;
    
    printf("the updated array is");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
