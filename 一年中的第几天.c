#include<stdio.h>
int Day_Of_Month(int y, int m)
{
    enum months {Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
	switch(m)
	  {
		case Jan: return 31;
		case Feb: if(!(y%4)&&(y%100)||!(y%400)) return 29;
		          else return 28;
		case Mar: return 31;
		case Apr: return 30;
		case May: return 31;
		case Jun: return 30;
		case Jul: return 31;
		case Aug: return 31;
		case Sep: return 30;
		case Oct: return 31;
	    case Nov: return 30;
		case Dec: return 31;        
	  }	
}
int main(void)
{
	int year,month,day,n=0,i;
	while(scanf("%d %d %d",&year,&month,&day)!=EOF)
	{
		for(i=1;i<=month-1;i+=1)
		{
			n=n+Day_Of_Month(year,i);
		}
		n=n+day;
		printf("该日期是这一年中的第%d天\n",n);		 
		n=0;                                          /*下一次循环前要给n清0*/ 
 }
	return 0;
}
	




