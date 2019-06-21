#include <stdio.h>
int main()
{
	int n,k,x,i=0;
	int a[100000]={0};
	scanf("%d",&n);
	for(;i<n;i++){
		scanf("%d",&x);
		a[x]++;
	}
	scanf("%d",&k);
	int place=0;
	i=100000-1;
	for(;i>=0;i--){
		if(a[i]==0)
		    continue;
		place++;
		if(place==k)
		    break;
	}
	printf("%d %d",i,a[i]);
	return 0;
}