#include<stdio.h> 
#include<stdlib.h>
int a[10000000];
int cmp(const void *a, const void *b)
{
	return *(int*)b-*(int*)a;
}
int main()
{
	int n, k, i, j, tep;
	scanf ("%d", &n);
	for (i=0;i<n;i++){
		scanf ("%d", &a[i]);
	}
	scanf ("%d", &k);
	qsort (a, n, sizeof(int), cmp);
	
	tep=a[0];
	for (i=1, j=1;i<k;j++){
		if (a[j]!=tep){
			tep=a[j];
			i++;
		}
	}
	
	for (i=1;;i++){
		if (a[j]!=tep)
			break;
		j++;
    }
	printf ("%d %d", tep, i);
	return 0;
}