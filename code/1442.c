#include<stdio.h>
long long haha(int m,int n)
{
	long long ans=1;
	if(m<n-m) m=n-m;
	for(int i=m+1;i<=n;i++) ans=ans*i;
	for(int j=1;j<=n-m;j++) ans=ans/j;
	return ans;
}
int main(){
	int m,n;
	long long count=0;
	scanf("%d%d",&n,&m);
	count=haha(m,n);
	printf("%d",count);
}