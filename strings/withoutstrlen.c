#include<stdio.h>
int main(){
    int i,count = 0;
    char name[30];
    printf("enter the name:");
    gets(name);
    for(i = 0;name[i]!='\0';i++){
        count++;
    }
    printf("the length of the string is %d",count);
}
