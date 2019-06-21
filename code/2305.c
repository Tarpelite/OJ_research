#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[100001]={0};
	int i,t;
	for(i=0;i<n;i++){
		scanf("%d",&t);
		a[t]++;
	}
	int k;
	scanf("%d",&k);
	
	int j=0;//¼ÆÊý£¬±íÊ¾É¨Ãèµ½µÚj´óµÄÊý 
	for(i=100000;;i--){
		if(a[i]>0){
			j++;
		}
		if(j==k){
			printf("%d %d",i,a[i]);
			break;
		}
	}
	
	return 0;
}