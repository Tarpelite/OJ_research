#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,k,a[1010]={0},i;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	while(k--){
		int l,r;
		scanf("%d%d",&l,&r);
		int j,sum1=0,sum2=1;
		for(j=l;j<=r;j++){
			int tp=a[j]%n; sum1+=tp;
		}
		sum1%=n;
		for(j=l;j<=r;j++){
			int tp=a[j]%n; sum2*=tp; sum2%=n;
		}
		sum2%=n;
		int Max,Min;
		if(sum1>sum2){
			Max=sum1; Min=sum2;
		}else{
			Max=sum2; Min=sum1;
		}
		int ans;
		ans=a[Min];
		for(j=Min+1;j<=Max;j++) ans^=a[j];
		printf("%d\n",ans);
	}
	return 0;
}