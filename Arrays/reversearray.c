#include<stdio.h>
int main(){
    int arr[5]={3,4,5,1,2};
    int *ptr = &arr[4];

    for(int i = 0;i<5;i++){
        printf("%d\n",*ptr);
        ptr--;
    }
}
