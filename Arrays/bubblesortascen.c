#include <stdio.h>
int main()
{
    int arr[10],n,i,j,temp;
    printf("enter the number of elements in an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
      for(j=0;j<n-1-i;j++){
        if(arr[j] > arr[j+1])    // if(arr[j] < arr[j+1} for descending order
        {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
      }
    }
    printf("the bubble sort for ascending order is");
    for(i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
}
