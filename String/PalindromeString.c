#include <stdio.h>

int main()

 {
  char s[]="leel";
  int i,j,k;
  for(i=0;s[i];i++);
  i--;
  printf("%d\n",i);
  
  for(j=0,k=i;j<k;j++,k--)
  {
      if(s[j]!=s[k])
      break;
  }
  if(j<k)
  printf("not");
  else
  printf("pali");

}
