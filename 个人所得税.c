#include<stdio.h>
int main(void)
{
	double x,y=0;
	int c;
	scanf("%lf",&x);
	while(x!=0)
	{
	if(x<=1000) c=0;
	else if(x<=2000) c=1;
	else if(x<=3000) c=2;
	else if(x<=4000) c=3;
	else if(x<=5000) c=4;
	else c=5;
	switch(c)
	{
		case 5: y=(x-5000)*0.25;
		case 4: if(x<=5000) y=(x-4000)*0.2;
		        else y=y+1000*0.2;
		case 3: if(x<=4000) y=(x-3000)*0.15;
		        else y=y+1000*0.15;
		case 2: if(x<=3000) y=(x-2000)*0.1;
		        else y=y+1000*0.1;
		case 1: if(x<=2000) y=y+(x-1000)*0.05;
		        else y=y+1000*0.05;
		case 0: if(x<=1000) y=0.000000;
		        else y=y+0;		
	}
	printf("%lf\n",y);
	y=0; c=0;
	scanf("%lf",&x);
}
return 0;
}
