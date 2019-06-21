#include<stdio.h>
int main()
{
	long long m,n,i,j,p,q,k,r,ans;
	scanf("%lld%lld",&m,&n);
	p=1;q=1;r=1;
	for(i=0;i<n;i++){
		p=p*(i+1);
	}
	for(j=0;j<m;j++){
		q=q*(j+1);
	}
	for(k=0;k<(m-n);k++){
		r=r*(k+1);
	}
	ans=q/(p*r);
	printf("%lld",ans);
	return 0;
}