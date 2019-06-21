#include <stdio.h>
int a[200001];
int main()
{
	int n,x,k=0,rank;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) scanf("%d",&x),a[x]++;
	scanf("%d",&rank);
	for (int i=100000;i>=1;i--){
		if (a[i]) k++;
		if (k==rank){
			printf("%d %d",i,a[i]);
			break;
		}
	}
	return 0;
}