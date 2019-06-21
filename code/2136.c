#include <stdio.h>
int main()
{
	int cnt=0,a[200000]={},i,n,tmp,num,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&tmp);
		a[tmp]++; 
	}
	scanf("%d",&k);
	for(i=100004;i>0;i--)
	{
		if(a[i]!=0)
		{
			cnt++;
		}
		if(cnt==k)
		{
			printf("%d ",i);
			printf("%d",a[i]);
			break;
		}
		
	}
}