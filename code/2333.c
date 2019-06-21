#include<stdio.h>
int main()
{
	long long int n,m,j,i,k;
	scanf("%lld",&n);
	n=n+1;
	for(i=n;i<n*n;i++)
	{
		for(j=2;j<=i;j++)
		{
			k=i%j;
			if(k==0)
		    break;
		}
		if(j==i)
		break;
	}
	printf("%lld",i);
	return 0;
}