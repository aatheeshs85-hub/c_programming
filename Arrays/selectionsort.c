#include <stdio.h>
int main()
{
    int arr[10],n,min,i,j,temp;
    printf("enter the number of elements in an array:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    printf("the array after the selection sort is:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
