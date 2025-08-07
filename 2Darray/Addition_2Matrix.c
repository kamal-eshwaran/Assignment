#include<stdio.h>
int matrix(int row,int col,int a[row][col]){
    
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
           printf("%2d ",a[i][j]);
        
        printf("\n");
    return 0;    
}
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int c[3][3]={0};
    int row= sizeof a / sizeof a[0];
    int col= sizeof a[0] / sizeof a[0][0];
    
    printf(" %d %d \n",row,col);
    
    matrix(row,col,a);
    matrix(row,col,b);
    
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
           c[i][j]=a[i][j]+b[i][j];
        
    matrix(row,col,c);
    
}


/*
#include <stdio.h>

int main()
{
    int arr1[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int arr2[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int arr3[3][3];
    int r = sizeof arr1 / sizeof arr1[0];
    int c = sizeof arr1[0] / sizeof arr1[0][0];
    
    printf("%d %d\n",r,c);
    for(int i=0;i<r;i++)
       for(int j=0;j<c;j++)
       {
          arr3[i][j] = arr1[i][j] + arr2[i][j];
       }

    for(int i=0;i<r;i++)
    {
        printf("[");
    for(int j=0;j<c;j++)
    {
        printf("%2d ",arr3[i][j]);
    }
    printf("]\n");
    }
    
    return 0;
}
*/
