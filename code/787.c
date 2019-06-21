#include<stdio.h>
int a[100001];
int main() {
	int n,i,j,k,m=100000;
	scanf("%d",&n);
	for(i=0; i<n; i++) {
		scanf("%d",&j);
		a[j]++;
	}
	scanf("%d",&k);
	while(k>0){
		if(a[m]!=0)
			k--;
			m--;
	}
	m++;
	printf("%d %d",m,a[m]);
	return 0;
}