#include <stdio.h>
int main()
{
   char s[100],i,j,k,l,m=0,n;
   
   scanf("%[^\n]s",s);
   
   for(i=0;s[i];i++);
   
   printf("%d\n",i);
   
   printf("Before : %s\n",s);

   for(j=0;j<i;j++)
   {
       
        if(s[j] == ' ') 
        {
            
         for(k=j;k<i;k++)
           {
              
               s[k]=s[k+1];
               
           }

         j--;
        
        
       }
  

  
   }
   printf("After  : %s\n",s);
    return 0;
}
