#include <stdio.h>
int main(void)
{
	int a,b,c,d;
	c=1;
    for(;;)
    {
	    scanf("%d %d",&a,&b);
    	if(a==0&&b==0) break;
	    if(a<=b) d=b;
	    else d=a;
    	for(;d>=1;d-=1)
    	{
    		if(!(a%d)&&!(b%d))
			{
				printf("%d ",d);
				d=1;
				break;
			}	
		}
    	for(;;)
	    {
	    	c+=1;
	    	if(!(c%a)&&!(c%b))
	    	{
	            printf("%d\n",c);
	            c=1;                     /* �ڲ�ѭ���������㰡���ҵĸ�*/ 
				break;    
            }
        }
    }
	return 0;
}
