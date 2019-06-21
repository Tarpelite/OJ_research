#include <stdio.h>

int data[101];
int ans[101];

long long mod_mult(long long a, long long b, long long mod) {
    a %= mod;
    b %= mod;
    long long ans = 0;
    while (b > 0) {
            if (b & 1) {
                ans += a;
    if (ans >= mod)
        ans -= mod;
        }
    a <<= 1;
    if (a >= mod)
        a = a - mod;
    b >>= 1;
    }
    return ans;
    }


int H(int a,int b)
{
	int i,flag=0;
	for(i=a;i<=b;i++)
	{
		flag^=data[i];
	}
	return flag;
}

int min(int a,int b)
{
	if(a>b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

int max(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int N(int a,int b,int c)
{
	int i,flag=0;
	for(i=a;i<=b;i++)
	{
		flag+=data[i];
	}
	flag%=c;
	return flag;
}

int M(int a,int b,int c)
{
	int i,flag=1;
	for(i=a;i<=b;i++)
	{
		flag=mod_mult(flag,data[i],c);
	}
	return flag;
}


int main()
{
	int n,K,i,l,r;
	scanf("%d%d",&n,&K);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&data[i]);
	}
	for(i=1;i<=K;i++)
	{
		scanf("%d%d",&l,&r);
		ans[i]=H(min(N(l,r,n),M(l,r,n)),max(N(l,r,n),M(l,r,n)));
		printf("%d\n",ans[i]);
	}
	return 0;
}