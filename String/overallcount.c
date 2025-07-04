#include <stdio.h>

int main()
{
    char s[100];
    char i,j,k,l;
    scanf("%[^\n]s",s);
    for(i=0;s[i];i++);
    
    for(j=0;j<i;j++)
    {
      char  count=0;
      
        for(k=0;k<j;k++)
        {
         if(s[k]==s[j])
         {
          count=1;
          break;
         }
        }
        
        if(count==0) // if(count==1)  continue;
        {
         for(k=j;k<i;k++)
         {
          if(s[j]==s[k])
          count++; 
         }
          printf("%c - %d\n",s[j],count);
        }
           
       
    }

    return 0;
}
