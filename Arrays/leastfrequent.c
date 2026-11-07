#include<stdio.h>
int main(){
    int i,j,n,arr[10],min,count,frequent;
    printf("enter the number of elements in array");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    min = n + 1;
    
    for(i=0;i<n;i++){
        count = 0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count < min){
            min = count;
            frequent = arr[i];
        }
    }
    printf("the least frequent element in an array is %d\n",frequent);
    printf("the frequency of the element is %d",min);
}
