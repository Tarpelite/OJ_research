#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h> 
int n,m,a[110],l,r;
int min(int a,int b)
{
	return a>b?b:a;
}
int max(int a,int b)
{
	return a>b?a:b;
}

int N(int l,int r)
{
	int sum=0;
	for(int i=l;i<=r;i++) sum=(sum+a[i])%n;
	return sum;
}

int M(int l,int r)
{
	int cheng=1;
	for(int i=l;i<=r;i++) cheng=(cheng*a[i])%n;
	return cheng;
}

int H(int l,int r)
{
	int yihuo=a[l];
	for(int i=l+1;i<=r;i++) yihuo^=a[i];
	return yihuo;
}

int main()
{
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d",&l,&r);
		printf("%d\n",H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r))) );
	}
	return 0;
}