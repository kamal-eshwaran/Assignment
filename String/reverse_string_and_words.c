#include <stdio.h>
int main()
{
   char s[100],i,j,k,l,m=0,n;
   
   scanf("%[^\n]s",s);
   
   for(i=0;s[i];i++);
   
   printf("%d\n",i);
   
   printf("Before : %s\n",s);
   
   for(n=0,j=i-1;n<j;n++,j--)
   {
      
               char temp;
               temp=s[n];
               s[n]=s[j];
               s[j]=temp;
   }
   
   for(j=0;j<=i;j++)
   {
        if((s[j]!=' ') && (s[j+1]!= '\0'  && s[j+1]!=' '))
       {
         
         for(m=j;((s[m]!='\0') && (s[m] !=' '));m++);
         
         
         for(k=j,l=m-1;k<l;k++,l--)
           {
               char temp;
               temp=s[k];
               s[k]=s[l];
               s[l]=temp;
           }
         j=m;
       }

  
   }
   printf("After  : %s\n",s);
    return 0;
}
