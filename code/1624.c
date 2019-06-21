#include <stdio.h>
int N(int l, int r);
int M(int l, int r);
int H(int l, int r);
int max(int a, int b);
int min(int a, int b);
int i, n;
int A[10000]={};
int main()
{
	int K, j;
	scanf("%d%d", &n, &K);
	int l[100]={}, r[100]={}, d[100]={};
	for(i=0;i<n;i++)
	    scanf("%d", &A[i]);
	for(i=0;i<K;i++)
	    scanf("%d%d", &l[i], &r[i]);
	for(j=0;j<K;j++)
	    d[j]=H(min(N(l[j],r[j]),M(l[j],r[j])), max(N(l[j],r[j]),M(l[j],r[j])));
	for(i=0;i<K;i++)
	{
		printf("%d", d[i]);
		printf("\n");
	}
	return 0;
	
}
int N(int l, int r)
{
	int S=0, x;
	for(i=l;i<=r;i++)
	{
		S=(S+A[i])%n;
	}
	x=S%n;
	return x;
} 
int M(int l, int r)
{
	int S=1, y;
	for(i=l;i<=r;i++)
	{
		S=(S*A[i])%n;
	}
	y=S%n;
	return y;
}
int H(int l, int r)
{
	int S=A[l];
	for(i=l+1;i<=r;i++)
	{
		S=S^A[i];
	}
	return S;
}
int max(int a, int b)
{
	int max=a;
	if(b>a)
	    max=b;
	return max;
}
int min(int a, int b)
{
	int min=a;
	if(b<a)
	    min=b;
	return min;
}