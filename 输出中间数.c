#include<stdio.h>
int main(void)
{
	int A,B,C;
	while(scanf("%d %d %d",&A,&B,&C)!=EOF)
	{
		if(A==B&&B==C) printf("A:%d\n",A);
		else if(A==B&&B!=C) printf("A:%d\n",A);
		else if(A==C&&B!=C) printf("A:%d\n",A);
		else if(B==C&&B!=A) printf("B:%d\n",B);
		else if((A-B)*(A-C)<0) printf("A:%d\n",A);
		else if((C-B)*(C-A)<0) printf("C:%d\n",C);
		else if((B-C)*(B-A)<0) printf("B:%d\n",B);
	}
	return 0;
 } 
