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
		b=(a>>8)&0x00ff;/*���������λ����������룬
		                  ���漰���������������Ի��Ǽ�������
		                  ʮ��������һ��0����4��0��һ��f����4��1*/ 
		c=a&0x00ff;
		printf("%c,%c\n",b,c);	
	}
	return 0;
}
