#include <stdio.h>
#include <string.h>
int main(){
    char s1[] = "aatheesh",temp;
    int i,n;
    n = strlen(s1);
    for(i=0;i<n/2;i++){
        temp = s1[i];
        s1[i] = s1[n-1-i];
        s1[n-1-i] = temp;
    }
    printf("%s",s1);
}
