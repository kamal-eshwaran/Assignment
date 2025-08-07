#include <stdio.h>

int main()
{
    int arr1[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int arr2[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int arr3[3][3] = {};
    int r = sizeof arr1 / sizeof arr1[0];
    int c = sizeof arr1[0] / sizeof arr1[0][0];
    
    printf("%d %d\n",r,c);
    
    for(int i=0;i<r;i++)
       for(int j=0;j<c;j++)
          for(int k=0;k<r;k++)
       {
          arr3[i][j] += arr1[i][k] * arr2[k][j];
       }
    

    
    for(int i=0;i<r;i++)
    {
        printf("[");
    for(int j=0;j<c;j++)
    {
        printf("%3d ",arr3[i][j]);
    }
    printf("]\n");
    }
    
    
    
    return 0;
}
