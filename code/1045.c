#include <stdio.h>
long long a[10000001]={};
long long cnt[10000001]={};

int main (){

int i,n,k;
int p,j=0;
scanf("%d",&n);
for (i=0;i<n;i++){
	scanf("%d",&p);
	a[p] = p;
	cnt [p]++;
}
	scanf("%d",&k);
	for (i=9999999;i>=0;i--){
		if(a[i]>0){
			j++;
		}
		if(j==k){
			printf("%d %d",a[i],cnt[i]);
			break;
		}
		
	}



    
return 0;
}