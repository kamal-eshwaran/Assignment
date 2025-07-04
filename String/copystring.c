#include<stdio.h>

int main()
{
  char s[6] = "level"; 
  char a[6] = {};
  int i, j, k;        
  for (i = 0; s[i]; i++); 
                     
  printf("%d\n", i);     

 
  for (int j = 0; j < i; j++)
  {
   a[j]=s[j];
  }

  a[i]=s[i];
  
  printf("%s %s ",s,a);
}

