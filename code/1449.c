#include<stdio.h>
long long K(int m)
{
	if(m==0) return 1;
	if(m==1) return 1;
	else return m*K(m-1);
}

int main()
{
	long long int m,n,ans;
	scanf("%lld %lld",&m,&n);
	ans=K(m)/(K(m-n)*K(n));
	printf("%lld\n",ans);
	
	return 0;
}