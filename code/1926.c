#include<stdio.h>
int a(int n, int m)
{
	int ans=1;
	int i;
	for(i=0;i<n;i++){
		ans=ans*m;
		m--;
	}
	return ans;
}
int main()
{
	int m,n,ans;
	scanf("%d%d",&m,&n);
	ans=a(n,m)/a(n,n);
	printf("%d",ans);
	return 0;
}