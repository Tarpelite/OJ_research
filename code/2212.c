#include <stdio.h>

int N(int l, int r);
int M(int l, int r);
int H(int l, int r);
int min(int a, int b);
int max(int a, int b);

int a[100], n;

int main()
{
	int K, l, r;
	
	scanf("%d %d", &n, &K);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < K; i++)
	{
		scanf("%d %d", &l, &r);
		
		printf("%d\n", H( min( N(l, r), M(l, r) ), max( N(l, r), M(l, r) ) ) );
	}
	
	
	return 0;
}

int N(int l, int r)
{
	int ans = 0;
	
	for(int i = l; i <= r; i++)
	{
		ans += a[i];
	}
	ans %= n;
	
	return ans;
}

int M(int l, int r)
{
	int ans = 1;
	
	for(int i = l; i <= r; i++)
	{
		ans *= a[i] % n;
		ans %= n;
	}
	ans %= n;
	
	return ans;
}

int H(int l, int r)
{
	int ans;
	
	if(l == r)
	{
		return a[l];
	}
	
	ans = a[l] ^ a[l + 1];
	for(int i = l + 2; i <= r; i++)
	{
		ans = ans ^ a[i];
	}
	return ans;
}

int min(int a, int b)
{
	if(a > b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

int max(int a, int b)
{
	if(a >= b)
	{
		return a;
	}
	else
	{
		return b;
	}
}