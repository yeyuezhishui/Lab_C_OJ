#include<stdio.h>
int main(void)
{
	int n,i,an1=1,an2=1,an;
	for(;;)
	{
		scanf("%d",&n);
		if(n==0) break;
		else if(n<3) printf("Error\n\n");
		else
		{
			printf("%10d%10d",an1,an2);
			for(i=1;i<=n-2;i+=1)             /* �����Ѿ��������� ����iӦ����n-2����*/ 
			{
				an=an1+an2;
				printf("%10d",an);
				an1=an2;
				an2=an;
				if(!((i+2)%8)&&i!=n-2)       /* ����ע��ǡ��������8�����������ַ���
				                                ��ʱ��Ӧ�������һ�����з�*/
				printf("\n");
			}
			an1=1;
			an2=1;
			printf("\n\n");
		}
	}
	return 0;	
 } 
