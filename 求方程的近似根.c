#include<stdio.h>
#include<math.h>
int main(void)
{
	double x=1;
	do
	{
		x=-((double)(3*x*x*x-4*x*x-5*x+13)/(double)(3*3*x*x-2*4*x-5))+x;
	}
	while(fabs((3*x*x*x-4*x*x-5*x+13)/(3*3*x*x-2*4*x-5))>=1e-6);/*该用绝对值的地方用绝对值，
	                                                              绝对值函数fabs定义在math.h头文件上。
																  */ 
	printf("%lf\n",x);
	return 0;
}
