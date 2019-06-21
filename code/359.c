#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,k,i,j,m,l;
	int b[100010];
	scanf("%d",&n);
	for(i=1;i<100000;i++)
	b[i]=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		b[m]++;
	}
	scanf("%d",&k);
	l=99999;
	for(j=0;j<k;j++){
		i=l;
		while(b[i]==0)
		i--;l=i;
		m=b[i];
		b[i]=0;
	}
	printf("%d %d\n",l,m);
	return 0;
}