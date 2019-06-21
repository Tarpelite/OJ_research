#include<stdio.h>
int main()
{
	int n,m,p,q,i,comb;
	scanf("%d %d",&n,&m);
	if(m==0)	printf("0\n");
	else {
		p=n,q=m;
		for(i=n;i>n-m+1;i--)	p*=(i-1);
		for(i=m;i>1;i--)		q*=(i-1);
		comb=p/q;
		printf("%d\n",comb);
	}
	return 0;
}