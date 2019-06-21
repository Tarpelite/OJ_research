#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int n,x,m,k,i,j,a[100001]={};
	m=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		a[x]++;
	}
	scanf("%d",&k);
	for(j=100000;j>0;j--)
	{
		if(a[j]!=0)
		m++;
		if(m==k)
		{
			printf("%d %d",j,a[j]);
			break;
		}
		
	}
	return 0;
}