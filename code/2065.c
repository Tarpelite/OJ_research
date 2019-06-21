#include<stdio.h>
#define N 100001
int main()
{
	int n,x,k,i,j=0,a[N]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&x);
	    a[x]++;
	}
	scanf("%d",&k);
	for(i=N-1;k>0;i--){
		if(a[i]!=0) k--;
	}
	printf("%d %d%",i+1,a[i+1]);
	return 0;
}