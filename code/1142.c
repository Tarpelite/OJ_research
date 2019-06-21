#include<stdio.h>
int main()
{
	int n,i,x,k;
	int a[100001]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		a[x]++;
	}
	scanf("%d",&k);
	i=100000;
	while(k){
		if(a[i])
		k--;
		i--;
	}
	printf("%d %d",i+1,a[i+1]);
}