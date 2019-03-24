#include<stdio.h> 
void Put_Num(unsigned long,int);
int main(void)
{
	unsigned long n;
	int k;
	while(scanf("%lu",&n)!=EOF)
	{ 
	    scanf("%d",&k);
		Put_Num(n,k);
	} 
	return 0; 
 } 
 
 
 
void Put_Num(unsigned long n,int k)
{
	int i=1,p=0;
	unsigned long aus=n;
    do
    {
    	aus/=10;
    	p+=1;
	}while(aus!=0);
	if(k>p) printf("-1\n");
	else
	{
    while(i<k)
	{
		n=n/10;
		i+=1;
	}
	printf("%lu\n",n%10); 
    }
}
