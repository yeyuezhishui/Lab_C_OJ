#include<stdio.h>
int Max_Out(int a[],int n);
int main(void)
{
	int i,n,m,a[100];
	while(1)
	{
		int b[100];
		scanf("%d",&n);
		if(n==0)
		    break;
		for(i=0;i<n;i+=1)
			scanf("%d",&a[i]);
		for(m=n-1;m>=0;m-=1)	
			b[m]=Max_Out(a,n);
		for(i=0;i<n-1;i+=1)	
	}
	return 0;
}

int Max_Out(int a[],int n)
{
	int i,max;
	max=a[0]; 
	for(i=0;i<n;i+=1)
	{
		if(max<=a[i])
		   max=a[i];
	}
	for(i=0;i<n;i+=1)
	{
		if(a[i]==max)
		{
			a[i]=0;
			break;
		}
	}
	return max;
}
