#include <stdio.h>
int main() 
{
	
 	int m,n,i=2;
 	long long int p=1,q=1,l=1,s;
 	scanf("%d%d",&m,&n);
 	
 	while(i<=m)
 	{p=p*i;
 	i=i+1;}
 	
	i=2;
	
	while(i<=n)
	{q=q*i;
	i=i+1;}
	i=2;
	
	while(i<=(m-n))
	{l=l*i;
	i=i+1;}
	
	s=p/(q*l);
	printf("%lld",s);
	
	return 0;
}