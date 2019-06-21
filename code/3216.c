#include<stdio.h>
#include<math.h>
int main()
{
	int n,m;
	scanf("%d%d",&m,&n);
	
	long long i,j=2,a=1,b=1,ans;
	for (i=m-n+1;i<=m;i++)
	{
	  a=( long long )a*i;
	  while ((a%j==0)&&(j<=n))
	  {
	  	a/=j;
	  	j++; 
	  }
    }
	printf("%lld\n",a);
	
	return 0;
}