#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int n,m,a[110],l,r;
int min(int a,int b)
{
	return a>b?b:a;
}
int max(int a,int b)
{
	return a>b?a:b;
}
int Ai(int l,int r)
{
	int sum=0;
	for(int i=l;i<=r;i++) sum=(sum+a[i])%n;
	return sum;
}
int Bi(int l,int r)
{
	int sum=1;
	for(int i=l;i<=r;i++) sum=(sum*a[i])%n;
	return sum;
}
int Ci(int l,int r)
{
	int sum=a[l];
	for(int i=l+1;i<=r;i++) sum^=a[i];
	return sum;
}
void slove(int l,int r)
{
	printf("%d\n",Ci(min(Bi(l,r),Ai(l,r)),max(Bi(l,r),Ai(l,r))) );
}
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d",&l,&r);
		slove(l,r);
	}
	return 0;
}