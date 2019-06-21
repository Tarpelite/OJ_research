#include<stdio.h>
int main(){
	int a[100000]={0};
	int n,i,j,m,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		a[m]++;
	}
	scanf("%d",&k);
	for(i=99999,j=0;i>0;i--){
		if(a[i]==0) continue;
		j++;
		if(j==k)	break;
	}
	printf("%d %d",i,a[i]);
	return 0;
}