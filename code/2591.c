#include<stdio.h>
#define  MAX(x, y)  x>y?x:y
#define  MIN(x, y)  x<y?x:y
int N(int, int);
int M(int, int);
int H(int, int);
int a[100], n, l, r;
int main()
{
	int K, x, y;
	scanf ("%d%d", &n, &K);
	for(int i=0;i<n;i++){
		scanf ("%d", &a[i]);
	}
	
	for(int i=0;i<K;i++){
		scanf ("%d%d", &l, &r);
		x=N(l, r);
		y=M(l, r);
		printf ("%d\n", H(MIN(x, y), MAX(x, y)));
	}
	return 0;
}

int N(int l, int r)
{
	int sum=0;
	for (int i=l;i<=r;i++){
		sum+=(a[i]%n);
	}
	return sum%n;
}

int M(int l,int r)
{
	int mul=1;
	for (int i=l;i<=r;i++){
		mul=(mul*a[i])%n;
	}
	return mul%n;
}

int H(int min, int max)
{
	int res=a[min];
	for (int i=min+1;i<=max;i++){
		res=res^a[i];
	}
	return res;
}