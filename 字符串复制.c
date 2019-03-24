#include<stdio.h>
void mycopy(char s[],char t[],int n);
int main(void)
{
	char s[100],t[150];
	int i,n;
	scanf("%d",&i);
	while(i--)
	{
		getchar();
		fgets(t,150,stdin);
		scanf("%d",&n);
		mycopy(s,t,n);
		fputs(s,stdout);
		putchar('\n');
	}
	return 0;
}

void mycopy(char s[],char t[],int n)
{
	int i;
	for(i=0;i<n;i+=1)
		s[i]=t[i];
	s[n]='\0';	
}
