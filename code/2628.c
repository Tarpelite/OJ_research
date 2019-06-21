#include<stdio.h>

#define N 1000005
int a[N];
int n,k;

int main(){
	scanf("%d",&n);
	while(n--){
		int x; scanf("%d",&x);
		a[x]++;
	}
	scanf("%d",&k);
	for(int i=N-1;i>=0;i--){
		k-=(a[i]>0);
		if(k<=0)
		{
			printf("%d %d",i,a[i]);
			return 0;
		}
	}

	return 0;
}