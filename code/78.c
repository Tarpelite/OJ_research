#include<stdio.h>

int main()
{
	int n,i,k,z=0;
	int a[100000]={0},t,temp=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
		a[t]++;
		if(temp<t)
		{
			temp=t;
		}
		
	}
	scanf("%d",&k);
	for(i=temp;;i--)
	{
		if(a[i]!=0)
		{
			z++;
		}
		
		if(z==k)
		{
			break;
		}
	}
	printf("%d %d",i,a[i]);
	
	

   return 0;
   }