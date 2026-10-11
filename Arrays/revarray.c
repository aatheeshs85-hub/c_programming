
#include <stdio.h>

int main() {

    int i,n,arr[10];
    printf("enter the number of elements in an array");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the reverse of an array is");
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
