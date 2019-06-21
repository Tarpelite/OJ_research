#include <stdio.h>
#include <stdlib.h>
int a[10000005];
int ret(const void *a, const void *b){
	return *(int *) a > *(int *) b ? -1 : 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(a[0]), ret);
	
	int k;
	scanf("%d", &k);
	
	int i = 0, rank = 0;
	int u, count = 0;
	while (i < n) {
		rank++;
		int j = i + 1;
		while (a[j] == a[i]) j++;
		if (rank == k) {
			u = a[i];
			count = j - i;
			break;
		}
		i = j;
	}
	
	printf("%d %d\n", u, count);
	return 0;
}