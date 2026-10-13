#include<stdio.h>
int main(){
    int arr[10],n,i;
    printf("enter the number of elements in an array");
    scanf("%d",&n);
    while(n==0){
        printf("the array is empty");
        return 0;
    }

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int zero=1;
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            zero=0;
        }
    }
    if(zero==1){
        printf("the array contains all zeros");
    }
    else{
        printf("the array contains non zero element");
    }
}
