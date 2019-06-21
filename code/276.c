#include<stdio.h>

int main()
{
	int n,K,i,j;
	scanf("%d%d",&n,&K);
	int s[n];
	for(i=1;i<=n;i++)
			scanf("%d",&s[i-1]);
			
	int B[K][2];
	for(i=1;i<=K;i++)
		for(j=1;j<=2;j++)
			scanf("%d",&B[i-1][j-1]);
	
	int sum[K];
	int mod[K];
	int ti[K];

	
	for(i=1;i<=K;i++)
		{
		mod[i-1]=1;
		sum[i-1]=0;
			for(j=B[i-1][0];j<=B[i-1][1];j++)
			{
			sum[i-1]+=s[j];
			mod[i-1]*=s[j]%n;
			mod[i-1]=mod[i-1]%n;
		
			}
		sum[i-1]=sum[i-1]%n;
		if(sum[i-1]>mod[i-1])
		{
			ti[i-1]=sum[i-1];
			sum[i-1]=mod[i-1];
			mod[i-1]=ti[i-1];

		}

		}
	
	int H[K];
	
	for(i=1;i<=K;i++)
	{
		j=sum[i-1];
		H[i-1]=s[j];
		for(;j<mod[i-1];j++)
			H[i-1]=H[i-1]^s[j+1];
			
		printf("%d\n",H[i-1]);
	}
	return 0;
	


		
	
}