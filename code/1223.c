#include<stdio.h>
int min(int,int);
int max(int,int);
int nlr(int,int);
int mlr(int,int);
int hlr(int,int);
int n,k,a[23333],l,r,i=0,t,x;
int main()
{

	scanf("%d %d",&n,&k);
	while(i<n)
	{
		scanf("%d",&a[i]);
		i++;
	}
	for(int i=0; i<k; i++)
	{
		scanf("%d %d",&l,&r);
		t=min(nlr(l,r),mlr(l,r));
		x=max(nlr(l,r),mlr(l,r));
		printf("%d\n",hlr(t,x));
	}
	return 0;
}

int min(int m,int n)
{
	if (m<=n) return m;
	else return n;
}

int max(int m,int n)
{
	if (m>=n) return m;
	else return n;
}

int nlr(int l,int r)
{
	int res=0;
	for(int i=l; i<=r; i++)
		res=(res+a[i])%n;
	return res;
}

int mlr(int l, int r)
{
	int res=1;
	for(int i=l; i<=r; i++)
		res=(res*a[i])%n;
	return res;
}

int hlr(int t ,int x)
{
	int res=0;
	for(int i=t; i<=x; i++)
		res^=a[i];
	return res;
}