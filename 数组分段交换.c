#include<stdio.h>
int main(void)
{
	int n,k,p;
	int i,copy0;
	int u[65],copy[65];
	while(scanf("%d%d",&n,&k)!=EOF)
	{
		p=k;
		copy0=0;
		for(i=0;i<n;i+=1)
		{
			scanf("%d",&u[i]);
			copy[i]=u[i];
		}
		for(i=0;p<=n;i+=1)           /*别在循环中改变和循环条件相关的值*/ 
			u[i]=u[p++];
		for(i=n-k;i<n;i+=1)
		    u[i]=copy[copy0++];
		for(i=0;i<n;i+=1)
		{
		    printf("%d",u[i]);
		    if(i!=n-1) 
			  printf(" "); 
		}
		printf("\n");
	}
	return 0;
}
