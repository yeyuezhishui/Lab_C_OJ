#include<stdio.h>
int Sum(int);
int Ant(int);
int main(void)
{
	int i,m,n,a,b,SUM,SUMn,p=1;
	scanf("%d",&i);
	while(i--)
	{
		scanf("%d %d",&m,&n);
		a=Sum(m);
		b=Sum(n);
		SUM=Ant(a)+Ant(b);
		if(SUM==7||SUM==11)
		{
			printf("success!\n");
		}
		else if(SUM==2||SUM==3||SUM==12)
		{
			printf("fail!\n");
		}
		else
		{
			for(p=1;;p+=1)
			{
				a=Sum(m+p);
				b=Sum(n+p);
				SUMn=Ant(a)+Ant(b);
				if(SUMn==SUM)
				{
				    printf("success!\n");
			        break;
				}
				else if(SUMn==7)
				{
					printf("fail!\n");
			        break;
				}
				else continue;
				break;
			}
		}
	}
}





int Sum(int x)
{
	int sum;
	sum=0;
	for(;x!=0;x/=10)
	{
		sum=x%10+sum;
	}
	return sum;
}


int Ant(int sum)
{
	int num;
	num=0;
	num=sum%6+1;
	return num;
}
 
