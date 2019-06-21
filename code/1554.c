#include <stdio.h>
#define max(a,b) a>b ? a:b
int a[100000]={0};
int main()
{
	int k,n,i,p=0,m;
	scanf("%d",&n);
	while(k<n){
		scanf("%d",&i);
		a[i]++;
		k++;
		m=max(m,i);
	}
	scanf("%d",&k);
	for(i=m;i>=0;i--){
		if(a[i]!=0) p++;
		if(p==k){
			printf("%d %d\n",i,a[i]);
			return 0;
		}
		else continue;	
	}
}