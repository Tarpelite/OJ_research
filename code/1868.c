#include<stdio.h>
#include<math.h>
int main()
{
	long long s1=1,s2=1;
	int k,n,i,m;
	scanf("%d%d",&m,&n);
	k=n;
	for(;n>0;n--)
	{
		s1*=n;
	}
	for(;k>0;k--,m--)
	{
		s2*=m;
	}
	printf("%d",s2/s1);
}