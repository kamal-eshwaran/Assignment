#include<stdio.h>
#include<stdlib.h>
  int main()
  {
         int r1,r2,c1,c2;
         printf("Enter Row and Col for Arr1\n");
         scanf("%d%d", &r1,&c1);
         
         printf("Enter Row and Col for Arr2\n");
         scanf("%d%d", &r2,&c2);
         
         if((r1==r2) && (c1==c2) )
         {
             
         int **p=(int**)malloc(r1*sizeof(int*));
         for(int i=0;i<r1;i++)
         p[i]=(int*)malloc(c1*sizeof(int));
         
         int **q=(int**)malloc(r2*sizeof(int*));
         for(int i=0;i<r2;i++)
         q[i]=(int*)malloc(c2*sizeof(int));
         
         int **r=(int**)malloc(r1*sizeof(int*));
         for(int i=0;i<r1;i++)
         r[i]=(int*)malloc(c1*sizeof(int));
         
         printf("Entered Elemrnt Arr1\n");
         for(int i=0;i<r1;i++)
         for(int j=0;j<c1;j++)
         scanf("%d",&p[i][j]);
         
         printf("Entered Elemrnt Arr2\n");
         for(int i=0;i<r2;i++)
         for(int j=0;j<c2;j++)
         scanf("%d",&q[i][j]);
         
         for(int i=0;i<r1;i++)
         for(int j=0;j<c1;j++)
         r[i][j] = p[i][j] + q[i][j];
         
         printf("After Matrix Addition\n");
         for(int i=0;i<r1;i++){
         for(int j=0;j<c1;j++)
         printf("%2d ",r[i][j]);
         printf("\n");
         }
         }
         
         else
         printf("Tata Bye Bye");
         
  } 
