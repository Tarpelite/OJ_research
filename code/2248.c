#include<stdio.h>
#include<string.h>
#define max(a,b) a>b?a:b
int main()
{
	int times[100009];
	memset (times,0,sizeof(times));
	int n,k,a,m=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d\n",&a);
		times[a]++;
		m=max(m,a);
	}
	scanf("%d",&k);
	int i=m;
	int j=0;
	while(i>0&&j<k){
		if(times[i]>0) j++;
		i--;
	}
	printf("%d %d",i+1,times[i+1]);
	return 0;
}