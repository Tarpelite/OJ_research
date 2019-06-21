#include<stdio.h>
#include<math.h>
int zhishu(int x)
{
	int i,k,a=0;
	k=(int)sqrt((double)x);
	for(i=2;i<=k;i++)
	{
		if(x%i==0)
		break;
	}
	if(i>k)
	{
	i>k;
	return x;}
	else
	{
		return 1;
	}
}
	

int main()
{
	int n,j,result;
	scanf("%d",&n);
	for(j=n+1;j<=199999;j++)
	{
		result=zhishu(j);
		if(result==1)
		continue;
		
		else
		break;
		
	}
	printf("%d",result);
	return 0;
 }