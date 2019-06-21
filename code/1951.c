#include<stdio.h>
int main()
{
	int a[100001],m,n,i,sum=0,k;
	scanf("%d",&n);
	for(i=0;i<=100000;i++)a[i]=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		a[m]+=1;
	}
	scanf("%d",&k);
	i=100000;
	while(sum<k)
	{
		if(a[i]>0)sum+=1;
		i--;
	}
	printf("%d %d",i+1,a[i+1]);
	return 0;
}