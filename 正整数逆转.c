#include<stdio.h>
int main(void)
{
	int m;
	scanf("%d",&m);
	while(m!=0)
    {
    	while(m>=10)       /*����ɵ�������������ӷֺ�*/ 
    	{
		    printf("%d",m%10);
		    m=m/10;
		}
		printf("%d\n",m);
		scanf("%d",&m);
	} 
	return 0;
 } 
