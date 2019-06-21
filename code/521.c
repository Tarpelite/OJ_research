#include<stdio.h>
int main()
{
	int i,n,a[100000]={0},x,k,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		a[x]++;
	}
	scanf("%d",&k);
	for(i=99999;i>0;i--){
		if(a[i]==0)
		continue;
		else{
			j++;
			if(j==k){
				printf("%d %d",i,a[i]);
				return 0;
			}
		}
	}
}