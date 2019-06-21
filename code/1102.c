#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	
	int a,b,i;
	a=1,b=1;
	for(i=m;i>=m-n+1;i--)
	{
		a=a*i;
	}
	
	for(i=n;i>=1;i--)
	{
		b=b*i;
	}
	
	int ans;
	ans=a/b;
	
	printf("%d",ans);
	
	
	
	return 0;
}