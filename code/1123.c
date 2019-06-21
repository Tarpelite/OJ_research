#include <stdio.h>
#include <stdlib.h>
int N(int x);
int M(int y);
int H(int z,int w);
int max(int p1,int q1);
int min(int h,int m);
int n,k,a[110],l[110],r[110];
int main() 
{

	scanf("%d%d",&n,&k);
	int i=0;
	for(i;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int j=0;
	for(j;j<k;j++)
	{
		scanf("%d%d",&l[j],&r[j]);
	}
	j=0; 
	for(j;j<k;j++)
	{
		printf("%d\n",H(min(N(j),M(j)),max(N(j),M(j))));
	 } 
	
	return 0;
}
int N(int x)
{
	int sum=0;
	int i=l[x];
	for(i;i<=r[x];i++)
		sum+=a[i];
	return sum%n;
}
int M(int y)
{
	int hyx=1;
	int i=l[y];
	for(i;i<=r[y];i++)
		{
			hyx*=a[i];
			while(hyx>n)
				hyx-=n;
		}
	return hyx%n;
}
int H(int z,int w)
{
	int lhx;
	lhx=a[z];
	int i=z+1;
	for(i;i<=w;i++)
		lhx=lhx^a[i];
	return lhx;
}
int max(int p1,int q1)
{
	int tzz;
	if(p1>q1)
	tzz=p1;
	else
	tzz=q1;
	return tzz;
}
int min(int h,int m)
{
	int lcx;
	if(h<m)
	lcx=h;
	else
	lcx=m;
	return lcx;
}