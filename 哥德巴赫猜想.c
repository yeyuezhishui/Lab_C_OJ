#include<stdio.h>
#include<math.h>
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



int main(void)
{
	int i,n,even;
	scanf("%d",&i);
	while(i--)
	{
		scanf("%d",&even);
		for(n=2;n<=100;n+=1)
		{
			if(IsPrime(n)&&IsPrime(even-n))
			{
			   printf("%d=%d+%d\n",even,n,even-n);
			   break;
		    }
			
		}
	}
	return 0;
}
