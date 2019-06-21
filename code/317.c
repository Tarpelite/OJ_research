#include<stdio.h>
int main()
{
	int n,k,i,j,m,l;
	int a[100086];
	scanf("%d",&n);
	for(i=1;i<100000;i++)
	a[i]=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		a[m]++;
	}
	scanf("%d",&k);
	l=99999;
	for(j=0;j<k;j++)
	{
		i=l;
		while(a[i]==0)
		i--;
		l=i;
		m=a[i];
		a[i]=0;
	}
	printf("%d %d\n",l,m);
	return 0;
}