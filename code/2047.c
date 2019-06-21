#include<stdio.h> 
int main()
{
	
	int n,i,m,ans=1;
	scanf("%d%d",&m,&n);
	if(m==0)
	{
		printf("0");
		return 0;
	}
	if(n>=m)
	{
		printf("1");
		return 0;
	}
	for(i=m;i>m-n;i--) ans*=i;
	for(i=n;i>1;i--) ans/=i;
	printf("%d",ans); 
	return 0;
}