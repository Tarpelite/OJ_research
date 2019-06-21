#include<stdio.h>

#define N 1000005
int vst[N];
int n,k;

int main(){
	scanf("%d",&n);
	while(n--){
		int a; scanf("%d",&a);
		vst[a]++;
	}
	scanf("%d",&k);
	for(int i=N-1;i>=0;i--){
		k-=(vst[i]>0);
		if(k<=0){
			printf("%d %d",i,vst[i]);
			return 0;
		}
	}

	return 0;
}