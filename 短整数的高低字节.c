#include<stdio.h>
int main(void)
{
	int i;
	short a;
	char b,c;
	scanf("%d",&i);
	while(i--)
	{
		scanf("%hd",&a);
		b=(a>>8)&0x00ff;/*这里如果用位运算设计掩码，
		                  会涉及到整数提升，所以还是记下来，
		                  十六进制中一个0代表4个0，一个f代表4个1*/ 
		c=a&0x00ff;
		printf("%c,%c\n",b,c);	
	}
	return 0;
}
