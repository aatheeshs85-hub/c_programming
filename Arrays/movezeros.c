#include <stdio.h>
int main()
{
    int arr[10],result[10],n,i;
    printf("enter the number of elements in an array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int left = 0;
    int right = n-1;
    for(i=0;i<n;i++){
        if(arr[i] != 0)
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
    printf("the array after zeros at one end:");
    for(i=0;i<n;i++){
        printf("%d ",result[i]);
    }
}
