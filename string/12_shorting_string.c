#include <stdio.h>
#include <string.h>
int main ()
{
  char str[100];
  char ch;
  int i,j;
  printf("Enter string\n");
  scanf("%s",str);
  int l = strlen(str);
  for( i=0; i<l;i++)
  {
      for(j=i+1;j<l;j++)
      {
          if(str[i]>str[j])
          {
              ch =str[i];
              str[i]=str[j];
              str[j]=ch;
          }
      }
  }
  
  printf("Sorted string is %s",str);

  return 0;
}