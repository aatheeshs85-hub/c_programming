#include <stdio.h>
#include <string.h>
int main()
{
  char s1[10],s2[10];
  int i,value,flag = 0;
  fgets(s1,10,stdin);
  fgets(s2,10,stdin);

  s1[strcspn(s1,"\n")]='\0';
  s2[strcspn(s2,"\n")]='\0';

  for(i = 0;s1[i]!='\0' || s2[i]!='\0';i++){
    if(s1[i]!=s2[i])
    {
        flag =1;
        break;
    }
  }
  if(flag == 0)
  {
    printf("the both strings are same");
  }
  else
  {
    printf("the both strings are not same");
  }
  }
