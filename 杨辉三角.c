#include<stdio.h>
int main(void)
{
	int p,n,i,j,ci=1; 
	p=1;
	for(;;)
	{
		scanf("%d",&n);
		if(n==0) break;
		for(p=1;p<=(n-1)*2;p+=1) {printf(" ");}
		printf("1\n");
		for(i=2;i<=n;i+=1)
		{
			for(p=1;p<=(n-1)*2-2*(i-1);p+=1) {printf(" ");}
			printf("1");
			for(j=2;j<=i;j+=1)
			{
				if(i==j) printf("   1\n");
				else
				{
				    ci=ci*(i-j+1)/(j-1);
				    printf("%4d",ci);
			    }
			}
			ci=1;
		}
		printf("\n");
	}
	return 0;
}
