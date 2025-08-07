#include<stdio.h>
#include<stdlib.h>
int main()
 {
         int r1,c1;
         printf("Enter Row and Col for Arr1\n");
         scanf("%d%d", &r1,&c1);
         
         int **p=(int**)malloc(r1*sizeof(int*));
         for(int i=0;i<r1;i++)
         p[i]=(int*)malloc(c1*sizeof(int));
         
         
         int r2=r1;
         int c2=c1;
         
         int **q=(int**)malloc(r2*sizeof(int*));
         for(int i=0;i<r2;i++)
         q[i]=(int*)malloc(c2*sizeof(int));
         
         printf("Enter Element for Arr1\n");
         for(int i=0;i<r1;i++)
         for(int j=0;j<c1;j++)
         scanf("%d",&p[i][j]);
         
         for(int i=0;i<r1;i++)
         for(int j=0;j<c1;j++)
          {
              q[j][i]=p[i][j];
          }
          
         printf("Transpose of Arr1\n");
         for(int i=0;i<r2;i++)
         {
         for(int j=0;j<c2;j++)
         printf("%d ",q[i][j]);
         printf("\n");
         }
         
         for(int i=0;i<r1;i++)
             free(p[i]);
         free(p);
         
         for(int i=0;i<r2;i++)
             free(q[i]);
         free(q);
         
 } 
