#include<stdio.h>
int main(){
    int n,i,max,arr[100];
    printf("enter the number of elements in the array");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("the largest element in the array is %d",max);

    return 0;
}
