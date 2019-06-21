#include <stdio.h>
int main() 
{
	int n,k;
	scanf("%d %d",&n,&k);
	
	int a[100],i;
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int l[100],r[100];
	for (i=0;i<k;i++)
	{
		scanf("%d %d",&l[i],&r[i]);
	}
	
	int N[100],M[100],H[100],min,max,j;
	for (i=0;i<k;i++)
	{
		N[i]=0;
		M[i]=1;
		
		for(j=l[i];j<=r[i];j++)
		{
			N[i]=N[i]+a[j];
			M[i]=M[i]*a[j];
		    while(M[i]>n)
			M[i]=M[i]-n;
		}
		N[i]=N[i]%n;
		M[i]=M[i]%n;
		if(N[i]>=M[i])
		{
			max=N[i];
			min=M[i];
		}
		else
		{
			min=N[i];
			max=M[i];
		}
		H[i]=0;
		for (j=min;j<=max;j++)
		{
			H[i]=H[i]^a[j];
		}
		printf("%d\n",H[i]);
	}	
	return 0;
}