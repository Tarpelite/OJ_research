#include<stdio.h>

int main()
{
	int n,m,i,j,k,b;
	int a[100010];
	scanf("%d",&n);
	for(i=1;i<100000;i++)
	a[i]=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		a[m]++;
	}
	scanf("%d",&k);
	b=99999;
	for(j=0;j<k;j++)
	{
		i=b;
		while(a[i]==0)
		i--;
		b=i;
		m=a[i];
		a[i]=0;
	}
	printf("%d %d\n",b,m);
  return 0;
}