#include <stdio.h>
int main(){
    int i,n,arr[10],result[10];
    printf("enter the number of elements in an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int left = 0,right = n - 1;
    for(i=0;i<n;i++){
        if(arr[i]>= 0)
        {
            result[left] = arr[i];
            left++;
        }
        else
        {
            result[right] = arr[i];
            right--;
        }
    }
    printf("the array after separated positive and negative number is");
    for(i=0;i<n;i++){
        printf("%d ",result[i]);
    }
}
