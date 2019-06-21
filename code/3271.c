#include <stdio.h>
int ha[100000];
int main(){
	int n,k;
	int i,j=0;
	int temp,max=-1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&temp);
		if(temp>max) max=temp;
		ha[temp]++;
	}
	scanf("%d",&k);
	for(i=max;i>-1;i--){
		if(ha[i]) j++;
		if(j==k){
			printf("%d %d",i,ha[i]);
			return 0;
		}
	}
	return 0;
}