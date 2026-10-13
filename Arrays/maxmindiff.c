#include<stdio.h>
int main(){
    int max,min,n,arr[10],i;
    printf("enter the number of elements in an array");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=1;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
    }
        if(min>arr[i]){
        min = arr[i];
    }
}
    printf("the difference between max and min element in an array is %d",max-min);
}
