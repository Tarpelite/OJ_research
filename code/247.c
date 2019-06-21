#include <stdio.h>
#define MAX 100000
int main()
{
	int n,k,x,i=0;
	int arr[MAX]={0};
	scanf("%d",&n);
	for(;i<n;i++){
		scanf("%d",&x);
		arr[x]++;
	}
	scanf("%d",&k);
	int place=0;
	i=MAX-1;
	for(;i>=0;i--){
		if(arr[i]==0)
		    continue;
		place++;
		if(place==k)
		    break;
	}
	printf("%d %d",i,arr[i]);
	return 0;
}