#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	int sum,i,n,right,mi;
	scanf("%d",&i);
	getchar();
	while(i--)
	{
		sum=0;
		mi=1;
		fgets(a,100,stdin);
        right=strlen(a)-2;
        for(n=right;n!=1;n-=1)
        {
        	if(a[n]<='f'&&a[n]>='a')
        	    sum+=(a[n]-('a'-':')-'0')*mi;      /*ascii ¬Î¿Ô√ª”–°Æ10°Ø*/ 
        	else if(a[n]<='F'&&a[n]>='A')  
			    sum+=(a[n]-('A'-':')-'0')*mi; 
			else
			    sum+=(a[n]-'0')*mi;
		    mi*=16;
		}
		printf("%d\n",sum);
	}
	return 0;
}
