#include<stdio.h>
void Switch_Operation(double a,double b,char c)
{
	switch(c)
	{                        /*字符单独表示时，除使用标识符外，一律加单引号*/ 
		case '+':    printf("After switch processing,the result is : %.2lf\n",a+b);break;
		case '-':    printf("After switch processing,the result is : %.2lf\n",a-b);break;
		case '*':    printf("After switch processing,the result is : %.2lf\n",a*b);break;
		case '/':    printf("After switch processing,the result is : %.2lf\n",a/b);break;	    
	}
}
                                                            /*忘记加break，导致从一个case开始全部都执行了*/ 




void If_Operation(double a,double b,char c)
{
	    if(c=='+')                                          /*老毛病，把赋值等于=和判断等于==混淆*/ 
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
    while(scanf("%d %lf %lf %c",&t,&a,&b,&c)!=EOF)             /*如何用scanf判断是否读到EOF，
	                                                            注意scanf的返回值一般为成功读取的项数，
																当检测到文件结尾时，返回EOF
																而getchar的返回值为其把输入流读到的值转换为int类型后的值*/ 
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
					  break;		  		                /*同样是break忘记加*/   
		  }
    }
	return 0;
}
