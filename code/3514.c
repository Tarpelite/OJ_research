#include<stdio.h>
#include<stdlib.h>
#include<string.h>
    int cmp1(const void * a,const void * b)
    {
        return (*(int*)b-*(int*)a);
    }
int a[10000000];
int main()
{
	int i, j, n, k;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &k);
	qsort(a, n, sizeof(int), cmp1);
	int num = 0, ans = 0;
	for(i = 0; i <= k - 1 + num; i++)
	{
		if(a[i] == a[i + 1])
		{
			num++;
		}
	}
	while(a[k - 1 + num - ans] == a[k - 1 + num])
	{
		ans++;
	}
	printf("%d %d", a[k - 1 + num], ans);
}