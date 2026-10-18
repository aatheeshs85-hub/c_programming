#include<stdio.h>
int main(){
    int n,i,arr[10],largest,sec_largest;
    printf("enter the number of elements in an array");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[0]>arr[1]){
        largest=arr[0];
        sec_largest=arr[1];
    }
    else{
        largest=arr[1];
        sec_largest=arr[0];
    }
    for(i=2;i<n;i++){
        if(arr[i]>largest){

            sec_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]<=largest && arr[i]>sec_largest){
            sec_largest=arr[i];
        }
    }
    printf("the second largest element in an array is %d",sec_largest);
}
