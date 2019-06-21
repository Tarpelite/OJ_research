#include <stdio.h>
int a[100000];              //下标表示数的值 
int main(){
	int n,i,t,k,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&t);
		a[t]++;            //给各个数值投票 
	}
	scanf("%d",&k);
	for(i=100000;i>=1;i--){ 
		if(a[i]>0) c++;                     //a[i]是否有票，c表示从大到小第几个。
		if(c==k) {
			printf("%d %d",i,a[i]);
			break;
		}
	}
	return 0;	
}