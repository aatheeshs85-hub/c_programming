#include <stdio.h>
int main()
{
    int arr[10],n,i,result = 0;
    printf("enter the number of elements in an array:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
        for(i=0;i<n;i++){
            result = result ^ arr[i];
        }
        printf("the single number in an array is %d",result);
    }
