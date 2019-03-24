#include<stdio.h>
#include<math.h> 
int IsPrime(int n);
int main(void)
{
	int begin,end;
	for(;;)
	{
		scanf("%d%d",&begin,&end);
		if(begin==0)
		   break;
		else if(begin%2!=0)
		   begin+=1;
		{
			int step=2;
			for(;begin<=end;begin+=step)
			{
				int n; 
				for(n=2;n<=100;n+=1)
			    if(IsPrime(n)&&IsPrime(begin-n))
			    {
			        printf("%d=%d+%d\n",begin,n,begin-n);
			        break;
		        }
			
		    }
		}
	printf("\n");
	}
	return 0;   
}

int IsPrime(int n)
{
	int m;
	if(n<=0)
	return 0; 
	if(n==1)
	return 0;
	else if(n==2)
	return 1;
	else
	{
        for(m=2;m<=sqrt(n);m+=1)
 	   {
	       if(!(n%m))
		   return 0;
       } 
	    return 1;
    }
}
