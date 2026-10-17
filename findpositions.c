#include<stdio.h>
int main(){
    int i,n,arr[10],target,flag=0;
    printf("enter the number of elements in an array:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
       scanf("%d",&arr[i]); 
    }
    printf("enter the target element:");
    scanf("%d",&target);
   
    for(i=0;i<n;i++){
        if(arr[i]==target){
            if(flag==0){
              printf("the target element present at the positions are:");
            }
            printf("%d ",i+1);
            flag=1;
        }
    }
    if(flag==0){
        printf("the target element is not found in an array");
    }
}
