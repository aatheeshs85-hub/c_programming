#include<stdio.h>
int main(){
    int i,j,n,arr[10],count=0;
    int visit[10]={0};
    printf("enter the number of elements in an array:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(visit[i]==1){
            continue;
        }
            count=1;
        
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                visit[j]=1;
            }
        }
          printf("%d occures %d times\n",arr[i],count);
    }
}
