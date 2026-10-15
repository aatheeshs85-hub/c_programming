#include<stdio.h>
int main(){
    int n,i,arr[10],target,flag=0;
    printf("enter the number of elements in an array");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the target element in an array");
    scanf("%d",&target);

    for(i=0;i<n;i++){
        if(arr[i]==target){
            printf("the target element found in %d position",i+1);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("the target element is not found");
    } 
}
