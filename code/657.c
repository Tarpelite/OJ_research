#include<stdio.h>
#define N 1000005
int t[N];
int n,k,i;
int main(){
	scanf("%d",&n);
	while(n--){
		int a;
        scanf("%d",&a);
		t[a]++;
	}
	scanf("%d",&k);
	for(i=N-1;i>=0;i--)
        {
		k-=(t[i]>0);
		if(k<=0)
		{
			printf("%d %d",i,t[i]);
			return 0;
		}
	}

	return 0;
}