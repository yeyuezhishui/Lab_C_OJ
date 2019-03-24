#include<stdio.h>
int main(void) 
{
	int i;
	char a;
	scanf("%d",&i);
	while(i--)
	{
	  scanf("%*c%c",&a);
	  if(a>='0'&&a<='9')
	    printf("%d\n",a-48);
	  else if(a>='a'&&a<='f')
	    printf("%d\n",a-87);
	  else if(a>='A'&&a<='F')
	    printf("%d\n",a-55);
	  else
	    printf("%d\n",a);
    }
    return 0;
}
