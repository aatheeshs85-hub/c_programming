#include<stdio.h>
int main(){
    int i,n,arr[10],count = 0;
    printf("enter the number of elements in the array");
    scanf("%d",&n);

    for(i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    printf("the number of even numbers in the array is %d",count);
}
