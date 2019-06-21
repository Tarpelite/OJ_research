#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long int n,m,p,a[10000001];
long long int k[10000001]={0},t[10000001]={0};
int main()
{
	scanf("%lld",&n);
	
	long long int i=0,j=0,l=10000000;
	
	for(i;i<n;i++)
{
	scanf("%lld",&p);
	k[p]=p;
	t[p]++;
}
	scanf("%lld",&m);
	for(l;l>=1;l--)
	{
	if(k[l]>0)
		j++;
	if(j==m)
		{
		printf("%lld %lld",k[l],t[l]);
		break;	
		}
	}	
	return 0;
}