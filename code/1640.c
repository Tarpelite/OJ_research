#include <stdio.h>
#define max(x,y) (x>y?x:y)
#define min(x,y) (x<y?x:y)
int N(int,int);
int M(int,int);
int H(int,int);
int n,k,a[100]={0},j;
int main()
{
	scanf("%d%d",&n,&k);
	int l,r,i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
		scanf("%d%d",&l,&r);
		printf("%d\n",H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r))));
	}
	return 0;
}

int N(int l,int r)
{
	long long sum=0;
	for(j=l;j<=r;j++)
	{
		sum+=a[j];
		sum%=n;
	}
	return sum;
}

int M(int l,int r)
{
	long long mul=1;
	for(j=l;j<=r;j++)
	{
		mul*=a[j];
		mul%=n;
	}
	return mul;
}

int H(int l,int r)
{
	long long y=a[l];
	for(j=l+1;j<=r;j++)
	{
		y^=a[j];
	}
	return y;
}