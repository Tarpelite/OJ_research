#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b);

int main()
{
	int n, k;
	static int a[10000000];
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &k);
	
	qsort(a, n, sizeof(a[0]), cmp);
	
	int num_now = 1, a_now = a[n - 1], temp = 0, num_k;
	for(int i = n - 1; i >= 0; i--)
	{
		if(a[i] < a_now)
		{
			a_now = a[i];
			num_now++;
			if(num_now == k)
			{
				printf("%d ", a[i]);
				num_k = a[i];
				temp++;
				i--;
				while(1)
				{
					if(i < 0)
					{
						printf("%d", temp);
						return 0;
					}
					if(a[i] == num_k)
					{
						temp++;
						i--;
					}
					else
					{
						printf("%d", temp);
						return 0;
					}
				}
			}
		}
	}
	
	return 1;
}

int cmp(const void *a, const void *b)
{
    return *(int *)a-*(int *)b;
}