#include<stdio.h>
int main(){
    int n,arr[10],i,j,found=0;
    printf("enter the number of elements in an array");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the duplicate elements in an array is");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf(" %d",arr[i]);
                found=1;
                break;
            }
        }
    }
    if(found==0){
    printf("no duplicate elements found in an array");
    }
}

