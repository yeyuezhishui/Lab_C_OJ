#include<stdio.h>
void hailstone(int);
int main(void)
{
	int n;
	scanf("%d",&n);
    while(n!=0)
	{
	   hailstone(n);
	   scanf("%d",&n);
	}
    return 0;
}



void hailstone(int n)
{
	int i,ans;
	ans=n;
	printf("%5d",ans);
	for(i=2;ans!=1;i++)
	{
		if(ans%2) ans=ans*3+1;
		else ans=ans/2;
		printf("%5d",ans);
		if(!(i%6)&&ans!=1) printf("\n");
	}
	printf("\n\n");
}
