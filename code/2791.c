#include<stdio.h>
int main(){
	int n,k,a[1010],i;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	while(k--){
		int l,r;
		scanf("%d%d",&l,&r);
		int sum1=0,sum2=1,j;
		for(j=l;j<=r;j++){
			int tp=a[j]%n; sum1+=tp; sum1%=n;
		}
		sum1%=n; 
		for(j=l;j<=r;j++){
			int tp=a[j]%n; sum2*=tp; sum2%=n;
		}
		sum2%=n;
		int Min,Max;
		if(sum1>sum2){
			Min=sum2; Max=sum1;
		}else{
			Min=sum1; Max=sum2;
		}
		int ans;
		ans=a[Min];
		for(j=Min+1;j<=Max;j++) ans^=a[j];
		printf("%d\n",ans);
	}
}