#include<stdio.h>
int f(int n)
{
	if(n==1)return 1;
	return n*f(n-1);
}
int main()
{
	unsigned long long int m,n,r,i,s;scanf("%lld%lld",&m,&n);
	if(m==0||n==0)printf("0");
	else{if(n>=m)printf("1");
	else{
		s=m;
	for(i=1;i<n;i++)
	{
		s=s*(m-i);
	}
	r=s*1.0/f(n);
	printf("%lld",r);
	}
		
	}

	return 0;
}