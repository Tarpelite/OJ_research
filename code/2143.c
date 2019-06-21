#include<stdio.h>
int a[1000000];
int main()
{
	int n,k,i;
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		a[k]+=1;
	}
	scanf("%d",&k) ;
	for(i=100000;i>=0;i--)
	{
		if(a[i]!=0)
		{
			k--;
		}
		if(k==0)
		{
			printf("%d %d",i,a[i]);
			break;
		}
	}
	return 0;
 }