#include<stdio.h>
int istrlen(char s[],int cur);
int main(void)
{
	int n;
	scanf("%d%*c",&n);
	while(n--)
	{
		char s[100];
		fgets(s,100,stdin);
		printf("%d\n",istrlen(s,0));
	}
	return 0;
}
int istrlen(char a[],int cur)
{
	if(a[cur]=='\0')
		return cur-1;
	else
		istrlen(a,cur+1);
}
