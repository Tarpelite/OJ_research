#include<stdio.h>
int main()
{
	int n,K;
	int a[100];
	int l[101],r[101];
	int i,j;
	int N[101],M[101],H[101];
	int X[101],Y[101];
		scanf("%d %d",&n,&K);
	for (i=1-1;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	 }
	for (j=1;j<=K;j++)
	{
		scanf("%d %d",&l[j],&r[j]);
	 }
	
	
	for (j=1;j<=K;j++)
	{
	    X[j]=0;
	    Y[j]=1;
		for(i=l[j];i<=r[j];i++)
		{
			X[j]=X[j]%n+a[i]%n;
			Y[j]=(Y[j]%n)*(a[i]%n)%n;
		}
	    N[j]=(X[j]%n)%n;
	    M[j]=(Y[j]%n)%n;
	    
	    if (N[j]>=M[j])
		{
		    H[j]=a[M[j]];
			for(i=M[j]+1;i<=N[j];i++)
			{
				H[j]^=a[i];
			 } 
			
		}
		if (N[j]<M[j])
		{
			H[j]=a[N[j]];
			for(i=N[j]+1;i<=M[j];i++)
			{
				H[j]^=a[i];
			}
	   }
    }
	for (j=1;j<=K;j++)
	{
		printf("%d\n",H[j]);
	 } 
	return 0;
 }