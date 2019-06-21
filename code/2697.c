#include<stdio.h>

int main()
{
	int n,i,m;
	scanf("%d",&n);
	do
	{
		n=n+1;
		for(i=2,m=0;i<n;i++)
		{
			if(n%i==0)
			m++;
		}
	 } while(m!=0);
	 printf("%d",n);
}