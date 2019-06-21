#include <stdio.h>
int main()
{
	int m,n,i,v,w,ans;
	scanf("%d %d",&m,&n);
	v=m;
	for(i=m-1;i>m-n;i--)
	{
		v*=i;
	}
	w=n;
	for(i=n-1;i>=1;i--)
	{
		w*=i;
	}
	ans=v/w;
	printf("%d ",ans);
}