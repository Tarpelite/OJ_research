//第五次练习赛   D组合数 
#include<stdio.h> 
int main()
{
	long m,n,C,i=1;
	long nj=1,mj=1;
	
	scanf("%ld %ld",&m,&n);
	
	if(n<=m)
	{
		for(i=1;i<=n;i++)
		   nj*=i;
		   
		for(i=1;i<=n;i++)
		{
			mj*=m;
			m-=1;
		}
	}
	C=mj/nj;
	printf("%ld",C);
	
	return 0;
}