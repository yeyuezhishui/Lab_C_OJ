#include<stdio.h>
#include<math.h>
#define s(a,b,c) (((a)+(b)+(c))/2)
#define area(s,a,b,c) (sqrt((s)*((s)-(a))*((s)-(b))*((s)-(c))))
int main(void)
{
	float a,b,c;
	while(scanf("%f%f%f",&a,&b,&c)!=EOF)
	    printf("%.0f %f\n",s(a,b,c),area(s(a,b,c),a,b,c));
	return 0;
}

