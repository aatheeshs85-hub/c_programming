#include<stdio.h>
int main(){
    int n,i,arr[100];
    printf("enter the number of elements in the array");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0;i<n;i++){
        if(i%2==0){
            printf("%d ",arr[i]);
        }
    }
}
