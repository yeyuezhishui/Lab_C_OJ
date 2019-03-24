#include<stdio.h>
#define swap(x,y) x=(x)+(y);y=(x)-(y);x=(x)-(y)
int main(void)
{
	int n,a,b;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&b);
		swap(a,b);
		printf("%d %d\n",a,b);
	}
	return 0;
}

