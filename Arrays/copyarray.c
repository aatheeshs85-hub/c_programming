#include<stdio.h>
int main(){
    int i,arr[10],copy[10];
    for(i = 0;i<5;i++){
        scanf("%d",&arr[i]);
        copy[i]=arr[i];
    }
    printf("the copied array is:");
    for(i = 0;i<5;i++){
        printf("%d ",copy[i]);
    }
}
