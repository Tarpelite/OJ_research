#include<stdio.h>
int a[100001]={0},n,i,j,k,t;
int main()
{
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t);
		a[t]++;
	}
	scanf("%d",&k);
    i=1;j=100001;
    while(i<=k)
    {
    	j--;
		while(a[j]==0) j--;
    	i++;
	}
	printf("%d %d\n",j,a[j]);
	return 0;
}