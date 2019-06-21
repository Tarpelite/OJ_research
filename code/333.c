#include<stdio.h>
int main()
{
	int n,k,M=1,N=0,l,r,s,i,j;
	int a[105],H[105];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<k;j++)
	{
		scanf("%d%d",&l,&r);
		for(i=l;i<=r;i++)
		{
			N=N+a[i];
			M=M*a[i];
			M=M%n;
		}	
		N=N%n;
		if(N>=M)
		{
			s=N;
		    N=M;
		    M=s;
		}
		H[j]=a[N];
		for(i=N+1;i<=M;i++)
		H[j]=H[j]^a[i];
		M=1;
		N=0;
	}
	for(j=0;j<k;j++)
	printf("%d\n",H[j]);
	return 0;
}