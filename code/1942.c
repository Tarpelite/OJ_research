#include<stdio.h>
int max(int a, int b)
{
	if(a>=b)
		return a;
	else
		return b;
}
int main()
{
	int a[100001]={};
	int n,k,b,maxx,ans,t;
	int i,j;
	scanf("%d",&n);
	scanf("%d",&b);
	a[b]=a[b]+1;
	maxx=b;
	for(i=1;i<n;i++){
		scanf("%d",&b);
		maxx=max(maxx,b);
		a[b]=a[b]+1;
	}
	scanf("%d",&k);
	for(j=maxx;j>=0;j--){
		if(a[j]!=0)
			k--;
		if(k==0){
			ans=j;
			t=a[j];
			break;
		}
	}
	printf("%d %d",ans,t);
	return 0;
}