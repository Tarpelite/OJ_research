#include<stdio.h>
#include<string.h>
#define max(a,b)	a>b?a:b
int main(){
	int t[100010];
	memset(t,0,sizeof(t));
	int n,k,a,m=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		t[a]++;
		m=max(m,a);
	}
	scanf("%d",&k);
	int i=m,j=0;
	while(i>0 && j<k){
		//printf("!%d\n",i);
		if(t[i]>0)	j++;
		i--;
	}
	printf("%d %d",i+1,t[i+1]);
	return 0;
}