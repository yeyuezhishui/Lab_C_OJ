#include<stdio.h>
#include<string.h>
void Ove(int *,int);
int main(void)
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int m,i,x[100],*p=x;
		scanf("%d",&m);
		for(i=0;i<m;i++)
		    scanf("%d",&x[i]);
		Ove(p,m-1);
		for(i=0;i<m;i++)
		{
			printf("%d",x[i]);
			if(i!=m-1)
			    printf(" ");
		}
		printf("\n");
	}
	return 0;
}

void Ove(int *p, int m)
{
	int left=0,right=m;
	while((right-left)>=1)
	{
		int temp;
		temp=*(p+left);
		*(p+left)=*(p+right);
		*(p+right)=temp;
		left++;
		right--;
	}
}
