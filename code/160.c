#include <stdio.h>
#define MAX 100000
int main()
{
	int n,k,x,i=0;
	int a[MAX]={0};
	scanf("%d",&n);
	for(;i<n;i++){
		scanf("%d",&x);
		a[x]++;
	}
	scanf("%d",&k);
	int place=0;
	i=MAX-1;
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