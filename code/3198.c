#include<stdio.h>
#include<math.h>
#include<string.h>
int n,a[105];

int min(int p,int q)
{
	return (p>q?q:p);
}

int max(int p,int q)
{
	return (p>q?p:q);
}

int N(int p,int q)
{
	int i,ans=0;
	for (i=p;i<=q;i++)
	{
		ans+=a[i];
		ans%=n;
	}
	return ans;
}

int m(int p,int q)
{
	int i,ans=1;
	for (i=p;i<=q;i++)
	{
		ans*=a[i];
		ans%=n;
	}
	return (ans%n);
}

int h(int p,int q)
{
	int i,ans=a[p];
	for (i=p+1;i<=q;i++)
	  ans^=a[i];
	return ans;
}

int main()
{
	int k,i,p,q;
	scanf("%d%d",&n,&k);
	for (i=0;i<n;i++) scanf("%d",&a[i]);
	for (i=1;i<=k;i++)
	{
		scanf("%d%d",&p,&q);
		int tn=N(p,q);
		int tm=m(p,q);
		
	
		printf("%d\n",h(min(tn,tm),max(tn,tm)));
	}
	
    return 0;
}