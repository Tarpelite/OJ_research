#include<stdio.h>

int main()
{
	int n,k,h,m[100001]={},d[100001]={},p[100001];
	int i,j,t=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&h);
		m[h]++;
	}
	for(j=1;j<100001;j++)
	{
		if(m[j]!=0)
		{
			d[t]=m[j];
			p[t]=j;
			t++;
		}
	}
	scanf("%d",&k);
	printf("%d %d",p[t-k],d[t-k]);
	return 0;
}