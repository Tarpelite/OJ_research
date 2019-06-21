#include<stdio.h>
int s[100005];
int main()
{
	int n,i,j=0,k,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
		s[t]=s[t]+1;
	}
	scanf("%d",&k);
	for(i=100000;j!=k;i--)
	{
		if(s[i]!=0) j++;
	}
	printf("%d %d",i+1,s[i+1]);
	return 0;
}