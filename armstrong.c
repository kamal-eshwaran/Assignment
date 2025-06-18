#include<stdio.h>
#include<math.h>
int main(){
        int n,sum=1,rem,temp,a,result=0;
	printf("Enter The Number\n");
        scanf("%d",&n);
        a=log10(n)+1;
        temp=n;
	if(n<0)
		printf("Negative Number\n");
	else if(n==0)
		printf("Armstrong\n");
	else{
        for(int i=1;i<=a;i++){
                rem=n%10;
                for(int j=1;j<=a;j++)
                        sum=sum*rem;
                result=result+sum;
                sum=1;
                n=n/10;
        }
        if(result==temp)
                printf("Armstrong\n");
        else
                printf("not\n");

	}
}
