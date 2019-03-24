#include <stdio.h>
#include <string.h> 
#define N 80
void DeleteSpace (char p[][N],int n);
int main(void)
{
    int i,j,n;
    while(1)
    {
	    scanf("%d",&n);
	    getchar();
	    if(n==0)
	        return 0;
        char a[n][N];
        for(i=0;i<n;i++)
            fgets(a[i],N,stdin);
        DeleteSpace(a,n);
        printf("\n");
    }
    return 0;
}

void DeleteSpace(char p[][N],int n)
{
     int i,j,k,t;
     for(i=0;i<n;i++)
	 {
        for(j=0;*(p[i]+j)!='\0';j++)
		{
            if(*(p[i]+j)==' '&&*(p[i]+j+1)==' ')
			{
                k=j+1;
                while(p[i][k++]==' ');
                k--;
                t=j+1;
                while(p[i][t++]=p[i][k++]);
            }
        }
        p[i][--j]='\0';
        if(strlen(p[i])>0)
		    printf("%s\n",p[i]);
     }
}

