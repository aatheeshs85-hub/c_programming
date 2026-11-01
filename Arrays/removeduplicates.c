#include<stdio.h>
int main(){
    int n,i,j,k,arr[100];
    printf("enter the number of elements in an array");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("after removing duplicate elements");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;){
            if(arr[i]==arr[j]){
                for(k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
            }
            else{
                j++;
            }
        }
    }
    printf("after removing the duplicate elements");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
