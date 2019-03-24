#include<stdio.h>
#define CHANGE c%2
int main(void)
{
	int i,n;
	char a[150];
	char c;
	scanf("%d",&i);
	getchar();
	while(i--)
	{
		fgets(a,150,stdin);
		c=a[0];
		if(CHANGE)
		{
			for(n=0;;n+=1)
			{
				if(a[n]=='\n') 
				{
				    break;
				}
		        if(a[n]>='A'&&a[n]<='Z')
				    a[n]=a[n]+32;
			    else if(a[n]>='a'&&a[n]<='z')
				    a[n]=a[n]-32;
			}
			 fputs(a,stdout);
		 } 
		 else
		    fputs(a,stdout); 
	 }
	 return 0; 
} 
 
