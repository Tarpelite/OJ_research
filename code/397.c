#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,k,i,j,m,l;
	int cc[200000];
	scanf("%d",&n);
	for(i=1;i<100000;i++)
	cc[i]=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		cc[m]++;
	}
	scanf("%d",&k);
	l=99999;
	for(j=0;j<k;j++)
	{
		i=l;
		while(cc[i]==0)
		i--;
		l=i;
		m=cc[i];
		cc[i]=0;
	}
	printf("%d %d\n",l,m);
	return 0;
}