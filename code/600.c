#include<stdio.h>
#include<stdlib.h>
int a[400];
int mm(int l,int r,int n)
{
	int sum=0;
	for(int j=l;j<=r;j++)
	sum+=a[j];
	sum=sum%n;
	return sum;
}
int nn(int l,int r,int n)
{
	int sum=1;
	for(int j=l;j<=r;j++)
	sum=(sum*a[j])%n;
	return sum;
}
int hh(int l,int r)
{
	int sum=0;
	for(int j=l;j<=r;j++)
	sum=sum^a[j];
	return sum;
}
int main()
{
	int n,k,i,j,m,l[400],r[400],p;
	scanf("%d%d",&n,&k);
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<k;i++)
	scanf("%d%d",&l[i],&r[i]);
	
	for(i=0;i<k;i++)
	{
		
		m=mm(l[i],r[i],n);
		p=nn(l[i],r[i],n);
		
		if(m>p)
		printf("%d\n",hh(p,m));
		
		else
		printf("%d\n",hh(m,p));
	}
	
	return 0;
}