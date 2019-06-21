#include <stdio.h>
int main(){
	int h,n,i,k,x,ans=0,a[100000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		a[x]++;
	}
	scanf("%d",&k);
	i=99999;
	while(i>=0){
		if(a[i]==0) ans=0+ans;
		else ans=ans+1;
		if(ans==k) break;
		i--;
	}
	printf("%d %d",i,a[i]);
}