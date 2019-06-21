#include<stdio.h>
int main()
{
	int m,n;
	int fz=1,fm=1,ans;
	scanf("%d%d",&m,&n);
	for (int i=0;i<n;i++)
	{
		fz*=(m-i);
	}
	for(int j=1;j<=n;j++)
	{
		fm*=j;
	}
	ans=fz/fm;
	printf("%d",ans);
	return 0;
}