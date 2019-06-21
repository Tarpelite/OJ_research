#include<stdio.h>
int n,k,a[10000000];
int N(int l,int r) 
{
	int i=0,s=0;
	for(i=l;i<=r;i++)
	{

	s=s+a[i];	}
	return s%n;
}
int M(int l,int r)
{
	int i=0,s=1;
	for(i=l;i<=r;i++)
	s=(s%n)*(a[i]%n);
	return s%n;
}
int H(int l,int r)
{
	int i=0,s=0;
	s=a[l];
	for(i=l+1;i<=r;i++)
	s=s^a[i];
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
			max=y;
			min=x;}
		else
			{
			max=x;
			min=y;}
		printf("%d\n",H(min,max));
	}
	return 0;
}