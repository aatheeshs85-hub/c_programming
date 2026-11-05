#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5};
    int *p = arr;       // inital taken from 0th index
    for(int i=0;i<5;i++){
        printf("address = %d\n",arr+i);  // can use arr+i or &arr[i]
        printf("value = %d\n",*(arr+i)); // can use *(arr+i) or arr[i]
    }
    printf("the value and address at 3rd position: %d %d",*(p+2),p+2);
}
