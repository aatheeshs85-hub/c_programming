#include<stdio.h>
int main(){
    int n,i,arr[10],count=0,target;
    printf("enter the number of elements in an array:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the target element:");
    scanf("%d",&target);
    
    for(i=0;i<n;i++){
        if(arr[i]==target){
            count++;           
        }
    }
    if(count>0){
    printf("the number of occurences of the element in an array is: %d",count);
    }
    if(count==0){
        printf("the element is not found in an array");
    }
}
