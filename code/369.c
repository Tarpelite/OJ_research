#include <stdio.h>
# include <stdlib.h>
int a[10000000], j[10000000];
int cmp (const void * a, const void * b)
{
	return *(int*)b-*(int *)a;
}
int main ()
{
	long long int n, k, h, i, m, sum=0;
	scanf("%lld", &n);
	for(i=0; i<n; ++i)
    {
	scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(a[0]), cmp);
	scanf("%lld", &k);
	i=0;
	for(m=0, h=0; h<k; m=sum, ++h)
	{
	   for(;a[m]==a[i]; ++i)
        {
            j[h]++;
        }
	     sum+=j[h];
	     i=sum;
    }
	printf("%d %lld", a[sum-1], j[k-1]);
	return 0;
}