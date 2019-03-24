#include<stdio.h>
int main(void)
{
	char a[250];
	int i=0,m;
	int n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0,nc=0,no=0;
	for(i=0;;i++)
	{
		a[i]=getchar();
		if(a[i]=='#')
	        break;
	}
	for(i=0;;i+=1)
	{
		if(a[i]=='\0')
		    break;
		if(a[i]<='z'&&a[i]>='a'||a[i]<='Z'&&a[i]>='A')
		    m='c';
		else
		    m=a[i];    
		switch(m)
		{
			case '0': n0+=1; break;
			case '1': n1+=1; break;
			case '2': n2+=1; break;
			case '3': n3+=1; break;
			case '4': n4+=1; break;
			case '5': n5+=1; break;
			case '6': n6+=1; break;
			case '7': n7+=1; break;
			case '8': n8+=1; break;
			case '9': n9+=1; break;
			case 'c':nc+=1; break;
			default: break;
		}  
	}
	no=--i-n0-n1-n2-n3-n4-n5-n6-n7-n8-n9-nc;
	printf("Number 0: %d\nNumber 1: %d\nNumber 2: %d\nNumber 3: %d\nNumber 4: %d\nNumber 5: %d\nNumber 6: %d\nNumber 7: %d\nNumber 8: %d\nNumber 9: %d\ncharacters: %d\nother: %d\n",n0,n1,n2,n3,n4,n5,n6,n7,n8,n9,nc,no);
	return 0;
}
