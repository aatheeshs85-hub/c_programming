#include <stdio.h>
#include <string.h>
int main()
{
    int i,count1,count2;
    char name1[50],name2[50];
    fgets(name1,50,stdin);
    fgets(name2,50,stdin);

    name1[strcspn(name1, "\n")] = '\0';
    name2[strcspn(name2, "\n")] = '\0';
  
    count1 = strlen(name1);
    count2 = strlen(name2);

    for(i = 0;i<=count2;i++){
        name1[count1 + i] = name2[i];
    }
    printf("the concatenate two string is: %s",name1);

}
