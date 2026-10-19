#include<stdio.h>
int main(){
    int n,i,arr[10],small,sec_small,found=0;
    printf("enter the number of elements in an array:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    if(arr[0]<arr[1]){
        small=arr[0];
        sec_small=arr[1];
        found=1;
    }
    else{
        small=arr[1];
        sec_small=arr[0];
        found=1;
    }

    for(i=2;i<n;i++){
        if(arr[i]<small){
            sec_small=small;
            small = arr[i];
            found=1;
        }
        else if(arr[i]>small)
           if(found ==0 || arr[i]<sec_small){
            sec_small=arr[i];
            found=1;
        }
    }
    if(found==1){
    printf("the second distinct smallest element is: %d",sec_small);
    }
    else{
        printf("No distinct second smallest element");
    }
}
