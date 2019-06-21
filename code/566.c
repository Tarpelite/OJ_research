#include<stdio.h>
int a[100000]; 
int main()
{ 
	int n, i, j, count=0, k; 
	scanf("%d", &n); 
	for(i=1;i<=n;i++)
	{ 
		scanf("%d", &j); 
		a[j]++; 
	} 
	scanf("%d", &k); 
	for(i = 100001; i >= 1; i--)
	{ 
		if(a[i] != 0) 
			count++; 
		if(count == k)
		{ 
			printf("%d %d", i, a[i]); 
			break; 
		} 
	} 
	return 0; 
}