#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int n,m,a[110],l,r;


int max(int a,int b)
{
	return a>b?a:b;
}

int min(int a,int b)
{
	return a>b?b:a;
}


int Ni(int l,int r)
{
	int sum=0;
	for(int i=l;i<=r;i++) sum=(sum+a[i])%n;
	return sum;
}

int Mi(int l,int r)
{
	int sum=1;
	for(int i=l;i<=r;i++) sum=(sum*a[i])%n;
	return sum;
}

int Hi(int l,int r)
{
	int sum=a[l];
	for(int i=l+1;i<=r;i++) sum^=a[i];
	return sum;
}

void re(int l,int r)
{
	printf("%d\n",Hi(min(Ni(l,r),Mi(l,r)),max(Ni(l,r),Mi(l,r))) );
}

int main()
{
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d",&l,&r);
		re(l,r);
	}
	return 0;
}