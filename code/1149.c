#include <stdio.h>
int main()
{
	int n,i,temp,count=0,k,a[100001]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&temp);
		a[temp]++;
	} 
	scanf("%d",&k);
	for(i=100001;count<k;i--)
	{
	 	if(a[i]!=0)
	 	count++;
	}
	printf("%d %d",i,a[i]);
	return 0;
}