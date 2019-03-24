#include<stdio.h>
int main(void)
{
	int i,j, num[15],*p=num;
	while(1)
	{
		for(i=0;i<10;i++)
		if((scanf("%d",p+i)==EOF))
		    return 0;
	    for(j=10;j>0;j--)
	    {
		    for(i=0;i<j-1;i++)
		    {
			    if(*(p+i)>=*(p+i+1))
			    {
				    int temp;
				    temp=*(p+i);
				    *(p+i)=*(p+1+i);
				    *(p+1+i)=temp;
			    }   
		    }
	    }
	    for(i=0;i<10;i++)
	    {
		    printf("%d",*(p+i));
		    if(i!=9)
		        printf("->");
	    }
	    printf("\n");
    }
	return 0;	 
}
