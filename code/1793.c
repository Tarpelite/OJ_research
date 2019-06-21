#include <stdio.h>
#include<math.h>
int a[100001],k,n,l,r,i,j,b,c;
int N(int l,int r)
{
	int i,sum=0;
	for(i=l;i<=r;i++)
	{
		sum+=a[i];
	}
	return (sum%n);
} 
int M(int l,int r)
{
	int i,sum=1;
	for(i=l;i<=r;i++)
	{
		sum= sum*(a[i]);
		if(sum>n)sum=sum%n;
	}
	return (sum%n);
} 
int H(int l,int r)
{
//	int i,c,b,sum=1;
//	for(i=l+1,b=a[l]^a[l+1];i<r;i++)
//	{
//		b=b ^ a[i+1];
//		return b;
//	}
int sum=a[l];
int i;
for(i=l+1; i<=r;i++ )
 sum^=a[i];
	return sum;
}
int max(int a,int b)
{
	if(a>b)return a;
	else return b;
}
int min(int a,int b)
{
	if(a<b)return a;
	else return b;
}

int main() {
	scanf("%d%d",&n,&k);int min1,max1;
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=k;i++)
	{
		scanf("%d%d",&l,&r);
		min1=min(N(l,r),M(l,r));
		max1=max(N(l,r),M(l,r));
		printf("%d\n",H(   min1 ,  max1 ));
		//printf("%d\n",M(l,r));
		//printf("%d\n",N(l,r));
		//printf("%d\n",H(l,r));
	}
	return 0;
}