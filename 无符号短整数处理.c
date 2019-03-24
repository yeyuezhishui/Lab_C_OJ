#include<stdio.h>
int main(void)
{
	int i;
	unsigned short int m,m1,m2,m3,mask;
	mask=0x0ff0;
	scanf("%d",&i);
	while(i--)
	{
		scanf("%hu",&m);
		m1=m>>12;
		m2=m<<12;
		m3=mask&m;
		m=m3|m1|m2;
		printf("%hu\n",m);
	printf("%hu",mask);
	}
	return 0;
}
