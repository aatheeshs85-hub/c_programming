#include<stdio.h>
int main(){
    int arr[10],i,j,max=0,count,n,frequent;
    printf("enter the number of elements in an array");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }

    for(i=0;i<n;i++){
        count = 1;

        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count > max){
            max = count;
            frequent = arr[i];
        }
    }
    printf("the most frequent element in an array is %d\n",frequent);
    printf("the frequency of the element is %d",max);
}
