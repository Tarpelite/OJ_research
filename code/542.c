#include<stdio.h>
int ac[100010];
int main(){
	int n,m;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&m);
		ac[m]++;
	}
	scanf("%d",&m);
	int tt=0;
	for(int i=100000;i>=1;i--)
	if(ac[i]){
		tt++;
		if(tt==m){
			printf("%d %d",i,ac[i]);
			break;
		}
	}
	return 0;
}