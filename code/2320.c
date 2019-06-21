#include<stdio.h>
int main()
{
	long long m,n,i,j,k,a,b,c;
	scanf("%lld%lld",&m,&n);
	a=1;b=1;c=1;
	if(n==0){printf("0");}
	else if(m==0||m<=n) printf("1");
	else{
	
		for(i=1;i<=m-n;i++)
			a*=i;
		for(j=1;j<=n;j++)
			b*=j;
		for(k=1;k<=m;k++)
			c*=k;	
		printf("%lld",c/a/b);}
	 
	return 0;
		
}