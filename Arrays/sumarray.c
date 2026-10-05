#include<stdio.h>
int main(){
    int arr[5] = {2,4,5,5,6};
    int* ptr = arr;
    int sum = 0;
        for(int i = 0;i<5;i++){
        sum = sum + *ptr;
        ptr++;
        }
        printf("%d",sum);
}
