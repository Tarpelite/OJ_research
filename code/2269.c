#include<stdio.h>
#include<string.h>
#define max(a,b) a>b?a:b
int main(){
	int n,k,x[100001],a,i,j,m=0;
	scanf("%d",&n);
	memset(x,0,sizeof(x));
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		x[a]++;
		m=max(m,a);
	}
	scanf("%d",&k);
	while(k>0){
		if(x[m]>0)
			k--;
		m--;
	}
	printf("%d %d",m+1,x[m+1]);
	return 0;
}