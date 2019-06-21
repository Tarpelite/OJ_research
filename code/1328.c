#include <stdio.h>
#include <stdlib.h>
#define N 100000

int main(int argc, char *argv[]) {
	int n,k,x,i;
	int a[N]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		a[x]++;
	}
		scanf("%d",&k);
		int place=0;
		for(i=N-1;i>=0;i--){
			if(a[i]==0)
				continue;
			place++;
			if(place==k)
				break;
		}
		printf("%d %d",i,a[i]);
	return 0;
}