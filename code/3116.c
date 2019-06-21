#include <stdio.h>
int a[1000];
int t;

int n(int l,int r)
{
	int i;
	long long s=0;
	for(i=l;i<r+1;i++)
	{
	  	s=(s+a[i])%t;
	}
	return s;
}
int m(int l,int r)
{
	int i;
	long long s=1;
	for(i=l;i<r+1;i++)
	{
	  	s=(s*a[i])%t;
	}
	return s;
}
int h(int l,int r)
{
	int i;
	long long s=0;
	s=a[l];
	for(i=l+1;i<r+1;i++)
	{
	  	s=s^a[i];
	}
	return s;
}
int max(int a,int b)
{
	return a<b?b:a;
}
int min(int a,int b)
{
	return a>b?b:a;
 } 
int main()
{
	int k;
	scanf("%d%d",&t,&k);
	int i;
	int s;
	int l[1000],r[1000];
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<k+1;i++)
	{
		scanf("%d%d",&l[i],&r[i]);
	}
	for(i=1;i<k+1;i++)
	{
		s=h(min(n(l[i],r[i]),m(l[i],r[i])),max(n(l[i],r[i]),m(l[i],r[i])));
		printf("%d\n",s);
	}
	return 0;
 }