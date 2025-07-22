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
