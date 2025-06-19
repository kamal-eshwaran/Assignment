#include <stdio.h>
int main() {
   int n,rem,sum,result=0,i;
   printf("Enter The Value\n");
   scanf("%d",&n);
   i=n;
   for(;n;n/=10){
       rem=n%10;
       sum=1;
       for(;rem;rem--){
           sum*=rem;
       }
        result+=sum;
   }
   if(i==result)
   printf("Strong\n");
   else
   printf("Not\n");
   
    return 0;
}
