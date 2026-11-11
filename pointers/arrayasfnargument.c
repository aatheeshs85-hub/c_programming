#include<stdio.h>
void Double(int* A,int size)   // simply A[] can also taken as pointer
{
    int i;
    for(i=0;i<size;i++){
    A[i] = 2 * A[i];     //A[i]  or *(A+i)
    }
}
int main(){
    int A[]={2,5,6,1,7};
    int size = sizeof(A)/sizeof(A[0]);
    Double(A,size);
    printf("double of array is");
    for(int i=0;i<size;i++)
    {
       printf("%d ",A[i]);
    }
}
