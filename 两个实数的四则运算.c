#include<stdio.h>
void Switch_Operation(double a,double b,char c)
{
	switch(c)
	{                        /*�ַ�������ʾʱ����ʹ�ñ�ʶ���⣬һ�ɼӵ�����*/ 
		case '+':    printf("After switch processing,the result is : %.2lf\n",a+b);break;
		case '-':    printf("After switch processing,the result is : %.2lf\n",a-b);break;
		case '*':    printf("After switch processing,the result is : %.2lf\n",a*b);break;
		case '/':    printf("After switch processing,the result is : %.2lf\n",a/b);break;	    
	}
}
                                                            /*���Ǽ�break�����´�һ��case��ʼȫ����ִ����*/ 




void If_Operation(double a,double b,char c)
{
	    if(c=='+')                                          /*��ë�����Ѹ�ֵ����=���жϵ���==����*/ 
		printf("After if-else processing,the result is : %.2lf\n",a+b);
        else if(c=='-')
		printf("After if-else processing,the result is : %.2lf\n",a-b);
		else if(c=='*')
		printf("After if-else processing,the result is : %.2lf\n",a*b);
		else if(c=='/')
		printf("After if-else processing,the result is : %.2lf\n",a/b);		
}



int main(void)
{
	double a,b;
	char c;
	int t,i;
    while(scanf("%d %lf %lf %c",&t,&a,&b,&c)!=EOF)             /*�����scanf�ж��Ƿ����EOF��
	                                                            ע��scanf�ķ���ֵһ��Ϊ�ɹ���ȡ��������
																����⵽�ļ���βʱ������EOF
																��getchar�ķ���ֵΪ���������������ֵת��Ϊint���ͺ��ֵ*/ 
	{
		switch(t)
		  {
			case 0:   If_Operation(a,b,c);
			          printf("\n");
			          break;
			case 1:   Switch_Operation(a,b,c);
			          printf("\n");
			          break;
			case 2:   If_Operation(a,b,c);
			          Switch_Operation(a,b,c);
					  printf("\n");
					  break;		  		                /*ͬ����break���Ǽ�*/   
		  }
    }
	return 0;
}
