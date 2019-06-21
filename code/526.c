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
	i=99999;
	while(i>0){
		if(a[i]==0){
			i--;
		}
		else{
			j++;
			if(j==k){
				printf("%d %d",i,a[i]);
				return 0;
			}
			else{
				i--;
			}
		}
	}
}