#include <stdio.h>
int main()
{
	long long m,n,M=1,N=1,m_n=1,mid;
	int i=1;
	scanf("%lld%lld",&m,&n);
	mid=m-n;
	
	if(mid<=n){
		for(;i<=mid;i++)
		   m_n*=i;
		   N=m_n;
		for(;i<=n;i++)
		   N*=i;
		   M=N;
		for(;i<=m;i++)
		   M*=i;
		}
	else{
		for(;i<=n;i++)
		N*=i;
		m_n=N;
		for(;i<=mid;i++)
		m_n*=i;
		M=m_n;
		for(;i<=m;i++)
		M*=i;
	}
	    
		printf("%lld\n",(M/N/m_n));
		
		return 0;
	}