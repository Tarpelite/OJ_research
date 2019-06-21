#include <stdio.h>
int main()
{
	int n,k,a[100005]={0},t,m=0,i=0,j=0;
	scanf("%d",&n);
	for (i=100000000;i>=0&&j<n;i--){
		scanf("%d",&t);
		a[t]++;
		j++;
	}
	scanf("%d",&k);
	for (i=100000;i>=0;i--){
		if (a[i]==0) continue;
		else m++;
		if (m==k) break;
	}
	printf("%d %d",i,a[i]);
	return 0;
}