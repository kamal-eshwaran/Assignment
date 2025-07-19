#include <stdio.h>
int sum_digit(int,int);
int main()
{
    int n,sum=0;
    printf("Enter The Value : ");
    scanf("%d",&n);
    printf("Sum of Digit = %d",sum_digit(n,sum));

    return 0;
}
int sum_digit(int n,int sum){
     if(n)
       return sum+=(n%10),n/=10,sum_digit(n,sum);
   
     else
       return sum; 
}
