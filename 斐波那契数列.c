#include<stdio.h>
int main(void)
{
	int n,i,an1=1,an2=1,an;
	for(;;)
	{
		scanf("%d",&n);
		if(n==0) break;
		else if(n<3) printf("Error\n\n");
		else
		{
			printf("%10d%10d",an1,an2);
			for(i=1;i<=n-2;i+=1)             /* 事先已经输入两个 所以i应当到n-2结束*/ 
			{
				an=an1+an2;
				printf("%10d",an);
				an1=an2;
				an2=an;
				if(!((i+2)%8)&&i!=n-2)       /* 这里注意恰好输入了8的整数倍个字符，
				                                此时不应当多输出一个换行符*/
				printf("\n");
			}
			an1=1;
			an2=1;
			printf("\n\n");
		}
	}
	return 0;	
 } 
