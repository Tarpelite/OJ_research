#include<stdio.h>
int a[200];
int mm(int l,int r,int n)
{
	int s=0;
	for(int j=l;j<=r;j++)
	s+=a[j];
	s=s%n;
	return s;
}
int nn(int l,int r,int n)
{
	int s=1;
	for(int j=l;j<=r;j++)
	s=(s*a[j])%n;
	return s;
}
int hh(int l,int r)
{
	int s=0;
	for(int j=l;j<=r;j++)
	s=s^a[j];
	return s;
}
int main()
{
	int n,k,i,j,m,l[200],r[200],p;
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