#include<stdio.h>
int main(void)
{
	char c,huiche;
	int x;
	scanf("%d%c",&x,&huiche);
	while(x--)
	{
	    for(;;)
		{ 
		    c=getchar();
            while(c!=' '&&c!='\n')
		    {
			    putchar(c);
			    c=getchar();
		    }
            if(c==' ')
            {
		         putchar(c);
		         c=getchar();
		         while(c==' ')
		         {
			         c=getchar();
		         }       
		         if(c!='\n') putchar(c);
		    }
		    if(c=='\n') break;
	    }   
	    printf("\n");
	}
	return 0;	    
}
