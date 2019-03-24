#include<stdio.h>
#define N 100
int main(void)
{
	int n,i,j;
	while(1)
	{
	    scanf("%d",&n);
	    getchar();
	    if(n==0)
	        return 0;
	    char a[10][N], con[100] ,*p=a[0],*c=con;
	    for(i=0;i<n;i++)
	    {
	    	for(j=0;;j++)
	    	{
			    scanf("%c",p+i*N+j);
				if(*(p+i*N+j)=='\n')
				{
					*(p+i*N+j)='\0';
				    break; 
				}
		    }
	    }
	    for(i=0;i<n;i++)
	    {
	    	int k;
	    	for(k=0;;k++)
	    		if(*(c+k)=='\0'||i==0)
	    		    break;
	        int t=0; 
	    	while(*(c+k++)=*(p+(i*N)+t++));	    
		}
		for(i=0;con[i]!='\0';i++)
		{
			printf("%c",con[i]);
		}
		printf("\n");
    }
    return 0;
}
