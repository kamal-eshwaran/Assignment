/*
 * #include<stdio.h>
#include<math.h>
int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=sqrt(a)+1;i++){
		if(a%i==0){
		printf("%d ",i);
		        if(a/i!=i)
			printf("%d ",a/i);
		}
	}
	printf("\n");
}
*/
#include<stdio.h>
#include<math.h>
int main(){
        int a,i;
        scanf("%d",&a);
        for(i=1;i*i<a;i++){
                if(a%i==0)
                printf("%d %d ",i,a/i);
        }
	if(a%i==0)
		printf("%d",i);
        printf("\n");
}

