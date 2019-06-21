#include<stdio.h>
#include<math.h>
int main()
{
	int n,m;
	scanf("%d%d",&m,&n);
	
	unsigned long long i,j=2,a=1,b=1,ans;
	for (i=m;i>=m-n+1;i--)
	{
	  a=(unsigned long long )a*i;
	  while ((a%j==0)&&(j<=n))
	  {
	  	a/=j;
	  	j++; 
	  }
    }
	printf("%llu\n",a);
	
	return 0;
}