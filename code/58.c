#include<stdio.h>
int max(int a, int b)
{
	return a > b ? a : b;
}
int min(int a, int b)
{
	return a < b ? a : b;
}
int N(int l, int r, int a[], int n){
	int i, ans = a[l];
	for(i = l + 1; i <= r; i++)
	{
		ans += a[i];
	}
	return ans % n;	
}
int M(int l, int r, int a[], int n){
	int i, ans = a[l];
	for(i = l + 1; i <= r; i++)
	{
		ans *= a[i];
		ans %= n;
	}
	return ans % n;	
}
int H(int l, int r, int a[])
{
	int i, ans = a[l];
	for(i = l + 1; i <= r; i++)
	{
		ans ^= a[i];
	}
	return ans;
}
int main()
{
	int n, K, a[101];
	scanf("%d %d", &n, &K);
	int i;
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	while(K--){
		int l, r;
		scanf("%d %d", &l, &r);
		printf("%d\n", H(min(N(l,r,a,n),M(l,r,a,n)),max(N(l,r,a,n),M(l,r,a,n)),a));
	}
	
	return 0;
}