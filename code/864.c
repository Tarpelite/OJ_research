#include<stdio.h>
#define max(a,b) a>=b?a:b
#define min(a,b) a>=b?b:a
int main()
{
	int n,k,a[10010]={0},i,l,r;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	while(k){
		scanf("%d%d",&l,&r);
		int x=0,y=1;
		for(i=l;i<=r;i++){
			int tp=a[i]%n;
			x+=tp;
			x%=n;
		}
		for(i=l;i<=r;i++){
			int tp=a[i]%n;
			y*=tp;
			y%=n;
		}
		int Max,Min;
		Max=max(x,y);
		Min=min(x,y);
		int z=a[Min];
		for(i=Min+1;i<=Max;i++) z^=a[i];
		printf("%d\n",z);
		k--;
	}
	return 0;
}