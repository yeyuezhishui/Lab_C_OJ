#include<stdio.h>
int factor(int a,int b);
int main(void)
{
	int a,b;
	for(;;)
	{
	    scanf("%d%d",&a,&b);
	    if(a==0)
	       break;
	    printf("%d\n",factor(a,b));
    }
    return 0;
}
int factor(int a, int b)
{
	int temp;
	if(a<=b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	if(a%b==0) 
	    return b;
	else
		return factor(b,a%b);
}
