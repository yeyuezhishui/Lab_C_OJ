#include<stdio.h>
#define PI 3.1415926
int main(void)
{
	int i;
	double r,h,s,v;
	scanf("%d",&i);
	while(i--)
	{
		scanf("%lf %lf",&r,&h);
		s=2*PI*r*r+2*PI*r*h;
		v=PI*r*r*h;
		printf("%.6lf %.6lf\n",s,v);
		
	}
	return 0;
}

