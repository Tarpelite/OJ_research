#include <stdio.h>
int a[1000001]={};
int main(){
	int n,aa,b,k,c=0;
	scanf("%d",&n);
	for(aa=0;aa<n;aa++){
		scanf("%d",&b);
		a[b]+=1;
	}
	scanf("%d",&k);
	for(aa=n;aa>0;aa--){
		if(a[aa]!=0){
			c++;
		}
		if(c==k){
			break;
		}
	}
	printf("%d %d",aa,a[aa]);
	return 0;
}