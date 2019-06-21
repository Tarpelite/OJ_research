#include<stdio.h>
int n,k,a[10000000];
int N(int l,int r) 
{
	int j,s=0;
	for(j=l;j<=r;j++)
	s=s+a[j];
	return s%n;
}
int M(int l,int r)
{
	int j,s=1;
	for(j=l;j<=r;j++)
	s=(s%n)*(a[j]%n);
	return s%n;
}
int H(int l,int r)
{
	int j,s;
	s=a[l];
	for(j=l+1;j<=r;j++)
	s=s^a[j];
	return s;
}
int main()
{
	int i,l,r,min,max,x,y;
	scanf("%d%d",&n,&k);
	for(i=0;i<=n-1;i++) scanf("%d",&a[i]);
	for(i=1;i<=k;i++)
	{
		scanf("%d%d",&l,&r);
		x=N(l,r);
		y=M(l,r);
		if(x<y) 
		{
			max=y;min=x;
		}
		else
		{
			max=x;min=y;
		}
		printf("%d\n",H(min,max));
	}
	return 0;
}