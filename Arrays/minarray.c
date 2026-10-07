#include<stdio.h>
int main(){
    int n,i,min,arr[100];
    printf("enter the number of elements in the array");
    scanf("%d",&n);

    for(i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    for(i = 1;i<n;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("the smallest element in the array is %d",min);

    return 0;
}
