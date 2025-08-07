#include<stdio.h>
#include<stdlib.h>
  int main()
  {
         int r,c;
         printf("Enter Row and Col for Arr1\n");
         scanf("%d%d", &r,&c);
         
         if(r==c)
         {
             int **p=(int**)malloc(r*sizeof(int*));
              for(int i=0;i<r;i++)
                p[i]=(int*)malloc(c*sizeof(int));
         
             printf("Enter Element for Arr1\n");
              for(int i=0;i<r;i++)
               for(int j=0;j<c;j++)
                scanf("%d",&p[i][j]);
              
             int isIdentity = 1;
             
             for(int i=0;i<r;i++)
             {
              for(int j=0;j<c;j++)
             
               if ((i == j && p[i][j] != 1) || (i != j && p[i][j] != 0))
                {
                    isIdentity = 0;
                    break; 
                } 
                
               if (!isIdentity)
                    break;
            }
            
           if(isIdentity)
             printf("Identity Matrix");
           else
             printf("Not Identity Matrix");
         }

         
        else
         printf("Tata Bye Bye");
  }
