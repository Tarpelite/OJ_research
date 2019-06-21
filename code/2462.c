#include<stdio.h>
#include<stdlib.h>
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
int n,a[100010],k;
int main()
{
	int t,Max=0;
	scanf("%d",&n);
	while(n--) scanf("%d",&t),a[t]++,Max=max(Max,t);
	scanf("%d",&k);
	while(--k)
		while(!a[--Max]);
	printf("%d %d\n",Max,a[Max]);
	return 0;
}