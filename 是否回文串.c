#include<stdio.h>
#include<string.h>
int comparation(char a[],int left,int right);
int main(void)
{
	char a[100];
	int i,left,right,judge;
	scanf("%d",&i);
	getchar();
	while(i--)
	{
		fgets(a,100,stdin);
		left=0;
		right=strlen(a)-2;              /*����һ���س�
		                                ��ͳ��\0,���Լ�2*/ 
		judge=comparation(a,left,right);
		if(judge==1)
		   printf("Yes!\n");
		else
		   printf("No!\n");   
	}
	return 0;
}

int comparation(char a[],int left,int right)
{
	if((right-left)<=1)
	   return 1;
	else if(a[left]==a[right])
	   return comparation(a,left+1,right-1);
	else   
	   return 0;
}
