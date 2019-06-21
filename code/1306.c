#include<stdio.h>
int main()
{
	int i,n,k,l,r,j;
	scanf("%d%d",&n,&k);
	int A[n],N,M,H;
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);

//	for(i=0;i<n;i++)
//		printf("%d ",A[i]);
//	printf("\n");

	for(i=1;i<=k;i++)
	{
		scanf("%d%d",&l,&r);
		//N
		N=0;
		for(j=l;j<=r;j++)
			N+=A[j];
//		printf("%d\n",N);
		N=N%n;
//		printf("%d\n",N);
		//M
		M=1;
		for(j=l;j<=r;j++)
			M=((M%n)*(A[j]%n))%n;
//		printf("%d\n",M);
//		printf("%d\n",M);
		if(N>M)
		{
			j=N;
			N=M;
			M=j;
		}//N<M
		//H
		H=A[N];
		N++;
		for(j=N;j<=M;j++)
			H=H^A[j];
		printf("%d\n",H);
	}
	return 0;
}