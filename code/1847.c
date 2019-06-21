#include<stdio.h>
int main()
{
	int m,n,way=1,i;
	scanf("%d%d",&m,&n);
	if(m==0)
		way=0;
	else if(n==0)
		way=1;
	else
	{
		for(i=m;i>=m-n+1;i--)
			way*=i;
		for(i=1;i<=n;i++)	
			way/=i;
	}
		
	printf("%d",way);
	return 0;
}