#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,k,m=0,a[100001]={};
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		{
			scanf("%d",&x);
			a[x]++;
		}
	scanf("%d",&k);
	for(int j=100000;j>=0;j--)
		{
			if(a[j]!=0)
				m++;
			if(m==k)
				{
					printf("%d %d",j,a[j]);
					break;
				}
		}
	return 0;
 }