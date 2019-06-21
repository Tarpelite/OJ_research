#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int a[10000], n, K;
int N(int l, int r);
int M(int l, int r);
int h(int l, int r);

int main()
{
	int l, r;
	int i, j, p;
	int e, h, swh;
	int b[100];
	scanf("%d%d", &n, &K);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (j = 1,p = 0; j <= K; j++,p++)
	{
		scanf("%d%d", &l, &r);
		e = N(l, r);
		h = M(l, r);
		if(e>h)
		{
			swh=e;
			e=h;
			h=swh;
		}
		b[p]=H(e,h);
			
	}
	for(p=0;p<K;p++)
	printf("%d\n",b[p]);
}
int N(int l, int r)
{
	int sum1 = 0;
	for (; l <= r; l++)
	{
		sum1 = (sum1 + a[l])%n;
	}
	return sum1;
}
int M(int l, int r)
{
	int sum2 = 1;
	for (; l <= r; l++)
	{
		sum2 = (sum2 * a[l])%n;
	}
	return sum2 ;
}
int H(int l, int r)
{	if(l==r)
		return a[l];
	else
	{
	int sum3 = a[l] ^ a[l + 1];
	for (l = l + 2; l <= r; l++)
	{
		sum3 = sum3 ^ a[l];
	}
	return sum3;
	}
}