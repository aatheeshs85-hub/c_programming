#include<stdio.h>
int main(){
    int n,i,arr[10],largest,second,third,flag=0,temp;
    printf("enter the number of elements in an array");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
largest=arr[0];
second=arr[1];
third=arr[2];
 if(largest<second){
    temp=largest;
    largest=second;
    second=temp;
 }
 if(second<third){
    temp=second;
    second=third;
    third=temp;
 }
 if(largest<second){
    temp=largest;
    largest=second;
    second=temp;
 }

 for(i=3;i<n;i++){
    if(arr[i]>largest){
        third=second;
        second=largest;
        largest=arr[i];
        flag=1;
    }
    else if(arr[i]>second){
        third=second;
        second=arr[i];
        flag=1;
    }
    else if(arr[i]>third){
        third=arr[i];
        flag=1;
    }
 }
 printf("the third largest element in an array is %d",third);
}

