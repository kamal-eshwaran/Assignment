#include <stdio.h>

int main()

 {
  char s[]="touch",i;
  for(i=0;s[i];i++);
  printf("%d\n",i);
  
  for(int j=0,k=i-1;j<k;j++,k--){
      int temp;
      temp=s[j];
      s[j]=s[k];
      s[k]=temp;
  }
  s[i]='\0';
  printf("S = %s",s);

}
