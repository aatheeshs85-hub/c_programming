#include<stdio.h>
int main(){
    char name[10];
    printf("enter the string");
    scanf("%s",name);   //it reads the string until the whitespace is entered
    gets(name);        //it reads the string also when the whitespace is entered
    printf("%s",name);
}
