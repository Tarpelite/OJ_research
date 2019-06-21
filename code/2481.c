#include<stdio.h>
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
int n,a[100000];
int ok(int p)
{
	int i;
	for(i=1;i<=n;++i)
		if(!(p%a[i]))
			return 0;
	return 1;
}
int main()
{
	int t,p;
	scanf("%d",&t);
	a[1]=2,n++;
	while(a[n]<=t)
	{
		p=a[n];
		while(!ok(p)) p++;
		a[++n]=p;
	}
	printf("%d",a[n]);
	return 0;
}