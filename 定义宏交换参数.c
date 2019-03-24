#include<stdio.h>
#define swap(x,y) x=(x)+(y);y=(x)-(y);x=(x)-(y)
int main(void)
{
	int a,b,i=1;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		printf("Case %d:\n",i++);
		printf("Before Swap:a=%d b=%d\n",a,b);
		swap(a,b);
		printf("After Swap:a=%d b=%d\n\n",a,b);
	}
	return 0;
}

