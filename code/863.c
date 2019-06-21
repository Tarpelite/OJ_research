#include<stdio.h>
int main(){
	int a[100001]={0},i,k,n,x,num=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		a[x]++;
	}
	scanf("%d",&k);
	for(i=100000;;i--)
	{
		if(a[i]==0)
			continue;
		else
			num++;
		if(num==k)
			break;
		else
			continue;
	}
	printf("%d %d",i,a[i]);
	return 0;
}